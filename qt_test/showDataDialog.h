//
// Created by User on 09.12.2024.
//

#ifndef LAB2_SHOWDATADIALOG_H
#define LAB2_SHOWDATADIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFile>

class DataDialog : public QDialog {
    Q_OBJECT

public:
    explicit DataDialog(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Выбор данных");

        QVBoxLayout *layout = new QVBoxLayout(this);

        QPushButton *inputDataButton = new QPushButton("Исходные данные", this);
        QPushButton *outputDataButton = new QPushButton("Выходные данные", this);

        connect(inputDataButton, &QPushButton::clicked, this, &DataDialog::onInputDataClicked);
        connect(outputDataButton, &QPushButton::clicked, this, &DataDialog::onOutputDataClicked);

        layout->addWidget(inputDataButton);
        layout->addWidget(outputDataButton);

        setLayout(layout);
    }

private slots:
    void onInputDataClicked() {
        QString inputFilePath = "C:/c++Programs/qt_test/qt_test/input.csv"; // Укажите путь к файлу
        QFile inputFile(inputFilePath);

        if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&inputFile);
            QString fileContent = in.readAll();
            inputFile.close();
            QMessageBox::information(this, "Исходные данные", "Исходный файл:\n" + fileContent);
        } else {
            QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл с исходными данными.");
        }

        //accept();
    }

    void onOutputDataClicked() {
        QString outputFilePath = "C:/c++Programs/qt_test/qt_test/output.csv"; // Укажите путь к файлу
        QFile outputFile(outputFilePath);

        if (outputFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&outputFile);
            QString fileContent = in.readAll();
            outputFile.close();
            QMessageBox::information(this, "Выходные данные", "Содержимое файла:\n" + fileContent);
        } else {
            QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл с выходными данными.");
        }

        //accept();
    }
};
#endif //LAB2_SHOWDATADIALOG_H
