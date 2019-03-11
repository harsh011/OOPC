// 3.1.18
// Write a program to perform the following:
// To accept three numbers , calculate average, find the smallest and largest number,
//  and display the results as avg, min and max
#include<iostream>
using namespace std;
 int main()
 {
   int n1, n2, n3;
   float ans;
   std::cout << "Please enter three numbers: " << '\n';
   std::cin >> n1;
   std::cout << '\n';
   std::cin >> n2;
   std::cout << '\n';
   std::cin >> n3;
   std::cout << '\n';
   std::cout << "The Average of the given numbers is: " << float(n1+n2+n3)/3 << '\n';
   if(n1<n2)
     {
     if(n1<n3){ans=n1;} else{ans=n3;}
     }
   else
     {
     if(n2<n3){ans=n2;} else{ans=n3;}
     }
   std::cout << "The Minimun of the three numbers is: " << ans << '\n';
   if(n1>n2)
     {
     if(n1>n3){ans=n1;} else{ans=n3;}
     }
   else
     {
     if(n2>n3){ans=n2;} else{ans=n3;}
     }
   std::cout << "The Maximum of the three numbers is: " << ans << '\n';
   return 0;
}
