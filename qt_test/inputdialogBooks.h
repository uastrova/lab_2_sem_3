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

class InputCountDialog_pages : public QDialog {
Q_OBJECT

public:
    InputCountDialog_pages(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Введите количество книг для сортировки");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QLineEdit *inputField = new QLineEdit(this);
        inputField->setPlaceholderText("Введите количество книг");

        QPushButton *confirmButton = new QPushButton("Подтвердить", this);
        connect(confirmButton, &QPushButton::clicked, this, [this, inputField]() {
            bool ok;
            int count = inputField->text().toInt(&ok);
            if (ok && count > 0) {
                testQuickSortPages(count);
                accept();
            } else {
                QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное количество книг.");
            }
        });

        layout->addWidget(inputField);
        layout->addWidget(confirmButton);
        setLayout(layout);
    }
};



class InputCountDialog_fname : public QDialog {
Q_OBJECT

public:
    InputCountDialog_fname(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Введите количество книг для сортировки");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QLineEdit *inputField = new QLineEdit(this);
        inputField->setPlaceholderText("Введите количество книг");

        QPushButton *confirmButton = new QPushButton("Подтвердить", this);
        connect(confirmButton, &QPushButton::clicked, this, [this, inputField]() {
            bool ok;
            int count = inputField->text().toInt(&ok);
            if (ok && count > 0) {
                testQuickSortFName(count);
                accept();
            } else {
                QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное количество книг.");
            }
        });

        layout->addWidget(inputField);
        layout->addWidget(confirmButton);
        setLayout(layout);
    }
};


class InputCountDialog_sname : public QDialog {
Q_OBJECT

public:
    InputCountDialog_sname(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Введите количество книг для сортировки");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QLineEdit *inputField = new QLineEdit(this);
        inputField->setPlaceholderText("Введите количество книг");

        QPushButton *confirmButton = new QPushButton("Подтвердить", this);
        connect(confirmButton, &QPushButton::clicked, this, [this, inputField]() {
            bool ok;
            int count = inputField->text().toInt(&ok);
            if (ok && count > 0) {
                testQuickSortSName(count);
                accept();
            } else {
                QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное количество книг.");
            }
        });

        layout->addWidget(inputField);
        layout->addWidget(confirmButton);
        setLayout(layout);
    }
};


class InputCountDialog_title : public QDialog {
Q_OBJECT

public:
    InputCountDialog_title(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Введите количество книг для сортировки");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QLineEdit *inputField = new QLineEdit(this);
        inputField->setPlaceholderText("Введите количество книг");

        QPushButton *confirmButton = new QPushButton("Подтвердить", this);
        connect(confirmButton, &QPushButton::clicked, this, [this, inputField]() {
            bool ok;
            int count = inputField->text().toInt(&ok);
            if (ok && count > 0) {
                testQuickSortTitle(count);
                accept();
            } else {
                QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное количество книг.");
            }
        });

        layout->addWidget(inputField);
        layout->addWidget(confirmButton);
        setLayout(layout);
    }
};




class InputCountDialog_year : public QDialog {
Q_OBJECT

public:
    InputCountDialog_year(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Введите количество книг для сортировки");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QLineEdit *inputField = new QLineEdit(this);
        inputField->setPlaceholderText("Введите количество книг");

        QPushButton *confirmButton = new QPushButton("Подтвердить", this);
        connect(confirmButton, &QPushButton::clicked, this, [this, inputField]() {
            bool ok;
            int count = inputField->text().toInt(&ok);
            if (ok && count > 0) {
                testQuickSortYear(count);
                accept();
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
