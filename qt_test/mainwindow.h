//
// Created by User on 08.12.2024.
//

#ifndef LAB2_MAINWINDOW_H
#define LAB2_MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include "ArraySequence.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onNumbersButtonClicked();
    void onBooksButtonClicked();
    void showSortingResult(const ArraySequence<int> &sequence, const QString &sortMethod);

private:
    QLabel *label;
    QPushButton *numbersButton;
    QPushButton *booksButton;
};


#endif //LAB2_MAINWINDOW_H
