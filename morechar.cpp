#include <iostream>

using namespace std;
int main (int argc, char const *argv[])
{
  char ch = 'cc';
  int i = ch;
  cout << "ascii code for " << ch << " is " << i << endl;
  ch += 1;
  i = ch;
  cout << "ascii code for " << ch << " is " << i << endl;
  cout << "display char ch using cout.put() " << endl;
  cout.put(ch);
  return 0;
}
