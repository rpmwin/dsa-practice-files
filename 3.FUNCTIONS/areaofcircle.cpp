#include <iostream>

using namespace std;

double findArea(double r)
{
    double x=  3.14 * r*r;
    return x;
}

int main()
{
    double radius;
    cout << "enter the radius of the circle --> " << endl;
    cin >> radius;

    double area = findArea(radius);
    cout << "the area of the circle --> " << area << endl;

    return 0;
}