// A friend function named mean.
#include<iostream>
class numbers
{
  int X,Y;
public:
  void setvalue(){std::cout << "Enter the value of X and Y:" << '\n';std::cin >> X>>Y;}
  friend float mean(numbers);
};

float mean(numbers n)
{
  return (float(n.X+n.Y)/2);
}

int main()
{
  numbers n;
  n.setvalue();
  std::cout << "Mean of the two numbers is="<<mean(n) << '\n';
  return 0;
}
