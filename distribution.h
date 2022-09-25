#pragma once
#include <climits>
#include <math.h>
#include "event.h"
class Distribution {
   public:
    Distribution(long lowerInput = INT64_MIN, long upperInput = INT_MAX, std::string name = "default");  // Fill in equation class
   private:
    int lowerSupport;
    int upperSupport;
    std::string distributionName;
};

const double pi = 3.1415926;
const double e = 2.71828;
double DistributionCalc(Event& event) {
    if (event.GetEventDistName() == "Normal") {
        double mean = 0.0;
        double sigma = 0.0;
        double desiredValue = 0.0;
        std::cout << "Please enter the mean: ";
        std::cin >> mean;
        std::cout << "Please enter the standard deviation: ";
        std::cin >> sigma;
        std::cout << "Please enter the desired value to calculate: ";
        std::cin >> desiredValue;
        return (1 / (sigma * sqrt(2 * pi))) * std::pow(e,-.5) * std::pow((desiredValue - mean) / sigma, 2);
    } else if (event.GetEventDistName() == "Beta") {
        // Insert Beta PDF here
        return 0.0;
    } else if (event.GetEventDistName() == "Gamma") {
        // Insert Gamma PDF here
        return 0.0;
    } else if (event.GetEventDistName() == "Poisson") {
        // Insert Poisson PDF here
        return 0.0;
    } else if (event.GetEventDistName() == "Exponential") {
        // Insert Exponential PDF here
        return 0.0;
    } else if (event.GetEventDistName()== "Uniform"){
        // Insert Uniform PDF here
        return 0.0;
    } else{
        std::cout << "Distribution not detected.  Please ensure that the distribution is correct for your variables." << std::endl;
        return 0.0;
    }
}