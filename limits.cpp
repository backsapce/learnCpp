#include <iostream>
using namespace std;
int main (int argc, char const *argv[])
{
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "max value of int short long llong :"<< endl;
  cout << n_int << endl
       << n_short << endl
       << n_long << endl
       << n_llong << endl;

  cout << "length of int  short long llong :" << endl;
  cout << sizeof n_int<< endl
       << sizeof(short) << endl
       << sizeof(long) << endl
       << sizeof(long long ) << endl;
  return 0;
}
