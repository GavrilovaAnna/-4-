#include "pun2d.h"
#include "qsqltablemodel.h"
#include "ui_pun2d.h"

pun2d::pun2d(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pun2d)
{
    ui->setupUi(this);
}

pun2d::~pun2d()
{
    delete ui;
}

void pun2d::setTable()
{
    QSqlTableModel*model = new QSqlTableModel();
    model->setTable("punktd");
    model->select();

    ui->tableView->setModel(model);
}

