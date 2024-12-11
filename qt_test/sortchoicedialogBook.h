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
#include "showDataDialog.h"

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
            }
            if (option == "First author's name") {
                connect(button, &QPushButton::clicked, this, &SortChoiceDialogBook::onFnameButtonClicked);
            }
            if (option == "Second author's name") {
                connect(button, &QPushButton::clicked, this, &SortChoiceDialogBook::onSnameButtonClicked);
            }
            if (option == "Title") {
                connect(button, &QPushButton::clicked, this, &SortChoiceDialogBook::onTitleButtonClicked);
            }
            if (option == "Year of publish") {
                connect(button, &QPushButton::clicked, this, &SortChoiceDialogBook::onYearButtonClicked);
            }
            layout->addWidget(button);
        }

        setLayout(layout);
    }

private slots:
    void onPagesButtonClicked() {
        InputCountDialog_pages inputDialog(this);
        if (inputDialog.exec() == QDialog::Accepted) {
            DataDialog dataDialog(this);
            dataDialog.exec();
        }
    }
    void onFnameButtonClicked() {
        InputCountDialog_fname inputDialog(this);
        if (inputDialog.exec() == QDialog::Accepted) {
            DataDialog dataDialog(this);
            dataDialog.exec();
        }
    }
    void onSnameButtonClicked() {
        InputCountDialog_sname inputDialog(this);
        if (inputDialog.exec() == QDialog::Accepted) {
            DataDialog dataDialog(this);
            dataDialog.exec();
        }
    }
    void onTitleButtonClicked() {
        InputCountDialog_title inputDialog(this);
        if (inputDialog.exec() == QDialog::Accepted) {
            DataDialog dataDialog(this);
            dataDialog.exec();
        }
    }
    void onYearButtonClicked() {
        InputCountDialog_year inputDialog(this);
        if (inputDialog.exec() == QDialog::Accepted) {
            DataDialog dataDialog(this);
            dataDialog.exec();
        }
    }
};


#endif //LAB2_SORTCHOICEDIALOGBOOK_H
