//5/1/18
#include<iostream>

int zeroSmaller(int &x, int &y)
{
  if(x<y)
  {x=0;}
  else
  {y=0;}
  std::cout<<"The value of A is="<<x<<" and B is="<<y<<'\n';
  return 0;
}

int main()
{
  int a,b;
  std::cout << "Enter the value of A and B:\n";
  std::cin >> a>>b;
  zeroSmaller(a,b);
return 0;
}
