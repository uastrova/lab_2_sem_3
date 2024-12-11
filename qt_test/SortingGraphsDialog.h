//
// Created by User on 11.12.2024.
//

#ifndef LAB2_SORTINGGRAPHSDIALOG_H
#define LAB2_SORTINGGRAPHSDIALOG_H

#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPainter>
#include <QVector>
#include <algorithm>
#include <chrono>
#include <random>
#include "BubbleSort.h"
#include "QuickSort.h"


class SortingGraphsDialog : public QDialog {
Q_OBJECT

public:
    SortingGraphsDialog(QWidget *parent = nullptr) : QDialog(parent) {
        setWindowTitle("Графики сортировок");
        resize(800, 600);

        // Данные для графиков
        QVector<int> x;
        QVector<double> bubbleTimes, quickTimes;

        for (int n = 4000; n <= 20000; n += 2000) {
            x.push_back(n);

            // Генерация случайных данных
            std::vector<int> data(n);
            std::generate(data.begin(), data.end(), std::rand);

            // Измерение времени для Bubble Sort
            auto start = std::chrono::high_resolution_clock::now();
            BubbleSort<int, std::vector<int>::iterator> bubbleSort;
            bubbleSort.sort(data.begin(), data.end(), [](const int &a, const int &b) { return a < b; });
            auto end = std::chrono::high_resolution_clock::now();
            bubbleTimes.push_back(std::chrono::duration<double, std::milli>(end - start).count());

            // Генерация новых случайных данных для Quick Sort
            std::generate(data.begin(), data.end(), std::rand);

            // Измерение времени для Quick Sort
            start = std::chrono::high_resolution_clock::now();
            QuickSort<int, std::vector<int>::iterator> quickSort;
            quickSort.sort(data.begin(), data.end(), [](const int &a, const int &b) { return a < b; });
            end = std::chrono::high_resolution_clock::now();
            quickTimes.push_back(std::chrono::duration<double, std::milli>(end - start).count());
        }

        // Сохранение данных в качестве членов класса для использования в paintEvent
        this->x = x;
        this->bubbleTimes = bubbleTimes;
        this->quickTimes = quickTimes;
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        // Рисуем оси
        painter.drawLine(50, height() - 50, width() - 50, height() - 50); // Ось X
        painter.drawLine(50, height() - 50, 50, 50); // Ось Y

        // Рисуем метки на оси X
        for (int i = 0; i < x.size(); ++i) {
            int xPos = mapToX(x[i]);
            painter.drawText(xPos, height() - 30, QString::number(x[i]));
        }

        // Рисуем график Bubble Sort
        painter.setPen(Qt::blue);
        for (int i = 0; i < bubbleTimes.size() - 1; ++i) {
            painter.drawLine(mapToX(x[i]), mapToY(bubbleTimes[i]),
                             mapToX(x[i + 1]), mapToY(bubbleTimes[i + 1]));
        }

        // Рисуем график Quick Sort
        painter.setPen(Qt::red);
        for (int i = 0; i < quickTimes.size() - 1; ++i) {
            painter.drawLine(mapToX(x[i]), mapToY(quickTimes[i]),
                             mapToX(x[i + 1]), mapToY(quickTimes[i + 1]));
        }

        // Добавляем текст в правом верхнем углу
        painter.setPen(Qt::black);
        painter.drawText(width() - 150, 30, "График сортировки:");
        painter.drawText(width() - 150, 50, "Синий: Bubble Sort");
        painter.drawText(width() - 150, 70, "Красный: Quick Sort");

        // Рисуем метки на оси Y
        double maxTime = std::max(*std::max_element(bubbleTimes.begin(), bubbleTimes.end()),
                                  *std::max_element(quickTimes.begin(), quickTimes.end()));
        for (int i = 0; i <= 10; ++i) {
            double yValue = (maxTime / 10) * i;
            int yPos = mapToY(yValue);
            painter.drawText(10, yPos, QString::number(yValue, 'f', 1) + " ms");
            painter.drawLine(45, yPos, 50, yPos); // Рисуем маленькую линию для метки
        }
    }

private:
    QVector<int> x;
    QVector<double> bubbleTimes;
    QVector<double> quickTimes;

    // Преобразование значений X в пиксели
    int mapToX(int value) {
        return 50 + (value - 4000) * (width() - 100) / (20000 - 4000);
    }

    // Преобразование значений Y в пиксели
    int mapToY(double value) {
        double maxTime = std::max(*std::max_element(bubbleTimes.begin(), bubbleTimes.end()),
                                  *std::max_element(quickTimes.begin(), quickTimes.end()));
        return height() - 50 - (value * (height() - 100) / maxTime);
    }
};

#endif //LAB2_SORTINGGRAPHSDIALOG_H
