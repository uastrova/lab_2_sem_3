//
// Created by User on 08.12.2024.
//

#include "mainwindow.h"
#include "sortchoicedialog.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "QuickSort.h"
#include "ArrayIterator.h"
#include "ArraySequence.h" // Подключите ваш заголовочный файл с определением ArraySequence
#include "DefaultComporator.h" // Подключите ваш заголовочный файл с определением компараторов
#include "inputdialog.h"
//#include "Book.h"

#include <QMessageBox>
#include <QVector>
#include <QVBoxLayout>
#include <QTextEdit>

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
    InputDialog inputDialog(this);
    if (inputDialog.exec() == QDialog::Accepted) {
        // Получаем введенные данные
        QString input = inputDialog.getInput();
        QStringList items = input.split(" ", Qt::SkipEmptyParts);

        // Сохраняем последовательность в ArraySequence
        ArraySequence<int> sequence;
        for (const QString &item : items) {
            bool ok;
            int number = item.toInt(&ok);
            if (ok) {
                sequence.Append(number);
            }
        }

        // Открываем диалог выбора способа сортировки
        SortChoiceDialog sortDialog(this);
        connect(&sortDialog, &SortChoiceDialog::sortChosen, this, [this, &sequence](const QString &sortMethod) {
            if (sortMethod == "BubbleSort") {
                BubbleSort<int, ArraySequence<int>::iterator> bubbleSort;
                bubbleSort.sort(sequence.begin(), sequence.end(), DefaultComparator<int>);
                showSortingResult(sequence, "Bubble Sort");
            } else if (sortMethod == "HeapSort") {
                HeapSort<int, ArraySequence<int>::iterator> heapSort;
                heapSort.sort(sequence.begin(), sequence.end(), DefaultComparator<int>);
                showSortingResult(sequence, "Heap Sort");
            } else if (sortMethod == "QuickSort") {
                QuickSort<int, ArraySequence<int>::iterator> quickSort;
                quickSort.sort(sequence.begin(), sequence.end(), DefaultComparator<int>);
                showSortingResult(sequence, "Quick Sort");
            }
        });

        sortDialog.exec(); // Показываем диалог выбора сортировки
    }
}

void MainWindow::showSortingResult(const ArraySequence<int> &sequence, const QString &sortMethod) {
    QString result;
    for (ArraySequence<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it) {
        result += QString::number(*it) + " ";
    }

    QMessageBox::information(this, sortMethod, "Отсортированная последовательность: " + result);
}


void MainWindow::onBooksButtonClicked() {
    // Логика для обработки выбора "Книги"
    label->setText("Вы выбрали: Книги");
}