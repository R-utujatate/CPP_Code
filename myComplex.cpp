#include<iostream>

#include "myComplex.hpp"

using namespace std;

myComplex::myComplex()
{
    real = 0;
    img = 0;
}

void myComplex::print()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}

void myComplex::add(myComplex c1,myComplex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

void myComplex::sub(myComplex c1,myComplex c2)
{
    real= c1.real - c2.real;
    img = c1.img - c2.img;
}
void myComplex::mult(myComplex c1,myComplex c2)
{
    real= c1.real * c2.real;
    img = c1.img * c2.img;
}
void myComplex::conjugate(myComplex c1,myComplex c2)
{
    
}