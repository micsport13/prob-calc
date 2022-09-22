#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H
class Distribution {
   public:
    Distribution(int lowerInput = INT64_MIN, int upperInput = INT64_MAX, std::string name = "default", Equation equation = Equation("default equation", 0));  // Fill in equation class
   private:
    int lowerSupport;
    int upperSupport;
    std::string distributionName;
    Equation distributionEquation;
};
#endif