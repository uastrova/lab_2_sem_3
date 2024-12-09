//
// Created by User on 09.12.2024.
//

#ifndef LAB2_SORTCHOICEDIALOGBOOK_H
#define LAB2_SORTCHOICEDIALOGBOOK_H


#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialogBooks.h"

class SortChoiceDialogBook : public QDialog {
Q_OBJECT

public:
    explicit SortChoiceDialogBook(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Выберите предмет сортировки");

        auto *layout = new QVBoxLayout(this);

        // Создание кнопок для сортировки
        QStringList sortOptions = {
                "Pages",
                "First author's name",
                "Second author's name",
                "Title",
                "Year of publish"
        };

        for (const QString &option : sortOptions) {
            auto *button = new QPushButton(option, this);
            if (option == "Pages") {
                connect(button, &QPushButton::clicked, this, &SortChoiceDialogBook::onPagesButtonClicked);
            } else {
                connect(button, &QPushButton::clicked, this, [this, option]() {
                    QMessageBox::information(this, "Выбор сортировки", "Вы выбрали сортировку по: " + option);
                    accept(); // Закрываем диалог
                });
            }
            layout->addWidget(button);
        }

        setLayout(layout);
    }

private slots:
    void onPagesButtonClicked() {
        InputCountDialog inputDialog(this);
        inputDialog.exec(); // Показываем диалог для ввода количества книг
    }
};


#endif //LAB2_SORTCHOICEDIALOGBOOK_H
