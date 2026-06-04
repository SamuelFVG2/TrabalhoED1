#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>


std::vector<std::string> getPersonFromLine(std::string line ) {
  std::string cell, aux;
  std::vector<std::string> data(4);
  std::stringstream ss(line);

  int i = 1, j = 0; 
  
  for (char c:line) { // preencher o vetor de dados
    if (!isdigit(c)) {
      data[0] += c;
    } 

    else {
      data[i] += c;
      j++;

      if(j % 6 == 0) {
        i++;
      }
    }
  }

  return data;
}

std::vector<std::string> orderDatasInPerson(std::vector<std::string> person ) { 
  std::string aux;
  std::vector<std::string> data(1);

  std::cout << person[0] << std::endl;

  return data;
}


int main()
{
  std::ifstream file("./dados.txt");
  std::string line;
  std::getline(file, line);

  while (std::getline(file, line)) { 
    std::vector<std::string> person = getPersonFromLine(line);
    
    orderDatasInPerson(person);
  }

  return 0;
}



// for (std::string item : data) {
//   std::cout << item << std::endl;
// }

// std::cout << line << std::endl;