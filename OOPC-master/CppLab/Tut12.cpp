#include<iostream>
int power(int m, int n);
double power(double m, int n=2);

int main()
{
  int m,n;
  double dm,ans;
  std::cout<<"M^N" << '\n';
  std::cout<<"Enter the value of M and N" << '\n';
  std::cin>>m>>n;
  dm=m;
  ans=power(m,n);
  std::cout<<"\nInt, Int "<<m<<"^"<<n<<" is= "<<ans<<'\n';
  ans=power(dm,n);
  std::cout<<"\nDouble, Double "<<m<<"^"<<n<<" is= "<<ans<<'\n';
  ans=power(m);
  std::cout<<"\nDouble "<<m<<"^"<<n<<" is= "<<ans<<'\n';
  return 0;
}
int power(int m, int n)
{ int ans=1,i;
  for(i=n;i>0;i--) {ans=ans*m;}
  return ans;
}
double power(double m, int n)
{ double ans=1,i;
  for(i=n;i>0;i--) {ans=ans*m;}
  return ans;
}
