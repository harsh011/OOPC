// Fun read two double type numbers
// Fun to calculate div of two numbers
// Try to throw exception when wrong type of data is keyed in
// Try block to detect and throw exception if the condition "divided by zero
// occurs Appropriate catch blocks
#include <iostream>

double div(double a, double b) {
  if (b == 0) {
    throw "Division by zero not allowed.!";
  }
  return a / b;
}

int main() {
  int wait=0;
start:
  std::cout << "------------------------------" << '\n';
  double x, y, ans;
  std::cout << "Enter X:" << '\n';
  std::cin >> x;
  std::cout << "Enter Y:" << '\n';
  try
  {
    if (!(std::cin >> y))
    {
      throw "Wrong Data Type Entered"; wait = 0;
    }
    ans = div(x, y);
    std::cout << "The answer after division is: " << ans << '\n';
  }
  catch (const char *er)
  {
    std::cerr << "An Error Occured: " << er << '\n';
  }
retry:
  std::cout << "Want to retry.?" << '\n';
  std::cin >> wait;
  if (wait != 0)
  {
    goto start;
  }
return 0;
}
