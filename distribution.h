#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H
#include <climits>
class Distribution {
   public:
    Distribution(long lowerInput = INT64_MIN, long upperInput = INT_MAX, std::string name = "default");  // Fill in equation class
   private:
    int lowerSupport;
    int upperSupport;
    std::string distributionName;
};
#endif