#include <iostream>
using namespace std;
inline void max(int a, int b, int c)
  {
  if(a>b)
    {
    if(a>c){cout<<"A=" <<a<< " is the largest of the three numbers" << '\n';}
    else{cout<<"B=" <<c<< " is the largest of the three numbers" << '\n';}
    }
  else
    {
    if(b>c){
      std::cout<<"Hello.!";
      cout<<"B=" <<b<< " is the largest of the three numbers" << '\n';}
    else{cout<<"C=" <<c<< " is the largest of the three numbers" << '\n';}
    }
  }

int main()
 {  int x,y,z;
   cout << "Please enter three numbers followed by a return:" << '\n';
   cin >> x>>y>>z;
   max(x,y,z);
   return 0;
 }
