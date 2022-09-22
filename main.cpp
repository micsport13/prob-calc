// Main Function file
// Include headers below
#include <iostream>
#include <string>

#include "distribution.h"
#include "equations.h"
#include "event.h"

std::string GetUserString(const std::string& prompt);
double GetUserDouble(const std::string& prompt);
int GetUserInt(const std::string& prompt);
void DisplayOptions() {
    std::cout << "1. Create event" << std::endl;
    std::cout << "2. Assign probability to event" << std::endl;
}
int main() {
    std::cout << "Please choose a number option from the list below" << std::endl;
    DisplayOptions();

    return 0;
}