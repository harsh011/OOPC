   //5/1/18
// #define pi 3.14
#include <iostream>
int main()
{
int l,b;
enum shape{Circle=1,Rectangle=2,Triangle=3};
int choice=0;
std::cout << "Enter\n1:Circle\n2:Rectangle\n3:Triangle\n";
std::cin >> choice;
switch (choice)
{
  case Circle:
     std::cout << "Area of Circle:\nEnter the value of radius of the Circle:\n";
     std::cin >> l;
     std::cout << "The Area of the circle with radius= "<< l << "is= " << 3.14*(l*l) << '\n';
     break;
  case Rectangle:
     std::cout << "Area of Rectangle:\nEnter the value of length and breath of the Rectangle:\n";
     std::cin >> l >> b;
     std::cout << "The Area of the Rectangle with Length="<< l << "and Breath=" << b << "is=" << l*b << '\n';
     break;
  case Triangle:
     std::cout << "Area of Triangle:\nEnter the value of base and height of the Triangle";
     std::cin >>l>>b;
     std::cout << "The Area of the Triangle with Base="<< l <<"and Height="<<b<<"is="<<((l*b)/2)<<'\n';
     break;
  default:
     std::cout << "Please enter a valid option." << '\n';
}
return 0;
}
