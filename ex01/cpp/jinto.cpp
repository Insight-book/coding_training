// need gcc, tested on macosx
// g++ jinto.cpp;./a.out
#include <iostream>

using namespace std;

int main()
{
  cout << "What is your name? ";

  string name;
  getline(cin, name);

  string greeting = "Hello, " + name + ", nice to meet you!";
  cout << greeting << endl;

  return 0;
}
