//
// Created by User on 06.12.2024.
//

#ifndef LAB2_COMPLEXCOMPORATOR_H
#define LAB2_COMPLEXCOMPORATOR_H


#pragma once
#include <cmath>
#include "Complex.h"


bool ComplexComp(const complex& lhs, const complex& rhs)
{
    double modulus_lhs = std::sqrt(lhs.GetRe() * lhs.GetRe() + lhs.GetIm() * lhs.GetIm());
    double modulus_rhs = std::sqrt(rhs.GetRe() * rhs.GetRe() + rhs.GetIm() * rhs.GetIm());
    return modulus_lhs < modulus_rhs;
}

bool DescComplexComp(const complex& lhs, const complex& rhs)
{
    double modulus_lhs = std::sqrt(lhs.GetRe() * lhs.GetRe() + lhs.GetIm() * lhs.GetIm());
    double modulus_rhs = std::sqrt(rhs.GetRe() * rhs.GetRe() + rhs.GetIm() * rhs.GetIm());
    return !(modulus_lhs < modulus_rhs);
}

#endif //LAB2_COMPLEXCOMPORATOR_H
