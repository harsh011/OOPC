#include<iostream>
class counter
{
  static int cnt;
public:
  counter(){cnt++;}
  ~counter(){cnt--;}
  void prnt(){std::cout << "The number of objects created is:"<< cnt << '\n';}
};

int counter::cnt=0;

int main()
{
  counter c1, c2, c3;
  c1.prnt();
  return 0;
}
