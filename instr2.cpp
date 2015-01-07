#include <iostream>
#include <string>
using namespace std;
int main (int argc, char const *argv[])
{
  string a = "aaa";
  string b = a;
  a = "ccc";

  cout<<"a = " << a << endl;
  cout<<"b = " << b << endl;
  return 0;
}
