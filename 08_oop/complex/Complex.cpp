#include "Complex.h"
#include <cstdlib>
#include <cmath>
Complex::Complex()
{
    re = 0;
    im = 0;
}

Complex::Complex(float re, float im)
{
    this->re = re;
    this->im = im;
}

Complex::~Complex()
{
    
}

float Complex::abs()
{
    return pow(re*re + im*im, 0.5);
}

bool operator ==(const Complex &a, const Complex &b)
{
    if((abs(abs(a.re) - abs(b.re)) < 0.001) && (abs(abs(a.im) - abs(b.im)) < 0.001)) 
    {
        return true;
    }
     return false; 
}

Complex operator+(const Complex &a, const Complex &b)
{
    return Complex(a.re + b.re, a.im + b.im);     
}
  
Complex operator-(const Complex &a, const Complex &b)
{
    return Complex(a.re - b.re, a.im - b.im);    
}
