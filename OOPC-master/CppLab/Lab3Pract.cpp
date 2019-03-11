//WAP (cpp) that contains a func named prime of category (with return & no args) call from main
#include <iostream>
int prime()
{
  int p,n,flag=0;
  std::cout << "Enter a number.!" << '\n';
  std::cin >> p;
  for(n=2;n<p;n++)
  {
    // std::cout << p <<'\t'<< n <<'\t'<<p%n << '\n';
    if(p%n==0){flag=1;break;}
  }
  return flag;
}

int main()
{
  int ans=prime();
  if(ans==0){std::cout << "The number entered is a prime number." << '\n';}
  else      {std::cout << "The number entered is a composite number." << '\n';}
  return 0;
}
