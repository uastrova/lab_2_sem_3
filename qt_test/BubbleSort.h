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
#include <QGraphicsRectItem>


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
};


#endif //LAB2_BUBBLESORT_H
