#include<iostream>
int main()
{
//27.12.17-3/1/18
//Write a c++ program: Write an appropriate control Structure
//that will examine following the value of a floating point variable, called temp.
//And print one of the following messages depending on the values assigned to the temp.
//1. Ice if value of temp<0
//2. Water if 0<temp<100
//3. Steam if 100<temp
float temp;
std::cout << "Enter the value of the temperature: " << " \n";
std::cout << "/* message */" << '\n';
std::cin >> temp;
if (temp<0) {std::cout << "Ice" << '\n';}
else if(temp<100&&temp>0) {std::cout << "Water" << '\n';}
else{std::cout << "Steam" << '\n';}
return 0;
}
