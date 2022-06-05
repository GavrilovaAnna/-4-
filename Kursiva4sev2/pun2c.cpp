#include "pun2c.h"
#include "qsqltablemodel.h"
#include "ui_pun2c.h"

pun2c::pun2c(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pun2c)
{
    ui->setupUi(this);
}

pun2c::~pun2c()
{
    delete ui;
}

void pun2c::setTable()
{
    QSqlTableModel*model = new QSqlTableModel();
    model->setTable("punktc");
    model->select();

    model->setHeaderData(0, Qt::Horizontal, "число > 1");

    ui->tableView->setModel(model);
}
