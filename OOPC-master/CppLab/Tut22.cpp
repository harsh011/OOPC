#include<iostream>

class circle
{
  int radius;
  float area;
public:
  circle(){radius=0;}
  circle(int r){radius=r;}
  void compute_area(){area=3.14*radius*radius;}
  void display_area(){std::cout<<"The area of the circle is: "<<area<<'\n';}

  int operator == (circle);
};

int circle::operator == (circle c)
{
  if(radius==c.radius)
  {return 1;}
  else
  {return 0;}
}

int main()
{
  int r;
  std::cout<<"Enter the radius of the circle 1:"<<'\n';
  std::cin>>r;
  circle c1(r);
  std::cout<<"Enter the raduis of the circle 1:"<<'\n';
  std::cin>>r;
  circle c2(r);
  c1.compute_area();
  c2.compute_area();
  std::cout<<"The area of the first circle is: "<<'\n';
  c1.display_area();
  std::cout<<"The area of the first circle is: "<<'\n';
  c2.display_area();
  if(c1==c2)
  {  std::cout<<"Both the circles have the same area."<<'\n';}
  else
  {  std::cout<<"The area of the circles is different from each other."<<'\n';}
  return 0;
}

// Do friend functions violate encasulation property.
