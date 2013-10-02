#include<iostream>
#include<math.h>

//#include "diem.h"
using namespace std;

class TamGiac
{
    Diem d1, d2, d3;
public:
    void nhapsl();
    void in();
    double dientich();
    TamGiac maxdt(TamGiac t2);
    TamGiac(Diem d1, Diem d2, Diem d3);
    TamGiac();
};

TamGiac TamGiac::maxdt(TamGiac t2)
{
    double dt;
    dt = dientich();//dien tich cua tam giac hien hanh.
    if (dt < t2.dientich())
        return t2;
    else
    {
        TamGiac t(d1, d2, d3);
        return t;
    }
}

void TamGiac::nhapsl()
{
    d1.nhapsl();
    d2.nhapsl();
    d3.nhapsl();
}

void TamGiac::in()
{
    d1.in();
    d2.in();
    d3.in();
}

double TamGiac::dientich()
{
    double a, b, c, p;
    a = d1.dodai(d2);
    b = d2.dodai(d3);
    c = d3.dodai(d1);
    p = (a+b+c)/2;
    return (sqrt(p*(p-a)*(p-b)*(p-c)));
}

TamGiac::TamGiac(Diem e1, Diem e2, Diem e3)
{
    d1 = e1;
    d2 = e2;
    d3 = e3;
}

TamGiac::TamGiac()
{

}
