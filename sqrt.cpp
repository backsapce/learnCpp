#include "iostream"
#include "cmath"

int main (int argc, char const *argv[])
{
  using namespace std;

  double area;
  cout << "enter the floor area, in square feet, of you home. "<< endl;
  cin >> area;
  double side = sqrt(area);
  cout <<"thats the equivalent of a square" << side << endl;
  return 0;
}
