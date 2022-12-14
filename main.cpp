// Main Function file
// Include headers below
#include <iostream>
#include <string>

#include "distribution.h"
#include "equations.h"
#include "event.h"
#include <vector>

std::string GetUserString(const std::string& prompt);
double GetUserDouble(const std::string& prompt);
int GetUserInt(const std::string& prompt);
void DisplayOptions() {
    std::cout << "1. Create event" << std::endl;
    std::cout << "2. Assign probability to event" << std::endl;
}

int main() {
    std::vector<Event> eventList;
    std::cout << "Please choose a number option from the list below" << std::endl;
    DisplayOptions();
    std::string userString = GetUserString("Put option here: ");
    if (userString == "1") {
        std::string eventName = GetUserString("Please name the event to something identifiable: ");
        double eventProbability = GetUserDouble("Please assign a probability to the event");
        new Event (eventProbability, eventName);
    } else if (userString == "2") {
        
    }
    return 0;
}

std::string GetUserString(const std::string& prompt) {
    std::string userAnswer = "none";
    std::cout << prompt;
    std::getline(std::cin, userAnswer);
    std::cout << std::endl;
    return userAnswer;
};
double GetUserDouble(const std::string& prompt) {
    double userAnswer = 0.0;

    std::cout << prompt;
    std::cin >> userAnswer;
    std::cin.ignore();
    std::cout << std::endl;
    return userAnswer;
};
int GetUserInt(const std::string& prompt) {
    int userAnswer = 0;

    std::cout << prompt;
    std::cin >> userAnswer;
    std::cin.ignore();
    std::cout << std::endl;
    return userAnswer;
}