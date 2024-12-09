//
// Created by User on 07.12.2024.
//

#ifndef LAB2_GENERATOR_H
#define LAB2_GENERATOR_H

#pragma once
#include <fstream>
#include <ctime>
#include <random>
#include "ArraySequence.h"
#include "Book.h"
template <typename T>
class ArraySequence;

void Generator(std::string& name, int count);

void GettingDataFromFile(std::string& name, ArraySequence<BookCard>& book);

void PuttingDataToFile(std::string& name, ArraySequence<BookCard>& book);

#endif //LAB2_GENERATOR_H
