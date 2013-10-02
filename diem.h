#include<iostream>
#include<math.h>
using namespace std;

class Diem
{
      int x, y;
      public:
      void nhapsl();
      void in();
      double dodai(Diem d2);
      //Diem(int a, int b);
};

void Diem::nhapsl()
{
     cout<<"x, y = ";
     cin>>x>>y;
}

void Diem::in()
{
     cout<<"(x, y)=("<<x<<","<<y<<") "<<endl;
}

double Diem::dodai(Diem d2)
{
     double t;
     t = sqrt((x-d2.x)*(x-d2.x)+(y-d2.y)*(y-d2.y));
     return t;
}
