#include "std_lib_facilities.h"

struct Point
{
 Point(double xcoor, double ycoor)
  : x(xcoor), y(ycoor) {}
 double x, y;
};

ostream& operator<<(ostream& os, const vector<Point>& p)
{
 for (int i = 0; i < p.size(); ++i)
  os << "X: " << p[i].x << " | Y: " << p[i].y << endl;
 return os;
}

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

 cout << original_points;

 return 0;
}
