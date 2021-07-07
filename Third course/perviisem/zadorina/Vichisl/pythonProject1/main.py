A = [
    [2, 2, 0, 3, 1, 0,0],#коэффициенты ограничений
    [0, 1, 2, 1, 0, 0],
    [1, 2, 2, 2, 0, 1]
]
Z = [3, 2, 1, 1, 0, 0, 0] #Z строка
B = [9,#Свободные члены
     5,
     8]
Bi = [4, 3, 5]#Базис
Ci = [2, 3, 0, -1, 0, 0]#Коэффициенты функции


def print_table():#Вывод таблицы
    print('Симплекс таблица')
    print('Базис', end=' ')
    print('Св.чл.', end=' ' * 3)
    for i in range(1, 7):
        print('X', i, end=' ' * 6, sep='')
    print()
    for x in range(3):
        print('X', Bi[x] + 1, sep='', end=' ' * 5)
        print('{:5.4f}'.format(B[x]).rjust(7), end=' ')
        for i in range(6):
            print('{:5.4f}'.format(A[x][i]).rjust(7), end=' ')
        print()
    print('Z ', end='     ')
    for x in Z:
        print('{:5.4f}'.format(x).rjust(7), end=' ')
    print()


def is_end():#Проверка оптимальности плана
    return min(Z) >= 0

def get_col():#Поиск опорного столбца
    maxi = 1
    for x in range(1,7):
        if (Z[maxi])>(Z[x]):
            maxi = x
    return maxi-1

def get_row(col):#Поиск опорной строки
    main_row = 0
    for i in range(3):
        if (A[i][col] > 0):
            main_row = i
            break
    for i in range(main_row + 1, 3):
        if (A[i][col] > 0) and (
                B[i] / A[i][col] < B[main_row] / A[main_row][col]):
            main_row = i
    return main_row

def upd(row,col):#Пересчёт симплекс-таблицы
    Bi[row]=col
    mod = [-A[i][col] / A[row][col] for i in range(3)]
    for i in range(3):
        if i!=row:
            for j in range(6):
                A[i][j]+=A[row][j]*mod[i]
            B[i]=B[row]*mod[i]+B[i]
    mod = -Z[col+1]/A[row][col]
    Z[0]+=B[row]*mod
    for i in range(1,7):
        Z[i]=Z[i]+A[row][i-1]*mod
    B[row] /= A[row][col]
    for i in range(6):
        if col!=i:
            A[row][i]/=A[row][col]
    A[row][col]=1


def main():
    while not is_end():
        print_table()
        col = get_col()
        row = get_row(col)
        upd(row,col)
    print_table()
    print('Итог:')
    print('Итоговый опорный план:')
    f=0
    for x in range(6):
        if x in Bi:
            print('{:10.4f}'.format(B[Bi.index(x)]), end='')
            f+=B[Bi.index(x)]*Ci[x]
        else:
            print('{:10.4f}'.format(0), end='')
    print('\nЗначение целевой функции:')
    print('{:10.4f}'.format(f),sep='')





if __name__ == '__main__':
    main()
