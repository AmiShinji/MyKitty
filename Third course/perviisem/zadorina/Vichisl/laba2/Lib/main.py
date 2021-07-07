from queue import Queue # Запасы Ai = [20, 20, 20, 20] # Потребности Bj = [19, 19, 19, 19, 4] # Цены price = [[15, 1, 22, 19, 1], [21, 18, 11, 4, 3], [26, 29, 23, 26, 24], [21, 10, 3, 19, 27]] # Найти минимальную цену в матрице def getMin(price): mini, minj = -1, -1 for i in range(len(price)): for j in range(len(price[0])): if price[i][j] >= 0 and (mini == -1 or price[i][j] < price[mini][minj]): mini, minj = i, j return mini, minj # Построение опорного плана методом наименьшей стоимости def build_base_plan(a, b, price): plan = [[0 for x in range(5)] for y in range(4)] mi, mj = None, None while mi != -1: mi, mj = getMin(price) if a[mi] < b[mj]: plan[mi][mj] = a[mi] b[mj] -= a[mi] for j in range(5): price[mi][j] = -1 a[mi] = 0 else: plan[mi][mj] = b[mj] a[mi] -= b[mj] for i in range(4): price[i][mj] = -1 b[mj] = 0 return plan # Вычислить значение целевой функции def calc_plan(price, plan): s = 0 for i in range(len(price)): for j in range(len(price[0])): if plan[i][j] > 0: s += price[i][j] * plan[i][j] return s # Проверка вырожденности плана

s = 0 for x in plan: for y in x: if y > 0: s += 1 return s != len(price) + len(price[0]) - 1 # Вычислить потенциалы u и v def getUV(plan, price): u = [None for x in range(len(price))] v = [None for x in range(len(price[0]))] u[0] = 0 q = Queue() for i in range(len(price)): q.put(i) while not q.empty(): i = q.get() if u[i] is None: f = True for j in range(len(price[0])): if plan[i][j] > 0 and v[j] is not None: u[i] = price[i][j] - v[j] f = False if f: q.put(i) continue for j in range(len(price[0])): if plan[i][j] > 0: v[j] = price[i][j] - u[i] return u, v # Проверка оптимальности плана def isOptim(plan, price, u, v): mi, mj = 0, 0 result = True for i in range(len(price)): for j in range(len(price[0])): if plan[i][j] == 0 and u[i] + v[j] > price[i][j]: if u[i] + v[j] - price[i][j] > u[mi] + v[mj] - price[mi][mj]: mi, mj = i, j result = False return result, mi, mj # Проверка границ матрицы def inMap(i, j): return 0 <= i <= 3 and 0 <= j <= 4 def isPovorot(i1, j1, i2, j2, i3, j3): return not (i1 == i2 == i3 or j1 == j2 == j3) # Построение цикла def buildPerem(plan, mi, mj): di = [0, 1, 0, -1]

dj = [1, 0, -1, 0] q = Queue() q.put((mi, mj, [(mi, mj)])) while not q.empty(): wi, wj, l = q.get() for z in range(4): x = 1 while inMap(wi + di[z] * x, wj + dj[z] * x): qi, qj = wi + di[z] * x, wj + dj[z] * x if qi == mi and qj == mj and (len(l) < 2 or (isPovorot(qi, qj, wi, wj, l[-2][0], l[-2][1]))): return l if plan[qi][qj] != 0 and not (qi, qj) in l and ( len(l) < 2 or (isPovorot(qi, qj, wi, wj, l[-2][0], l[-2][1]))): q.put((qi, qj, l + [(qi, qj)])) x += 1 # Обработка цикла def handlePerem(plan, l): mx = 1 for x in range(1, len(l), 2): if plan[l[x][0]][l[x][1]] < plan[l[mx][0]][l[mx][1]]: mx = x m = plan[l[mx][0]][l[mx][1]] sign = 1 for x in range(len(l)): plan[l[x][0]][l[x][1]] += sign * m sign *= -1 return plan def prettyPrintTable(price, plan, ai, bj): from tabulate import tabulate header = [''] + ['B' + str(i) for i in range(1, 6)] + ['Запасы'] table = [] for i in range(4): row = ['A' + str(i)] for j in range(5): if plan[i][j] > 0: row += [str(price[i][j]) + '[' + str(plan[i][j]) + ']'] else: row += [str(price[i][j])] row.append(ai[i]) table.append(row) table.append(['Потребности'] + [bj[j] for j in range(5)] + ['']) print(tabulate(table, header, tablefmt='fancy_grid')) def main(): if sum(Ai) != sum(Bj): print('Транспортная задача открытая') return #Построение опорного плана import copy plan = build_base_plan(Ai[:], Bj[:], copy.deepcopy(price)) print('Опорный план:') prettyPrintTable(price, plan, Ai, Bj) print('Значение целевой функции при опорном плане:', calc_plan(price, plan))

if isVirozd(plan): print('Опорный план вырожденный') return while True: #Вычисление потенциалов u, v = getUV(plan, price) #Проверка оптимальности r, mi, mj = isOptim(plan, price, u, v) if r: break #Вычисление нового плана plan = handlePerem(plan, buildPerem(plan, mi, mj)) print('Оптимальный план:') prettyPrintTable(price, plan, Ai, Bj) print('Min:', calc_plan(price, plan)) if __name__ == '__main__': main()