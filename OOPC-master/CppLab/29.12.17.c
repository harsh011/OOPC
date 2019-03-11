#include<stdio.h>

int main()
  {int a,b,c,num;
  system("cls");
  printf("Enter 3 numbers\n");
  scanf("%d%d%d", &a,&b,&c);
  num=max(a,b,c);
  printf("The Largest of the three numbers is %d\n",num);
  num=min(a,b,c);
  printf("The Smallest of the three numbers is %d\n",num);
  return 0;}

int max(int a, int b, int c)
  { int ans;
  if(a>b)
    {
    if(a>c){ans=a;}
    else{ans=c;}
    }
  else
    {
    if(b>c){ans=b;}
    else{ans=c;}
    }
  return ans;}

int min(int a, int b, int c)
  { int ans;
  if(a<b)
    {
    if(a<c){ans=a;}
    else{ans=c;}
    }
  else
    {
    if(b<c){ans=b;}
    else{ans=c;}
    }
  return ans;}
