#include "std_lib_facilities.h"

struct Point
{
 Point(double xcoor, double ycoor)
  : x(xcoor), y(ycoor) {}
 double x, y;
};

vector<Point> original_points, processed_points;
string filename = "mydata.txt";
ofstream outFile{ filename };
ifstream inFile{ filename };


//beolvas a fileba
ostream& operator<<(ostream& os, const vector<Point>& p)
{
 for (int i = 0; i < p.size(); ++i)
  os << p[i].x << '\n' << p[i].y << endl;
 return os;
}


//kiolvas a fileból
ifstream& operator>>(ifstream& is, vector<Point>& p)
{
 double x, y;
 for (int i = 0; i < original_points.size(); ++i)
 {
  is >> x >> y;
  p.emplace_back(x, y);
 }
 return is;
}



//printeli a vectorok pontjait
void printPointVector(const vector<Point>& p)
{
 for (int i = 0; i < p.size(); ++i)
  cout << "X: " << p[i].x << " | Y: " << p[i].y << endl;


 return;
}


// -----------------------------------------------------------------------------


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


 printPointVector(original_points);
 outFile << original_points;


 inFile >> processed_points;
 printPointVector(processed_points);


 cout << "\nPress any key...";


 return 0;
}
