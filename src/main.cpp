#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>


std::vector<std::string> getPersonFromLine(std::string line ) {
  std::string cell, aux;
  std::vector<std::string> data(4);
  std::stringstream ss(line);

}

int main()
{
  std::ifstream file("./dados.txt");
  std::string line;
  std::getline(file, line);

  while (std::getline(file, line)) { 
    std::vector<std::string> person = getPersonFromLine(line);
  }

  return 0;
}

