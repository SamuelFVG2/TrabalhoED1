#include <string>

class Date {
public:
    int day;
    int month;
    int year;
    
    Date();
    Date(int day, int month, int year);

    std::string toString() const;
};