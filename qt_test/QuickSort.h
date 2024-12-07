//
// Created by User on 06.12.2024.
//

#ifndef LAB2_QUICKSORT_H
#define LAB2_QUICKSORT_H


#pragma once
#include "HeadSorter.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <random>
#include <ranges>
#include <QWidget>
#include <QTimer>
#include <QPainter>

template<typename T, typename iterator>
struct QuickSort: public HeadSorter<T, iterator>
{
public:
    std::vector<T> data; // Вектор для хранения данных
    std::vector<std::vector<T>> steps; // Шаги сортировки для визуализации
    int currentStep; // Текущий шаг сортировки
    QTimer *timer; // Таймер для визуализации
    QWidget *widget; // Виджет для визуализации

    QuickSort(QWidget *parent = nullptr) : currentStep(0), timer(new QTimer()), widget(new QWidget(parent))
    {
        widget->resize(800, 600);
        widget->setWindowTitle("QuickSort Visualization");
        widget->show();

        // Подключаем таймер к лямбда-функции
        QObject::connect(timer, &QTimer::timeout, [this]() { updateVisualization(); });

        // Устанавливаем виджет для обработки событий рисования
        widget->setAttribute(Qt::WA_OpaquePaintEvent);
        widget->setAttribute(Qt::WA_NoSystemBackground);
    }

    ~QuickSort() {
        delete timer; // Освобождаем память
        delete widget; // Освобождаем память
    }

    void sort(iterator begin, iterator end, bool (*comparator)(const T &, const T &))
    {
        if (begin == end || std::next(begin) == end)
            return;

        auto pivot = partition(begin, end, comparator);
        steps.push_back(data); // Сохраняем состояние после каждой операции

        sort(begin, pivot, comparator);
        sort(std::next(pivot), end, comparator);
    }

private:
    iterator partition(iterator begin, iterator end, bool (*comparator)(const T &, const T &))
    {
        auto pivot = end - 1;
        auto i = begin - 1;

        for (auto j = begin; j != pivot; ++j)
        {
            if (comparator(*j, *pivot))
            {
                ++i;
                std::swap(*i, *j);
                steps.push_back(data); // Сохраняем состояние после каждой операции
            }
        }

        ++i;
        std::swap(*i, *pivot);
        steps.push_back(data); // Сохраняем состояние после каждой операции

        return i;
    }

public:
    void sort_viz()
    {
        // Генерация 100 случайных чисел от 1 до 99
        data.resize(100);
        std::generate(data.begin(), data.end(), []() { return rand() % 99 + 1; });

        // Запуск сортировки
        currentStep = 0;
        sort(data.begin(), data.end(), [](const T &a, const T &b) { return a < b; });

        // Запуск таймера для визуализации
        timer->start(1000); // Обновление каждые 1000 мс
    }

    void updateVisualization()
    {
        if (currentStep < steps.size())
        {
            // Обновление виджета
            widget->update();
            currentStep++;
        }
        else
        {
            // Остановка таймера, если все шаги выполнены
            timer->stop();
        }
    }

    void paintEvent(QPaintEvent *event)
    {
        QPainter painter(widget);
        int barWidth = widget->width() / data.size();
        for (size_t i = 0; i < data.size(); ++i)
        {
            int barHeight = steps[currentStep][i] * 5; // Масштабирование высоты
            painter.drawRect(i * barWidth, widget->height() - barHeight, barWidth - 1, barHeight);
        }
    }
};





#endif //LAB2_QUICKSORT_H
