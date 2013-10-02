#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

class Diem
{
    int x, y;

public:

    void nhapsl();
    string toString();
    double doDaiToi(Diem d2);
    //Diem(int a, int b);
};

void Diem::nhapsl()
{
    cout << "x, y = ";
    cin >> x >> y;
}

string Diem::toString()
{
    std::stringstream fmt;
    fmt << "(" << x << ", " << y << ")";
    return fmt.str();
}

double Diem::doDaiToi(Diem d2)
{
    double t;
    t = sqrt((x - d2.x) * (x - d2.x) + (y - d2.y) * (y - d2.y));
    return t;
}
