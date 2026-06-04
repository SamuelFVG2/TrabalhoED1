#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

#include "../date/date.h"

class Person {
private:
    std::string name;
    std::vector<Date> dates;

public:
    Person(std::string name);

    std::string getName() const;
    std::vector<Date> getDates() const;

    void setName(std::string name);

    void addDate(Date date);

    std::string getPersonString();
};

#endif