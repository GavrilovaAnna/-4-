#include "pun2e.h"
#include "qsqltablemodel.h"
#include "ui_pun2e.h"

pun2e::pun2e(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pun2e)
{
    ui->setupUi(this);
}

pun2e::~pun2e()
{
    delete ui;
}

void pun2e::setTable()
{
    QSqlTableModel*model = new QSqlTableModel();
    model->setTable("punkte");
    model->select();

    model->setHeaderData(0, Qt::Horizontal, "число < 5");

    ui->tableView->setModel(model);
}
