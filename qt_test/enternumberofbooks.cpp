#include "enternumberofbooks.h"
#include <QMessageBox>
#include "choosesortingmethod.h"
#include "choosedatasource.h"
#include <QLabel>


EnterNumberOfBooks::EnterNumberOfBooks(QWidget *parent) : QDialog(parent) {
    QLabel *label = new QLabel("Enter number of people:", this);
    numberInput = new QLineEdit(this);
    enterButton = new QPushButton("Enter", this);
    connect(enterButton, &QPushButton::clicked, this, &EnterNumberOfBooks::on_enterButton_clicked);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);
    layout->addWidget(numberInput);
    layout->addWidget(enterButton);
    setLayout(layout);
}

int EnterNumberOfBooks::getNumberOfBooks() const {
    return numberInput->text().toInt();
}

EnterNumberOfBooks::~EnterNumberOfBooks()
{
    delete ui;
}

void EnterNumberOfBooks::on_enterButton_clicked()
{
    bool ok;
    int number = numberInput->text().toInt(&ok);
    if (ok && number > 0) {
        accept();
    }
}

