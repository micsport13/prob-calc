#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H
#include <climits>
#include <cmath>
class Distribution {
   public:
    Distribution(long lowerInput = INT64_MIN, long upperInput = INT_MAX, std::string name = "default");  // Fill in equation class
   private:
    int lowerSupport;
    int upperSupport;
    std::string distributionName;
};

const double pi = 3.1415926;
double DistributionCalc(Event& event) {
    if (event.GetEventDistName() == "Normal") {
        // return (1 / sqrt(2 * pi)) * exp((-1 / 2) * ((x -\mu) / sigma) ^ 2);  FIXME
        return 0.0;
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
#endif