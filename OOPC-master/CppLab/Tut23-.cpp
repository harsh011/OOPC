#include<iostream>

class Staff{
  int code;  char nme[10];
  public:
  void getcn()
  {
    std::cout << "Enter the code number of the staff: " << '\n';
    std::cin >> code;
    std::cout << "Enter the name of the staff: " << '\n';
    std::cin >> nme;
  }
  void putcn()
  {
    std::cout << " The Code and Name of the staff is: " <<" \nCode: "<<code<<" \nName:"<<nme<<'\n';
  }
            };
            
class Teacher : public Staff{
  int publ;  char subj[];
  public:
  void gett()
  {
    std::cout << "Enter the Subject name: " << '\n';
    std::cin >> subj;
    std::cout << "Enter the Publication number: " << '\n';
    std::cin >> publ;
  }
  void putt()
  {
    std::cout << "The Subject name is: " << subj << '\n';
    std::cout << "And the Publication name is: "<< publ <<'\n';
  }
  };

class Typist : public Staff{
  int speed;
  public:
    void getsp(){std::cout << "Enter the Typist's speed: " << '\n';std::cin >> speed;}
    void putsp(){std::cout << "The Typist's speed is: "<< speed << '\n';}
  };

class Casual : public Typist{
  int salary;
  public:
    void getsal(){
      std::cout << "Enter the salary of the Casual Typist: " << '\n';
      std::cin >> salary;
    }
    void putsal() {
      std::cout << "The salary for the Casual Typist is: " <<salary<< '\n';
    }
  };

class Regular : public Typist{
  int wages, day;
  public:
    void getreg(){
      std::cout << "Enter the number of days of work and the daily wages for the Casual Typist: " << '\n';
      std::cin >> day>>wages;
    }
    void putreg(){
      std::cout << "The salary for the Regular Typist is: " << day*wages << '\n';
    }
  };

class Officer : public Staff{
  int Grade;
  public:
    void getgr(){
      std::cout << "Enter the Grade of the Officer: [1-5]" << '\n';
      std::cin >> Grade;
    }
    void putgr(){
      std::cout << "The Grade of the Officer is:"<< Grade << '\n';
    }
};

int main(){
  Teacher t;
  std::cout << "--------Teacher--------" << '\n';
  t.getcn();
  t.gett();
  t.putcn();
  t.putt();
  Casual c;
  std::cout << "--------Casual--------" << '\n';
  c.getcn();
  c.getsp();
  c.getsal();
  c.putcn();
  c.putsp();
  c.putsal();
  Regular r;
  std::cout << "--------Regular--------" << '\n';
  r.getcn();
  r.getsp();
  r.getreg();
  r.putcn();
  r.putsp();
  r.putreg();
  Officer o;
  std::cout << "--------Officer--------" << '\n';
  o.getcn();
  o.getgr();
  o.putcn();
  o.putgr();
  return 0;
  }
