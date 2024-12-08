//
// Created by User on 08.12.2024.
//

#include "mainwindow.h"

#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent) {
    // Установка центрального виджета
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Создание элементов интерфейса
    label = new QLabel("Выберите предмет сортировки", this);
    numbersButton = new QPushButton("Числа", this);
    booksButton = new QPushButton("Книги", this);

    // Подключение сигналов к слотам
    connect(numbersButton, &QPushButton::clicked, this, &MainWindow::onNumbersButtonClicked);
    connect(booksButton, &QPushButton::clicked, this, &MainWindow::onBooksButtonClicked);

    // Установка компоновки
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    layout->addWidget(label);
    layout->addWidget(numbersButton);
    layout->addWidget(booksButton);

    setWindowTitle("Сравнение алгоритмов сортировки");
    resize(300, 200);
}

MainWindow::~MainWindow() {}

void MainWindow::onNumbersButtonClicked() {
    // Логика для обработки выбора "Числа"
    label->setText("Вы выбрали: Числа");
}

void MainWindow::onBooksButtonClicked() {
    // Логика для обработки выбора "Книги"
    label->setText("Вы выбрали: Книги");
}