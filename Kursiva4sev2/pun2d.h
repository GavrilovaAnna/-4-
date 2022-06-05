#ifndef PUN2D_H
#define PUN2D_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class pun2d;
}

class pun2d : public QWidget
{
    Q_OBJECT

public:
    explicit pun2d(QWidget *parent = nullptr);
    ~pun2d();
    void setTable();

private:
    Ui::pun2d *ui;
};

#endif // PUN2D_H
