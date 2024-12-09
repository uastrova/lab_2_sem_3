//
// Created by User on 07.12.2024.
//

#ifndef LAB2_TESTS_H
#define LAB2_TESTS_H

#pragma once
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

inline void TestComplexSum()
{
    complex test1(2, 4);
    complex test2(1, 3);
    complex test3 = test1 + test2;
    assert(test3.GetRe() == 3);
    assert(test3.GetIm() == 7);
    assert(test1.GetRe() == 2);
    test3 += test1;
    assert(test3.GetRe() == 5);
    assert(test3.GetIm() == 11);
}

inline void TestComplexSubtract()
{
    complex test1(2, 4);
    complex test2(1, 3);
    complex test3 = test1 - test2;
    assert(test3.GetRe() == 1);
    assert(test3.GetIm() == 1);
    test3 -= test1;
    assert(test3.GetRe() == -1);
    assert(test3.GetIm() == -3);
}

inline void TestComplexMulti()
{
    complex test1(2, 4);
    complex test2(1, 3);
    complex test3 = test1 * test2;
    assert(test3.GetRe() == -10);
    assert(test3.GetIm() == 10);
    test3 *= test1;
    assert(test3.GetRe() == -60);
    assert(test3.GetIm() == -20);
}

inline void TestComplexDiv()
{
    complex test1(1, 1);
    complex test2(1, 1);
    complex test3 = test1 / test2;
    assert(test3.GetRe() == 1);
    assert(test3.GetIm() == 0);
}

inline void TestArraySequence()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    ArraySequence<int> test(a, 8);
    assert(test.GetFirst() == 1);
    assert(test.GetLast() == 8);
    test.Append(9);
    assert(test.GetLength() == 9);
    assert(test.GetLast() == 9);
    test.Prepend(0);
    assert(test.GetLength() == 10);
    assert(test.GetFirst() == 0);
    assert(test[0] == 0);
    assert(test[5] == 5);
    test[5] = 80;
    assert(test[5] == 80);
}

inline void testQuickSortPages(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    QuickSort<BookCard, ArraySequenceIterator<BookCard, false>> QuickSorter;
    GettingDataFromFile(filename, a);
    QuickSorter.sort(a.begin(), a.end(), ComporatorBookPages);
    PuttingDataToFile(filename_2, a);
}

inline void testQuickSortFName(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    QuickSort<BookCard, ArraySequenceIterator<BookCard, false>> QuickSorter;
    GettingDataFromFile(filename, a);
    QuickSorter.sort(a.begin(), a.end(), ComporatorBookFirstName);
    PuttingDataToFile(filename_2, a);
}

inline void testQuickSortSName(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    QuickSort<BookCard, ArraySequenceIterator<BookCard, false>> QuickSorter;
    GettingDataFromFile(filename, a);
    QuickSorter.sort(a.begin(), a.end(), ComporatorBookSecondName);
    PuttingDataToFile(filename_2, a);
}

inline void testQuickSortTitle(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    QuickSort<BookCard, ArraySequenceIterator<BookCard, false>> QuickSorter;
    GettingDataFromFile(filename, a);

    QuickSorter.sort(a.begin(), a.end(), ComparatorBookTitle);
    PuttingDataToFile(filename_2, a);
}

inline void testQuickSortYear(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    QuickSort<BookCard, ArraySequenceIterator<BookCard, false>> QuickSorter;
    GettingDataFromFile(filename, a);
    QuickSorter.sort(a.begin(), a.end(), ComporatorBookYear);
    PuttingDataToFile(filename_2, a);
}









inline void testHeapSortPages(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    HeapSort<BookCard, ArraySequenceIterator<BookCard, false>> HeapSorter;
    GettingDataFromFile(filename, a);

    HeapSorter.sort(a.begin(), a.end(), ComporatorBookPages);

    PuttingDataToFile(filename_2, a);
}

inline void testHeapSortFName(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    HeapSort<BookCard, ArraySequenceIterator<BookCard, false>> HeapSorter;
    GettingDataFromFile(filename, a);

    HeapSorter.sort(a.begin(), a.end(), ComporatorBookFirstName);

    PuttingDataToFile(filename_2, a);
}

inline void testHeapSortSName(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    HeapSort<BookCard, ArraySequenceIterator<BookCard, false>> HeapSorter;
    GettingDataFromFile(filename, a);

    HeapSorter.sort(a.begin(), a.end(), ComporatorBookSecondName);

    PuttingDataToFile(filename_2, a);
}

inline void testHeapSortTitle(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    HeapSort<BookCard, ArraySequenceIterator<BookCard, false>> HeapSorter;
    GettingDataFromFile(filename, a);

    HeapSorter.sort(a.begin(), a.end(), ComparatorBookTitle);

    PuttingDataToFile(filename_2, a);
}

inline void testHeapSortYear(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    HeapSort<BookCard, ArraySequenceIterator<BookCard, false>> HeapSorter;
    GettingDataFromFile(filename, a);

    HeapSorter.sort(a.begin(), a.end(), ComporatorBookYear);

    PuttingDataToFile(filename_2, a);
}










inline void testBubbleSortPages(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    BubbleSort<BookCard, ArraySequenceIterator<BookCard, false>> BubbleSorter;
    GettingDataFromFile(filename, a);
    BubbleSorter.sort(a.begin(), a.end(), ComporatorBookPages);
    PuttingDataToFile(filename_2, a);
}

inline void testBubbleSortFName(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    BubbleSort<BookCard, ArraySequenceIterator<BookCard, false>> BubbleSorter;
    GettingDataFromFile(filename, a);
    BubbleSorter.sort(a.begin(), a.end(), ComporatorBookFirstName);
    PuttingDataToFile(filename_2, a);
}

inline void testBubbleSortSName(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    BubbleSort<BookCard, ArraySequenceIterator<BookCard, false>> BubbleSorter;
    GettingDataFromFile(filename, a);
    BubbleSorter.sort(a.begin(), a.end(), ComporatorBookSecondName);
    PuttingDataToFile(filename_2, a);
}

inline void testBubbleSortTitle(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    BubbleSort<BookCard, ArraySequenceIterator<BookCard, false>> BubbleSorter;
    GettingDataFromFile(filename, a);
    BubbleSorter.sort(a.begin(), a.end(), ComparatorBookTitle);
    PuttingDataToFile(filename_2, a);
}

inline void testBubbleSortYear(int cnt)
{
    std::string filename = "C:/c++Programs/qt_test/qt_test/input.csv";
    std::string filename_2 = "C:/c++Programs/qt_test/qt_test/output.csv";

    Generator(filename, cnt);
    ArraySequence<BookCard> a;
    BubbleSort<BookCard, ArraySequenceIterator<BookCard, false>> BubbleSorter;
    GettingDataFromFile(filename, a);
    BubbleSorter.sort(a.begin(), a.end(), ComporatorBookYear);
    PuttingDataToFile(filename_2, a);
}



//void quicksortviztest()
//{
 //   QuickSort<int, std::vector<int>::iterator> sorter;
 //   sorter.sort_viz();
//}



#endif //LAB2_TESTS_H
