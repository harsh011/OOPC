#include <iostream>
#include <fstream>
#include <string.h>
int main()
{
  std::string line;
  int x;
  std::fstream file;
  file.open("filehandle.txt",std::ios::out);
  std::cout << "File created if it did not exist.!" << '\n';
  file << "This is the first line of text in the new file." << '\n'<<"And this is the second line.";
  file.close();
  file.open("filehandle.txt",std::ios::in);
  std::cout << "\n Try 2.!" << '\n';

  char filechar;
  if (file.eof()){ return 0; }
  file>>noskipws;

  while(!file.eof())
  {
    file>>filechar;
    std::cout << filechar;
    line+=filechar;
  }
  file.close();
  {
    std::cout << filechar << '\n';
    file.open("filehandle.txt",std::ios::out);
    file<<line;
    file.close();
    file.open("filehandle.txt",std::ios::in);
    std::cout << "The data of the new file is :" << '\n';
    if(file.eof()){return 0;}
    file>>noskipws;
    while(!file.eof())
    {
      file>>filechar;
      if(file.eof()){filechar='#';}
      std::cout << filechar << '\n';
    }
    file.close();
    return 0;
  }
}
