#ifndef PUN2C_H
#define PUN2C_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class pun2c;
}

class pun2c : public QWidget
{
    Q_OBJECT

public:
    explicit pun2c(QWidget *parent = nullptr);
    ~pun2c();
    void setTable();
private:
    Ui::pun2c *ui;
};

#endif // PUN2C_H
