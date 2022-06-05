#include "pun2a.h"
#include "qsqltablemodel.h"
#include "ui_pun2a.h"

pun2a::pun2a(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pun2a)
{
    ui->setupUi(this);
}

pun2a::~pun2a()
{
    delete ui;
}

void pun2a::setTable()
{
    QSqlTableModel*model = new QSqlTableModel();
    model->setTable("punkta");
    model->select();

    model->setHeaderData(0, Qt::Horizontal, "число");
    model->setHeaderData(1, Qt::Horizontal, "число < или > 2");

    ui->tableView->setModel(model);

}
