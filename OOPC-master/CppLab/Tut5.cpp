//Reverse a string 3/1/'18
// #define n 10
#include<stdio.h>
#include<iostream>
int main()
{
  int n = 10;
  // system("cls");
  // int n;
  // std::cout << "Enter the length of the string: " << '\n';
  // std::cin >> n;

  char a[n];
  int i;
  std::cout << "\nEnter the string: " << '\n';
  gets(a);
  std::cout << "\nThe entered string is: " << '\n';
  std::cout << a;
  std::cout << "\n\nThe reversed string is: " << '\n';
  for(i=0;i<n;i++)
  {
    if(a[n-1-i]=='NULL'){break;}
    std::cout << a[n-i];
  }
  return 0;
}
