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
    mainWindow.setWindowTitle("Программа для ввода последовательности");
    mainWindow.resize(600, 500); // Установка размера окна
    mainWindow.show(); // Показать главное окно
    return app.exec();

}