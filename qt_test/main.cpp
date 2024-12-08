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

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}