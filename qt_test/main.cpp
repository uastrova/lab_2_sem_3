#include <QApplication>
#include <vector>
#include <iostream>

#include "tests.h"
#include "ArrayIterator.h"
#include "ArraySequence.h"
//#include "ComplexComparator.h"
#include "HeadSorter.h"
#include "BubbleSort.h"
#include "DefaultComporator.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "Book.h"
#include "Generator.h"
#include "BookCardComporator.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv); // Инициализация приложения Qt

    QuickSort<int, std::vector<int>::iterator> sorter; // Создание экземпляра QuickSort
    sorter.sort_viz(); // Вызов метода для визуализации сортировки

    return app.exec(); // Запуск основного цикла приложения
}