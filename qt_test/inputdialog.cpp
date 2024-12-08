//
// Created by User on 08.12.2024.
//

#include "inputdialog.h"
#include <QMessageBox>
#include <QStringList>
#include <QRegularExpression>

InputDialog::InputDialog(QWidget *parent)
        : QDialog(parent) {
    QLabel *label = new QLabel("Введите последовательность через пробел:", this);
    inputLineEdit = new QLineEdit(this);
    QPushButton *okButton = new QPushButton("OK", this);

    connect(okButton, &QPushButton::clicked, this, &InputDialog::onOkButtonClicked);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);
    layout->addWidget(inputLineEdit);
    layout->addWidget(okButton);

    setWindowTitle("Ввод последовательности");
    resize(400, 250);
}

void InputDialog::onOkButtonClicked() {
    QString input = inputLineEdit->text();
    QStringList items = input.split(" ", Qt::SkipEmptyParts);

    bool hasNumber = false;
    bool hasInvalidData = false;

    for (const QString &item : items) {
        // Проверка, является ли строка целым числом
        QRegularExpression numberRegex(R"(^-?\d+$)");
        if (numberRegex.match(item).hasMatch()) {
            bool ok;
            int number = item.toInt(&ok);
            if (ok && number >= INT_MIN && number <= INT_MAX) {
                hasNumber = true;
            } else {
                hasInvalidData = true; // Если число не в диапазоне int, это ошибка
                break;
            }
        } else {
            hasInvalidData = true; // Если не целое число, это ошибка
            break;
        }
    }

    if (hasInvalidData) {
        QMessageBox::warning(this, "Некорректные данные", "Некорректные входные данные.");
    } else if (!hasNumber) {
        QMessageBox::warning(this, "Нет чисел", "Входные данные не содержат целых чисел.");
    } else {
        accept(); // Закрыть диалог с успешным результатом
    }
}

QString InputDialog::getInput() const {
    return inputLineEdit->text(); // Возвращаем текст из поля ввода
}