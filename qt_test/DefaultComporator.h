//
// Created by User on 06.12.2024.
//

#ifndef LAB2_DEFAULTCOMPORATOR_H
#define LAB2_DEFAULTCOMPORATOR_H

#pragma once

template<typename T>
bool DefaultComparator(const T& lhs, const T& rhs)
{
    return (rhs >= lhs);
}

template<typename T>
bool DescDefaultComporator(const T& lhs, const T& rhs)
{
    return (rhs <= lhs);
}

#endif //LAB2_DEFAULTCOMPORATOR_H
