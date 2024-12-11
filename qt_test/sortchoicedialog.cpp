//
// Created by User on 08.12.2024.
//

#include "sortchoicedialog.h"

SortChoiceDialog::SortChoiceDialog(QWidget *parent)
        : QDialog(parent) {
    QPushButton *bubbleSortButton = new QPushButton("Bubble Sort", this);
    QPushButton *heapSortButton = new QPushButton("Heap Sort", this);
    QPushButton *quickSortButton = new QPushButton("Quick Sort", this);

    connect(bubbleSortButton, &QPushButton::clicked, this, [this]() {
        emit sortChosen("BubbleSort");
        accept();
    });
    connect(heapSortButton, &QPushButton::clicked, this, [this]() {
        emit sortChosen("HeapSort");
        accept();
    });
    connect(quickSortButton, &QPushButton::clicked, this, [this]() {
        emit sortChosen("QuickSort");
        accept();
    });

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(bubbleSortButton);
    layout->addWidget(heapSortButton);
    layout->addWidget(quickSortButton);

    setWindowTitle("Выберите способ сортировки");
    resize(500, 450);
}