#include<iostream>
#include<stdio.h>
#include<string>
int main()
{
char str[10];
int i=0;
int cnta=0,cnte=0,cnti=0,cnto=0,cntu=0;
std::cout << "Enter the string: " << '\n';
gets(str);
std::cout << "Counting the vowels.\n" << '\n';
for(i=0;i<10;i++)
  {
  if(str[i]=='a'||str[i]=='A'){cnta++;}
  if(str[i]=='e'||str[i]=='E'){cnte++;}
  if(str[i]=='i'||str[i]=='I'){cnti++;}
  if(str[i]=='o'||str[i]=='O'){cnto++;}
  if(str[i]=='u'||str[i]=='U'){cntu++;}
  // switch (str[i])
  // {
  //   case 'a': cnta++;break;
  //   case 'e': cnte++;break;
  //   case 'i': cnti++;break;
  //   case 'o': cnto++;break;
  //   case 'u': cntu++;break;
  //   default: break;
  // }
  }
  std::cout << "The total numbers of vowels is: " << cnta+cnte+cnti+cnto+cntu << '\n';
  std::cout << "Occurences: \nA:"<<cnta<<"\nE:"<<cnte<<"\nI:"<<cnti<<"\nO:"<<cnto<<"\nU:"<<cntu<<'\n';
  return 0;
}
