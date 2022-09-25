#pragma once
class Event {
   public:
    Event(double probability = 0.0, std::string name = std::string(), std::string dist_name = std::string()) {
        if (probability <= 1 && probability >= 0) {
            eventProbability = probability;
        } else {
            do {
                std::cout << "Probability must be between 0 and 1.  Set the probability in the options menu as it has been set to 0 by default" << std::endl;
                std::cout << "Please assign a probability to the event: ";
                std::cin >> probability;
            } while (probability < 0 || probability > 1);
            eventProbability = probability;
        }
        if (!dist_name.empty()){
            eventDistName = dist_name;
        }
        if (!name.empty()){
            eventName = name;
        }
    }
    void SetEventName() {
        std::cout << "Please enter new name: " << std::endl;
        std::cin >> eventName;
    };
    void SetEventProbability() {
        std::cout << "Please enter a probability: ";
        std::cin >> eventProbability;
    }
    void SetEventDistName() {
        std::cout << "Please enter a distribution: ";
        std::cin >> eventDistName;
    }
    double GetEventProbability() {
        return eventProbability;
    }
    std::string GetEventName() {
        return eventName;
    }
    std::string GetEventDistName() {
        return eventDistName;
    }

   private:
    double eventProbability;
    std::string eventName;
    std::string eventDistName;
};