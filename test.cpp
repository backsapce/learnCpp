#include <iostream>
#include <string>
using namespace std;
class Test{
private:
  string str;
  void foo();
  int a;
public:
  Test(){ a = 1; cout << "constract" << endl; }
  void foo1();
  void foo2(){
    cout << "foo2" << endl;
  }
  Test::~Test(){
    cout << " ~Test " << endl;
  }

  Test operator+(const Test & t) const;
  friend void operator<<( ostream & os,const Test &t) ;
  void print();
};
 void operator<<(  ostream & os,const Test &t)  {
  os << "a = " << t.a;
}
void Test::print(){
  cout << "a = " << a << endl;
}

Test Test::operator+(const Test & t) const {
  Test re;
  re.a = t.a + a;
  return re;
}

void Test::foo(){
  cout << "foo" << endl;
}


void Test::foo1(){
  cout << "foo1" << endl;
}





int main (int argc, char const *argv[])
{
  Test test1;
  Test test2;
  test2 = test1 + test2;
  // test2.print();
  cout << test2;
  // test.foo1();
  // test.foo2();
  // test.foo();
}
