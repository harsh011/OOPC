#include<stdio.h>

int main()
  {int a,b,c,num;
  system("cls");
  printf("Enter 3 numbers\n");
  scanf("%d%d%d", &a,&b,&c);
  num=brute_max(a,b,c);
  printf("(Brute)The Largest of the three numbers is %d\n",num);
  num=tert_max(a,b,c);
  printf("(Tert)The Largest of the three numbers is %d\n",num);
  num=max(a,b,c);
  printf("(Nested)The Largest of the three numbers is %d\n",num);
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

int brute_max(int a, int b, int c)
  {
    int ans;
    ans=(a>b&&a>c)?a:b;
    ans=(b>a&&b>c)?b:c;
    ans=(c>a&&c>b)?c:a;
    return ans;
  }

int tert_max(int a, int b, int c)
{
  int ans,ans1;
  ans=(a>b&&a>c)?a:(ans1=(b>c)?b:c);
  return ans;
}

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
