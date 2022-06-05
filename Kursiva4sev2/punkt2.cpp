#include "punkt2.h"
#include "ui_punkt2.h"

punkt2::punkt2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::punkt2)
{
    ui->setupUi(this);
}

punkt2::~punkt2()
{
    delete ui;
}

void punkt2::on_pushButton_clicked()
{
    punkta = new pun2a();
    punkta->setTable();
    punkta->show();
}


void punkt2::on_pushButton_2_clicked()
{
    punktb = new pun2b();
    punktb->setTable();
    punktb->show();
}


void punkt2::on_pushButton_3_clicked()
{
    punktc = new pun2c();
    punktc->setTable();
    punktc->show();
}


void punkt2::on_pushButton_4_clicked()
{
    punktd = new pun2d();
    punktd->setTable();
    punktd->show();
}


void punkt2::on_pushButton_5_clicked()
{
    punkte = new pun2e;
    punkte->setTable();
    punkte->show();
}

