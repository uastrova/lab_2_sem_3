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
    void sort(iterator begin, iterator end, bool (*comparator)(const T &, const T &)) override
    {
        if (begin == end || begin + 1 == end)
            return;

        auto pivot = partition(begin, end, comparator);

        sort(begin, pivot, comparator);
        sort(pivot + 1, end, comparator);
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
            }
        }

        ++i;
        std::swap(*i, *pivot);

        return i;
    }
};





#endif //LAB2_QUICKSORT_H
