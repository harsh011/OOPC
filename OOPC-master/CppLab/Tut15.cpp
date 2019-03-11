#include<iostream>
#include<stdio.h>
class bank_account
{
  char name[20];
  int accnum;
  int bal;
public:
  void setvalue()
  {
    std::cout << "Enter the name of the account holder.:" << '\n';
    std::cin >> name;
    std::cout << "Enter the account number.:" << '\n';
    std::cin >> accnum;
    std::cout << "Enter your account balance:" << '\n';
    std::cin >> bal;
  }
  void deposit()
  {
    int amt;
    std::cout << "Enter the amount to be deposited:" << '\n';
    std::cin >> amt;
    bal=bal+amt;
    std::cout << "Current Balance="<< bal<< '\n';
  }
  void withdraw()
  {
    int amt;
    std::cout << "Current Balance="<< bal<< '\n';
    std::cout << "Enter the amount to be withdrawn:" << '\n';
    std::cin >> amt;
    if(amt>bal){std::cout << "You do not have enough money to be withdrawn.!" << '\n';}
    else{bal=bal-amt;}
  }
  void display()
  {
    std::cout << "The Name of the account holder is:" << name<< '\n';
    std::cout << "The Account Balance is:" << bal<< '\n';
  }
};
int main()
{
  int n,i,ch,op;
  std::cout << "Enter the number of customers:" << '\n';
  std::cin >> n;
  for(i=1;i<=n;i++)
  {
    bank_account cust[i];
    cust[i].setvalue();
    std::cout << "Customer "<<i<<'\n';
    do
    {
      int ch;
      std::cout << "Enter your choice:\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit" << '\n';
      std::cin >> op;
      switch(op)
      {
        case 1:
          cust[i].deposit();break;
        case 2:
          cust[i].withdraw();break;
        case 3:
          cust[i].display();break;
        case 4:
          op=4;break;
        default:
          std::cout << "Enter a valid choice.!" << '\n';break;
      }
    }while(op!=4);
  }
  return 0;
}
