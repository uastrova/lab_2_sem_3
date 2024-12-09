//
// Created by User on 09.12.2024.
//

#ifndef LAB2_INPUTDIALOGBOOKS_H
#define LAB2_INPUTDIALOGBOOKS_H

#include "tests.h"

#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>

class InputCountDialog : public QDialog {
Q_OBJECT

public:
    explicit InputCountDialog(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Введите количество книг для сортировки");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QLineEdit *inputField = new QLineEdit(this);
        inputField->setPlaceholderText("Введите количество книг");

        QPushButton *confirmButton = new QPushButton("Подтвердить", this);
        connect(confirmButton, &QPushButton::clicked, this, [this, inputField]() {
            bool ok;
            int count = inputField->text().toInt(&ok);
            if (ok && count > 0) {
                testQuickSortPages(count); // Вызов функции с введенным значением
                accept(); // Закрываем диалог
            } else {
                QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное количество книг.");
            }
        });

        layout->addWidget(inputField);
        layout->addWidget(confirmButton);
        setLayout(layout);
    }
};


#endif //LAB2_INPUTDIALOGBOOKS_H
