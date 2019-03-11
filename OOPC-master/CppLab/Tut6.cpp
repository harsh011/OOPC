//5/1/18
#include <iostream>

int main()
{
 int a[3][3],b[3][3],c[3][3];
 int i,j;
std::cout << "Enter the value of the first matrix: " << '\n';
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
   std::cin >> a[i][j];
   std::cout << '\t';
   }
   std::cout << '\n';
 }
std::cout << "The Entered matrix is: (A)" << '\n';
for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
   std::cout << a[i][j] << '\t';
   }
   std::cout << '\n';
  }
std::cout << "Enter the value of the second matrix: " << '\n';
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      std::cin >> b[i][j];
      std::cout << '\n';
    }
  }
std::cout << "The Entered matrix is: (B)" << '\n';
for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
   std::cout << b[i][j] << '\t';
   }
   std::cout << '\n';
 } //summing up
for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
   c[i][j]=a[i][j]+b[i][j];
   }
 }
std::cout << "The Matrix Addition of both the matrices is: " << '\n';
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
   std::cout << c[i][j] << '\t';
   }
   std::cout << '\n';
 }
 return 0;
}
