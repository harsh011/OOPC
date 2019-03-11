#include <iostream>

class Int
{
  int i;
public:
  Int(){i=0;}
  void setvalue(int a)  {i=a;}
  void getvalue()  {std::cout<<"I="<<i<<'\n';}
  friend Int add(Int, Int);
};

Int add(Int x, Int y)
{
  Int z;
  z.i=x.i+y.i;
  return z;
}

int main()
{
Int one,two,three;
one.getvalue();
two.getvalue();
three.getvalue();
one.setvalue(10);
two.setvalue(20);
one.getvalue();
two.getvalue();
three=add(one, two);
three.getvalue();
return 0;
}
