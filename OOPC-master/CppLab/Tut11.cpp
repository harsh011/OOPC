// Write a program to evaluate following investment equation V = P(1+r)^n and print the tables
// which would give the value of V for various combination of the following values of P, r, and n:
// P: 1000, 2000, 3000, ........, 10000
// r: 0.10, 0.11, 0.12, 0.13, ........, 0.20
// n: 1, 2, 3,........, 10
//10/1/18
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int P=1000,n=1,i=0;
  double V=0;
  float r=0.10,t=0;
  cout << setw(35)<< "V = P(1+r)^n\n\n" <<endl;
  cout << setw(15)<< "P\tr\tn\t\tV" <<endl;
  // std::cout << "Loop start" << '\n';
  for(P=1000,n=1,r=0.10;n<=10;P=P+1000,r=r+0.01,n=n+1)
  {
  t=pow(1+r,n);
  V=P*t;
  std::cout <<setw(10)<<P<<setw(8)<<r<<setw(7)<<n<<setw(20)<<V<<endl;
  V=0;
  }
  // std::cout << "Loop end" << '\n';
  return 0;
}
