#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
namespace Ui {
class graph;
}

class graph : public QWidget
{
    Q_OBJECT

public:
    explicit graph(QSqlDatabase db, QWidget *parent = 0);
    ~graph();


private:
    Ui::graph *ui;
};

#endif // GRAPH_H
