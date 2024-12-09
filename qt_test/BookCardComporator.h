//
// Created by User on 06.12.2024.
//

#ifndef LAB2_BOOKCARDCOMPORATOR_H
#define LAB2_BOOKCARDCOMPORATOR_H

#pragma once
#include "Book.h"

inline bool ComporatorBookPages(const BookCard& lhs, const BookCard& rhs)
{
    return (rhs.GetPages() >= lhs.GetPages());
}

inline bool DescComporatorBookPages(const BookCard& lhs, const BookCard& rhs)
{
    return !(rhs.GetPages() >= lhs.GetPages());
}

inline bool ComporatorBookYear(const BookCard& lhs, const BookCard& rhs)
{
    return rhs.GetYearPublish() >= lhs.GetYearPublish();
}

inline bool DescComporatorBookYear(const BookCard& lhs, const BookCard& rhs)
{
    return !(rhs.GetYearPublish() >= lhs.GetYearPublish());
}

inline bool ComporatorBookFirstName(const BookCard& lhs, const BookCard& rhs)
{
    return rhs.GetAuthorFirstName() >= lhs.GetAuthorFirstName();
}

inline bool DescComporatorBookFirstName(const BookCard& lhs, const BookCard& rhs)
{
    return !(rhs.GetAuthorFirstName() >= lhs.GetAuthorFirstName());
}

inline bool ComparatorBookTitle(const BookCard& lhs, const BookCard& rhs)
{
    return rhs.GetTitle() >= lhs.GetTitle();
}

inline bool DescComparatorBookTitle(const BookCard& lhs, const BookCard& rhs)
{
    return !(rhs.GetTitle() >= lhs.GetTitle());
}

inline bool ComporatorBookSecondName(const BookCard& lhs, const BookCard& rhs)
{
    return rhs.GetAuthorSecondName() >= lhs.GetAuthorSecondName();
}

inline bool DescComporatorBookSecondName(const BookCard& lhs, const BookCard& rhs)
{
    return !(rhs.GetAuthorSecondName() >= lhs.GetAuthorSecondName());
}

#endif //LAB2_BOOKCARDCOMPORATOR_H
