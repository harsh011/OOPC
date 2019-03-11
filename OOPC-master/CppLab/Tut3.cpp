#include<iostream>
int main()
{
  //27/12/17
  system("color 0a");
  int n1, n2;
  std::cout << "Enter two numbers." << '\n';
  std::cin >> n1;
  std::cout<<'\n';
  std::cin >> n2;
  std::cout << "The total of both the numbers is:" << n1+n2<<'\n';
  std::cout << "The diferrence between both the numbers is:" << n1-n2<<'\n';
  std::cout << "The product of both the numbers is:" << n1*n2<<'\n';
  std::cout << "The division of both the numbers is:" << float(n1)/n2<<'\n';
  std::cout << "The remainder on division is:" << n1%n2<<'\n';
  return 0;
}
