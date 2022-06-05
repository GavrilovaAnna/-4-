#ifndef PUN2B_H
#define PUN2B_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class pun2b;
}

class pun2b : public QWidget
{
    Q_OBJECT

public:
    explicit pun2b(QWidget *parent = nullptr);
    ~pun2b();
    void setTable();
private:
    Ui::pun2b *ui;
};

#endif // PUN2B_H
