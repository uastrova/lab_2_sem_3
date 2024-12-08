//
// Created by User on 06.12.2024.
//

#ifndef LAB2_HEADSORTER_H
#define LAB2_HEADSORTER_H

#pragma once
#include "Sequence.h"
//#include "ArrayIterator.h"
//#include "Book.h"
template<typename T, typename iterator>
struct HeadSorter
{
    virtual void sort(iterator begin, iterator end, bool (*comparator)(const T&, const T&)) = 0;
};

#endif //LAB2_HEADSORTER_H
