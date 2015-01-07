#include "iostream"
int main (int argc, char const *argv[])
{
  using namespace std;
  int carrots;
  cout << "how many carrots do you have " << endl;
  cin >> carrots;
  cout << "Here are two more";
  carrots += 2;
  cout << "now you have "<<carrots<<" carrots."<<endl;

  return 0;
}
