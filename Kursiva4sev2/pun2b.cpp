#include "pun2b.h"
#include "qsqltablemodel.h"
#include "ui_pun2b.h"

pun2b::pun2b(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pun2b)
{
    ui->setupUi(this);
}

pun2b::~pun2b()
{
    delete ui;
}

void pun2b::setTable()
{
    QSqlTableModel*model = new QSqlTableModel();
    model->setTable("Huge ID");
    model->select();

    ui->tableView->setModel(model);
}
