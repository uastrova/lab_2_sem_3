#ifndef ENTERNUMBEROFBOOKS_H
#define ENTERNUMBEROFBOOKS_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
//#include "persongenerator.h"
#include "Generator.h"
#include "choosesortingmethod.h"

namespace Ui {
class EnterNumberOfBooks;
}

class EnterNumberOfBooks : public QDialog
{
    Q_OBJECT

public:
    explicit EnterNumberOfBooks(QWidget *parent = nullptr);
    ~EnterNumberOfBooks();
    int getNumberOfBooks() const;

private slots:
    void on_enterButton_clicked();

private:
    Ui::EnterNumberOfBooks *ui;
    QLineEdit *numberInput;
    QPushButton *enterButton;
};

#endif // ENTERNUMBEROFBOOKS_H
