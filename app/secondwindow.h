#pragma once

#include <QWidget>
#include <QTableWidget>
#include <QTableView>
#include <QMainWindow>
#include <QSqlTableModel>

namespace Ui {
class secondwindow;
}

class secondwindow : public QWidget
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = 0);
    ~secondwindow();

private slots:
    void on_refreshButton_clicked();
    void on_generateGraphButton_clicked();

private:
    Ui::secondwindow *ui;
    QTableView *status_tableView;
    QSqlTableModel *model;
};
