// WAP (cpp) to calculate average of an array[10] using UDF of category [no return with args]
#include<iostream>

void average(int a[])
  {
    float ans=0;
    for(int i=0;i<10;i++)
    {
      ans=ans+a[i];
    }
    ans=ans/10;
    std::cout << "The average of the numbers is:"<<ans << '\n';
  }

int main()
  {
    int a[10];
    std::cout << "Please enter multiple numbers." << '\n';
    for(int i=0;i<10;i++)
    {
      std::cin >> a[i];
    }
    average(a);
    return 0;
  }
