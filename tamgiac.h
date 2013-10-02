#include<iostream>
#include<math.h>

//#include "diem.h"
using namespace std;

class TAMGIAC
{
      DIEM d1, d2, d3;
      public:
      void nhapsl();
      void in();
      double dientich();
      TAMGIAC maxdt(TAMGIAC t2);
      TAMGIAC(DIEM d1, DIEM d2, DIEM d3);
      TAMGIAC();
};

TAMGIAC TAMGIAC::maxdt(TAMGIAC t2)
{
      double dt;
      dt = dientich();//dien tich cua tam giac hien hanh.
      if (dt < t2.dientich())
         return t2;
      else 
      {
           TAMGIAC t(d1, d2, d3);
           return t;
      }  
}

void TAMGIAC::nhapsl()
{
     d1.nhapsl();
     d2.nhapsl();
     d3.nhapsl();
}

void TAMGIAC::in()
{
     d1.in();
     d2.in();
     d3.in();
}

double TAMGIAC::dientich()
{
     double a, b, c, p;
     a = d1.dodai(d2);
     b = d2.dodai(d3);
     c = d3.dodai(d1);
     p = (a+b+c)/2;
     return (sqrt(p*(p-a)*(p-b)*(p-c)));
}

TAMGIAC::TAMGIAC(DIEM e1, DIEM e2, DIEM e3)
{
     d1 = e1;
     d2 = e2; 
     d3 = e3;
}

TAMGIAC::TAMGIAC()
{
    
}
