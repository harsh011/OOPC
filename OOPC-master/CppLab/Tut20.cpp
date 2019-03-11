#include<iostream>
#include<string.h>
class string
{
    char *str;
public:
    string()
    {str = 'NULL';}

    string(char *s)
    {strcpy(str,s);}

    void display()
    {puts(str);}

    friend int operator == (string, string);
};

int operator == (string a, string b)
    {
        if(strcmp(a.str,b.str)==0){return 1;}
        else {return 0;}
    }

int main()
{
    char ip[20];
    std::cout<<"str1 ";
    std::cin>>ip;
    string a(ip);
    std::cout<<"str2 ";
    std::cin>>ip;
    string b(ip);
    a.display();
    b.display();
    if(a==b)
    {std::cout << "The strings are equal.!" << '\n';}
    else
    {std::cout << "The strings are not equal.!" << '\n';}
    return 0;
}
