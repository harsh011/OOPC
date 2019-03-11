#include <iostream>
int temp;
int refswap(int &a,int &b)
{
temp=a;
a=b;
b=temp;
std::cout << "After (Call by Reference)Swap:X= "<<a<<" and Y="<<b<<'\n';
return 0;
}
int valswap(int a,int b)
{
temp=a;
a=b;
b=temp;
std::cout << "After (Call by Value)Swap:X= "<<a<<" and Y= "<<b<<'\n';
return 0;
}
int main()
{
  int x,y;
  std::cout << "Enter the value of X and Y: \n";
  std::cin >>x>>y;
  std::cout << "The values of X and Y before the swap is:" << x << "and" << y << '\n';
  valswap(x,y);
  std::cout << "The value of X and Y (Call by value)"<<x<<y<< '\n';
  refswap(x,y);
  return 0;
}
