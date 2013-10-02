#include<iostream>
#include<math.h>
using namespace std;

class DIEM
{
      int x, y;
      public:
      void nhapsl();
      void in();
      double dodai(DIEM d2);
      //DIEM(int a, int b);
};

void DIEM::nhapsl()
{
     cout<<"x, y = ";
     cin>>x>>y;
}

void DIEM::in()
{
     cout<<"(x, y)=("<<x<<","<<y<<") "<<endl;
}

double DIEM::dodai(DIEM d2)
{
     double t;
     t = sqrt((x-d2.x)*(x-d2.x)+(y-d2.y)*(y-d2.y));
     return t;
}
