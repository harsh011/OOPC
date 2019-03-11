#include<iostream>

class complex //class declaration
{
  float real, imag;  //member variables
public:
complex(){real=0;imags=0;} //def constructor
complex (float x){real=x;imag=0;} //parameterized constructor
complex (float x, float y){real=x;imag=y;} //parameterized constructor with two args ( overloaded )
complex add_comp(complex, complex); //member func
complex show_comp(); //member func
};

complex complex::add_comp(complex a, complex b) //member func external declaration
{
  complex c;
  c.real=a.real+b.real;
  c.imag=a.imag+b.imag;
  return c;
}

complex complex::show_comp()  //member func external declaration
{
  std::cout<<real<<" +i "<<imag<<'\n';
}
 int main()  //start main block
 {
complex c1(2.2); //create and assign values to complex object c1 using the parameterized constructor with one args
complex c2(3.2,4.1); //create and assign values to complex object c2 using the parameterized constructor with two args
complex c3; //creating a new complex object without assigning values ( call to the default constructor )
std::cout << "Complex C1:" << '\n'; //use show_comp to display c1's values
c1.show_comp();
std::cout << "Complex C2:" << '\n'; //use show_comp to display c2's values
c2.show_comp();
std::cout << "The sum off both the complex numbers is:" << '\n'; //using add_comp to add the value of c1 and c2, and storing them in to c3.
c3=c3.add_comp(c1,c2);
c3.show_comp(); //use show_comp to display c3's values
   return 0; //end main block
 }
