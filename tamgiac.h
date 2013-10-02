#include <iostream>
#include <math.h>
#include <sstream>

//#include "diem.h"
using namespace std;

class TamGiac
{
    Diem d1, d2, d3;

public:

    string toString();
    double dienTich();
    TamGiac* soSanhDienTich(TamGiac *t2);
    TamGiac(Diem d1, Diem d2, Diem d3);
    TamGiac();
};

TamGiac* TamGiac::soSanhDienTich(TamGiac *t2)
{
    return (dienTich() > t2->dienTich()) ? this : t2;
}

string TamGiac::toString()
{
    std::stringstream fmt;
    fmt << d1.toString() << endl
        << d2.toString() << endl
        << d3.toString() << endl;
    return fmt.str();
}

double TamGiac::dienTich()
{
    double a, b, c, p;
    a = d1.doDaiToi(d2);
    b = d2.doDaiToi(d3);
    c = d3.doDaiToi(d1);
    p = (a + b + c)/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

TamGiac::TamGiac(Diem e1, Diem e2, Diem e3)
{
    this->d1 = e1;
    this->d2 = e2;
    this->d3 = e3;
}

TamGiac::TamGiac()
{

}
