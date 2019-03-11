class FLOAT //class declaration
{
  float f; //member variable
public:
  FLOAT(){} //default constructor
  FLOAT(float x){f=x;} //input
  void display(){std::cout << "/n"<<f<< '\n';} //display member function
  FLOAT operator + (FLOAT)
  {}
};
