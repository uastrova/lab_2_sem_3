//
// Created by User on 06.12.2024.
//

#ifndef LAB2_HEAPSORT_H
#define LAB2_HEAPSORT_H


#pragma once

#include <vector>
#include <random>
#include <QWidget>
#include <QTimer>
#include <QPainter>
#include "HeadSorter.h"

template<typename T, typename iterator>
struct HeapSort: public HeadSorter<T, iterator>
{
    std::vector<T> data; // Вектор для хранения данных
    size_t currentIndex = 0; // Индекс текущего элемента для визуализации
    size_t heapSize = 0; // Размер кучи для визуализации

    void sort(iterator begin, iterator end, bool (*comparator)(const T&, const T&)) override {
        auto size = end - begin;
        if (size <= 1) return;

        for (auto i = size / 2 - 1; i >= 0; --i) {
            heapify(begin, size, i, comparator);
        }

        for (auto i = size - 1; i > 0; --i) {
            std::swap(*(begin), *(begin + i));
            heapify(begin, i, 0, comparator);
        }
    }

private:
    void heapify(iterator begin, size_t size, size_t root_index, bool (*comparator)(const T&, const T&)) {
        auto largest = root_index;              // Initialize largest as root
        auto left = 2 * root_index + 1;         // Left child index
        auto right = 2 * root_index + 2;        // Right child index

        if (left < size && comparator(*(begin + largest), *(begin + left))) {
            largest = left;
        }

        if (right < size && comparator(*(begin + largest), *(begin + right))) {
            largest = right;
        }

        if (largest != root_index) {
            std::swap(*(begin + root_index), *(begin + largest));
            heapify(begin, size, largest, comparator); // Recursively heapify the affected subtree
        }
    }

public:
    void sort_viz()
    {
        // Генерация случайных чисел от 1 до 99
        std::random_device rd;
        std::uniform_int_distribution<int> dist(1, 99);
        data.resize(100);
        for (int& val : data)
        {
            val = dist(rd);
        }

        // Создание и настройка окна для визуализации
        auto* window = new QWidget();
        window->setWindowTitle("Heap Sort Visualization");
        window->resize(800, 600);
        window->show();

        // Таймер для обновления визуализации
        QTimer* timer = new QTimer(window);
        QObject::connect(timer, &QTimer::timeout, [this, window, timer]() {
            if (currentIndex < data.size()) {
                // Визуализация текущего состояния массива
                visualize(window);
                currentIndex++;
            } else {
                timer->stop(); // Остановка таймера после завершения сортировки
                delete timer;  // Освобождение памяти
            }
        });
        timer->start(100); // Запуск таймера с интервалом 100 мс

        // Запуск сортировки
        sort(data.begin(), data.end(), [](const T& a, const T& b) { return a < b; });
    }

    void visualize(QWidget* window) {
        QPainter painter(window);
        int barWidth = window->width() / data.size();
        for (size_t i = 0; i < data.size(); ++i) {
            if (i < currentIndex) {
                painter.setBrush(Qt::green); // Зеленый - отсортированные элементы
            } else {
                painter.setBrush(Qt::white); // Белый - неотсортированные элементы
            }

            int barHeight = static_cast<int>(data[i]) * (window->height() / 100);
            painter.drawRect(i * barWidth, window->height() - barHeight, barWidth - 1, barHeight);
        }
    }

};


#endif //LAB2_HEAPSORT_H
