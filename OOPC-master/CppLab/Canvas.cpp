#include <iostream>

class INT{
  int i;
public:
  INT(){i=0;}
  INT(int a){i=a;}
  display()
  {
    std::cout << i << '\n';
  }
friend INT operator /= (INT i1, INT i2);
};

INT operator /= (INT i1, INT i2)
{
i1.i=i1.i/i2.i;
return i1;
}

int main(){
  INT i(20),j(5);
  j.display();
  j/=i;
  i.display();
  j.display();
  return 0;
}
