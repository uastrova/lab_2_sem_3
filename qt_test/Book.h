//
// Created by User on 06.12.2024.
//

#ifndef LAB2_BOOK_H
#define LAB2_BOOK_H

#pragma once
#include <string>
#include <iostream>
#include "Sequence.h"


template <typename T>
class ArraySequence;

class BookCard
{
private:
    std::string ISBN;  //уникальный код книги
    std::string title;  //название книги
    std::string authorSecondName;  //автор книги(фамилия)
    std::string authorFirstName;  //автор книги(имя)
    int pages; //кол-во страниц в книге
    int YearPublish;  //год публикации
public:
    BookCard()
    {
        ISBN = "";
        title = "";
        authorSecondName = "";
        authorFirstName = "";
        pages = 0;
        YearPublish = 0;
    }

    BookCard(std::string ISBN, std::string title, std::string authorSecondName, std::string authorFirstName, int pages, int YearPublish)
    {
        this->ISBN = ISBN;
        this->title = title;
        this->authorSecondName = authorSecondName;
        this->authorFirstName = authorFirstName;
        this->pages = pages;
        this->YearPublish = YearPublish;
    }

    BookCard(BookCard& example)
    {
        this->ISBN = example.ISBN;
        this->title = example.title;
        this->authorSecondName = example.authorSecondName;
        this->authorFirstName = example.authorFirstName;
        this->pages = example.pages;
        this->YearPublish = example.YearPublish;
    }

    BookCard(const BookCard& other)
            : ISBN(other.ISBN),
              title(other.title),
              authorSecondName(other.authorSecondName),
              authorFirstName(other.authorFirstName),
              pages(other.pages),
              YearPublish(other.YearPublish){};



    std::string GetISBN() const
    {
        return this->ISBN;
    }

    std::string GetTitle() const
    {
        return this->title;
    }

    std::string GetAuthorSecondName() const
    {
        return this->authorSecondName;
    }

    std::string GetAuthorFirstName() const
    {
        return this->authorFirstName;
    }

    int GetPages() const
    {
        return this->pages;
    }

    int GetYearPublish() const
    {
        return this->YearPublish;
    }

    void SetISBN(std::string& ISBN)
    {
        this->ISBN = ISBN;
    }

    void SetTitle(std::string& title)
    {
        this->title = title;
    }

    void SetAuthorSecondName(std::string& authorSecondName)
    {
        this->authorSecondName = authorSecondName;
    }

    void SetAuthorFirstName(std::string& authorFirstName)
    {
        this->authorFirstName = authorFirstName;
    }

    void SetPages(int& pages)
    {
        this->pages = pages;
    }

    void SetYearPublish(int& YearPublish)
    {
        this->YearPublish = YearPublish;
    }
    friend std::ostream &operator<<(std::ostream &out, const BookCard &book)
    {
        return out << book.ISBN << " " << book.title << " " << book.authorSecondName << " " << book.authorFirstName << " " << book.pages << " " << book.YearPublish << std::endl;
    }

    friend std::istream &operator>>(std::istream &in, BookCard &book)
    {
        std::cout << "Enter ISBN: ";
        in >> book.ISBN;
        std::cout << "Enter title: ";
        in >> book.title;
        std::cout << "Enter author's second name: ";
        in >> book.authorSecondName;
        std::cout << "Enter author's first name: ";
        in >> book.authorFirstName;
        std::cout << "Enter number of pages: ";
        in >> book.pages;
        std::cout << "Enter year of publication: ";
        in >> book.YearPublish;
        return in;
    }

    BookCard& operator= (BookCard&& other)
    {
        this->ISBN = other.ISBN;
        this->title = other.title;
        this->authorSecondName = other.authorSecondName;
        this->authorFirstName = other.authorFirstName;
        this->pages = other.pages;
        this->YearPublish = other.YearPublish;
        return *this;
    }

    BookCard& operator=(const BookCard& other)
    {
        if (this != &other) { // Проверка на самоприсваивание
            this->ISBN = other.ISBN;
            this->title = other.title;
            this->authorSecondName = other.authorSecondName;
            this->authorFirstName = other.authorFirstName;
            this->pages = other.pages;
            this->YearPublish = other.YearPublish;
        }
        return *this;
    }

    //~BookCard() = default;

    friend void GettingDataFromFile(std::string& name, ArraySequence<BookCard>& book);
    friend void PuttingDataToFile(std::string& name, ArraySequence<BookCard>& book);
};

#endif //LAB2_BOOK_H
