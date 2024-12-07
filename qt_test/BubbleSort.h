//
// Created by User on 06.12.2024.
//

#ifndef LAB2_BUBBLESORT_H
#define LAB2_BUBBLESORT_H


#pragma once
#include "HeadSorter.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <random>
#include <ranges>
#include <QWidget>
#include <QPainter>
#include <QTimer>


template<typename T, typename iterator>
struct BubbleSort : public HeadSorter<T, iterator>
{
    std::vector<T> data; // Вектор для хранения данных

    void sort(iterator begin, iterator end, bool (*comparator)(const T&, const T&)) override
    {
        for (auto i = begin; i != end; ++i) {
            for (auto j = begin; j != end - (i - begin) - 1; ++j) {
                if (!comparator(*j, *(j + 1))) {
                    std::swap(*j, *(j + 1)); // Обмен элементов
                }
            }
        }
    }

    void sort_viz()
    {
        // Генерация случайных чисел от 1 до 99
        std::random_device rd;
        std::uniform_int_distribution<int> dist(1, 99);
        data.resize(100);
        for (int& value : data) {
            value = dist(rd);
        }

        // Создание и настройка окна для визуализации
        auto* window = new QWidget();
        window->setWindowTitle("Bubble Sort Visualization");
        window->resize(800, 600);
        window->show();

        // Таймер для обновления визуализации
        auto* timer = new QTimer(window);
        QObject::connect(timer, &QTimer::timeout, [this, window, timer]() {
            static int i = 0, j = 0;
            if (i < data.size()) {
                if (j < data.size() - i - 1) {
                    if (data[j] > data[j + 1]) {
                        std::swap(data[j], data[j + 1]);
                    }
                    j++;
                } else {
                    j = 0;
                    i++;
                }
                window->update(); // Обновление окна
            } else {
                timer->stop(); // Остановка таймера после завершения сортировки
                delete timer; // Освобождение памяти
            }
        });
        timer->start(100); // Запуск таймера с интервалом 100 мс
    }

private:
    class VisualizationWindow : public QWidget {
    public:
        explicit VisualizationWindow(BubbleSort* sorter) : sorter(sorter) {}

    protected:
        void paintEvent(QPaintEvent*) override {
            QPainter painter(this);
            int barWidth = width() / sorter->data.size();
            for (size_t k = 0; k < sorter->data.size(); ++k) {
                int barHeight = static_cast<int>(sorter->data[k]) * (height() / 100);
                painter.drawRect(k * barWidth, height() - barHeight, barWidth - 1, barHeight);
            }
        }
    private:
        BubbleSort* sorter; // Указатель на сортировщик для доступа к данным
    };
};


#endif //LAB2_BUBBLESORT_H
