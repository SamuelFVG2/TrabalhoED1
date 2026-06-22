#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "classes/date/date.h"
#include "classes/person/person.h"

Person getPersonFromLine(std::string line) {
    std::string name = "";
    std::string numbers = "";

    for (char c : line) {
        if (isdigit(c)) {
            numbers += c;
        } else {
            name += c;
        }
    }

    Person person(name);

    for (int i = 0; i < (int)numbers.size(); i += 6) {
        std::string dateString = numbers.substr(i, 6);

        int day = std::stoi(dateString.substr(0, 2));
        int month = std::stoi(dateString.substr(2, 2));
        int year = std::stoi(dateString.substr(4, 2));

        // Converte o ano para quatro dígitos
        if (year <= 26) {
            year += 2000;
        } else {
            year += 1900;
        }

        person.addDate(Date(day, month, year));
    }

    return person;
}

int main() {

    std::vector<Person> persons;

    std::ifstream file("./arquivo.txt");

    if (!file.is_open()) {
        std::cout << "Erro ao abrir o arquivo de entrada." << std::endl;
        return 1;
    }

    std::string line;

    while (std::getline(file, line)) {
        Person person = getPersonFromLine(line);

        person.sortDates();

        persons.push_back(person);
    }

    file.close();

    // Bubble Sort das pessoas por ordem alfabética
    int n = persons.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (persons[j].getName() > persons[j + 1].getName()) {

                Person temp = persons[j];
                persons[j] = persons[j + 1];
                persons[j + 1] = temp;
            }
        }
    }

    std::ofstream output("./arquivoSaida.txt");

    if (!output.is_open()) {
        std::cout << "Erro ao criar o arquivo de saída." << std::endl;
        return 1;
    }

    std::cout << "===== RESULTADO =====" << std::endl << std::endl;

    for (int i = 0; i < persons.size(); i++) {
        std::cout << persons[i].getPersonString() << std::endl;
        output << persons[i].getPersonString() << std::endl;
    }

    output.close();

    std::cout << std::endl;
    std::cout << "Arquivo 'arquivoSaida.txt' gerado com sucesso!" << std::endl;

    return 0;
}