#include<iostream>
#include "myComplex.hpp"
using namespace std;


int main()
{
    myComplex c1,c2,c3,c4,c5,c6;

    c1.print();

    c1.real=10;
    c1.img=20;

    cout<<endl;
    c1.print();
    cout<<endl;

    c2.real=23;
    c2.img=12;
    cout<<endl;

    c2.print();
    cout<<endl;

    c3.print();
    cout<<endl;

    c3.add(c1,c2);
    c3.print();
    cout<<endl;

    c4.print();
    cout<<endl;

    c4.sub(c1,c2);
    c4.print();
    cout<<endl;

   cout<<endl;
    c5.mult(c1,c2);
    c5.print();
    cout<<endl;

    cout<<endl;
    c6.conjugate(c1,c2);
    c6.print();
    cout<<end1;







    return 0;
}
