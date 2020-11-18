#include "std_lib_facilities.h"

struct Point
{
 Point(double xcoor, double ycoor)
  : x(xcoor), y(ycoor) {}
 double x, y;
};

vector<Point> original_points;

int main()
{
 double x, y;
 cout << "Please enter 7 points (x,y) :" << endl;
 for (int i = 0; i < 7; ++i)
 {
  cout << "X: "; cin >> x;
  cout << "Y: "; cin >> y;
  original_points.emplace_back(x, y);
 }
 getchar();
 return 0;
}
