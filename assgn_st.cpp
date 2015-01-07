#include <iostream>
using namespace std;

struct iflatable
{
  char name [20];
  float volume;
  double price;
};

int main (int argc, char const *argv[])
{
  iflatable b =
  {
    "sumflowers",
    0.20,
    12.46
  };

  iflatable c = b;
  cout << "c.volume" << c.volume << endl;
  c.volume = 2.2;
  cout << "c.volume" << c.volume << endl;
  cout << "b.volume" << b.volume << endl;
}
