#include<iostream>
#include<stdio.h>
using namespace std;
class employee
{
    int age, salary;
    char *name;
public:
    employee(){}
    employee(int a, int s, char *n)
    {
        age=a;
        salary=s;
        name=n;

        friend istream & operator>>(istream &in, employee &e1)
        {
            cout<<"\n Enter the Age and Salary.";
            in>>e1.age;
            in>>e1.salary;
            COUT"Enter the name of the employee.";
            in>>e1.name;
            return in;
        }

        friend ostream & operator<<(ostream &out, employee &e1)
        {
            out<<'\n';
            out<<"Name "<<e1.name<<"Age "<<e1.age<<"Salary "<<e1.salary;
            return out;
        }
    }

};


 int main()
 {
     employee e1,e2(19,20000,"Jet");
     cout<<"\n Enter the details for employee 1: ";
     cin>>e1;
     cout<<"\n Enter the details for employee 1: ";
     cin>>e2;
     return 0;
 }
