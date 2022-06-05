#ifndef PUNKT2_H
#define PUNKT2_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

#include "pun2a.h"
#include "ui_pun2a.h"

#include "pun2b.h"
#include "ui_pun2b.h"

#include "pun2c.h"
#include "ui_pun2c.h"

#include "pun2d.h"
#include "ui_pun2d.h"

#include "pun2e.h"
#include "ui_pun2e.h"

namespace Ui {
class punkt2;
}

class punkt2 : public QWidget
{
    Q_OBJECT

public:
    explicit punkt2(QWidget *parent = nullptr);
    ~punkt2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::punkt2 *ui;
    pun2a * punkta;
    pun2b * punktb;
    pun2c * punktc;
    pun2d * punktd;
    pun2e * punkte;

};

#endif // PUNKT2_H
