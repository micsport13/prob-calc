// Main Function file
// Include headers below
#include "equations.h"
#include "distribution.h"
#include "prob.h"
#include <iostream>
#include <string>

std::string GetUserString(const std::string &prompt);
double GetUserDouble(const std::string &prompt);

void DisplayOptions()
{
    std::cout << "1. Create event" << std::endl;
    std::cout << "2. Assign probability to event" << std::endl;
}
int main()
{
    std::cout << "Please choose a number option from the list below";
    DisplayOptions();
    std::string userChoice = GetUserString("Select Option: ");
    if (userChoice == "1"){
        std::string eventName = GetUserString("Please assign a name to the event");
        prob event(eventName);
    }

    return 0;
}