#ifndef PUN2E_H
#define PUN2E_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class pun2e;
}

class pun2e : public QWidget
{
    Q_OBJECT

public:
    explicit pun2e(QWidget *parent = nullptr);
    ~pun2e();
    void setTable();

private:
    Ui::pun2e *ui;
};

#endif // PUN2E_H
