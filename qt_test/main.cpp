#include <QApplication>
#include <QVector>
#include <QRandomGenerator>
#include <QMessageBox>
#include "mainwindow.h"
#include <iostream>
#include <ctime>
#include "Complex.h"
#include "Person.h"
#include <cassert>
#include "ArraySequence.h"
#include <compare>
#include "Generator.h"
#include "ArrayIterator.h"
#include "QuickSort.h"
#include "BookCardComporator.h"
#include "HeapSort.h"
#include "BubbleSort.h"
#include "DefaultComporator.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.setWindowTitle("Программа для сравнения сортировок");
    mainWindow.resize(600, 500);
    mainWindow.show();
    return app.exec();

}