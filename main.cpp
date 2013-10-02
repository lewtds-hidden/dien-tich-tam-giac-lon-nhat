#include <cstdlib>
#include <iostream>


#include "diem.h"
#include "tamgiac.h"
using namespace std;

int main(int argc, char *argv[])
{
    int count = 0;
      cout<<"So diem?";
      cin>>count;
      Diem a[100];
      for (int i=0; i<count; i++)
      {
          cout<<"Nhap dl cho diem thu "<<i<<endl;
          a[i].nhapsl();
      }
      double max = 0;
      int imax, jmax, kmax;
      TamGiac tmax;
      cout<<"Dien tich cac tam giac la:"<<endl;
      for (int i=0; i<count-2; i++)
          for (int j=i+1; j<count-1; j++)
              for (int k=j+1; k<count; k++)
              {
                  TamGiac t(a[i], a[j], a[k]);
                  tmax = t.maxdt(tmax);  //tra ve tam giac lon hon trong 2 tam giac tmax va t
              }
       cout<< "Tam giac co dien tich lon nhat la: " << tmax.dientich()<<endl;
       tmax.in();
       system("pause");
}
