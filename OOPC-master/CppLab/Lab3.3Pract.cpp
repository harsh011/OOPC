// WAP (cpp) that describes the student details such as roll no., name and attendance of 5 subjects.
// If the average attendance is below 75%, then the student is not eligible of mid sem exam.
// WAP (cpp) containing class student, having the member function, 1. getdetail, 2. setdetail and 3. Check eligibility
#include <iostream>
#include <string>
class student
  {
  private:
    int roll;
    char name[10];
    int attendance[5];
  public:
    void setdetail();
    void getdetail();
    float eligibility();
  };

void student::setdetail()
  {
  std::cout<<"Please enter the name of the student:\n";
  std::cin >> name;
  std::cout<<"Enter the roll number for: "<<name<<'\n';
  std::cin>>roll;
  at:
  std::cout << "Enter the number of classes attanded for each subject. Out of the total of 54" << '\n';
    for(int i=0;i<5;i++)
    {
      std::cout<<"\nEnter the attendance for subject "<<i+1<<"\n\n\n";
      std::cin>>attendance[i];
      if (attendance[i]>54)
      {std::cout << "Please enter the attanded lectures in range of 0 to 54" << '\n';goto at;}
    }
  }

void student::getdetail()
  {
  std::cout << "\nThe name of the student is: "<<name<<'\n';
  std::cout << "\nThe roll number of the student is: "<<roll<<'\n';
  std::cout << "\nYou entered the attendance as follows:\n";
  for(int i=0;i<5;i++)
  {
    std::cout<<"Subject "<<i+1<<':'<<attendance[i]<<"/54\n\n";
  }
  std::cout << "\nCurrent attendance is "<<eligibility()<<"%\n";
  if(eligibility()<75){std::cout << "\nThe student is not eligible for the current mid sem exam.!\n";}
  else{std::cout << "\nThe student is eligible for the current mid sem exam.!\n";}
  }

float student::eligibility()
  {int sum=0;
    for (int i=0;i<5;i++)
    {
      int att;
      att=attendance[i]/0.54;
      sum=sum+att;
    }
    return sum/5;
  }

int main()
  {
  student s;
  int choice;
    do{
      std::cout<<"Please enter a choice: \n";
      std::cout << "1. Input details\n";
      std::cout << "2. Display details\n";
      std::cout << "0. Exit\n";
      std::cin>>choice;
        switch (choice)
        {
          case 1:
            s.setdetail();
            break;
          case 2:
            s.getdetail();
            break;
          case 0:
            std::cout << "Exiting.!\n";
            break;
          default:
            std::cout << "Please enter a valid number.!" << '\n';
            continue;
        }
      }
      while(choice!=0);
  return 0;
  }
