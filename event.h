#ifndef EVENT_H
#define EVENT_H
class Event {
   public:
    Event(double probability = 0, std::string name = "default", std::string dist_name = NULL) {
        if (probability <= 1 && probability >= 0) {
            eventProbability = probability;
        } else {
            do{
            std::cout << "Probability must be between 0 and 1.  Set the probability in the options menu as it has been set to 0 by default" << std::endl;
            std::cout << "Please assign a probability to the event: ";
            std::cin >> probability;
            } while (probability < 0 || probability > 1);
            eventProbability = probability;
        }
    }
    void SetEventName(Event& event) {
        std::string name;
        std::cout << "Please enter new name: " << std::endl;
        std::cin >> name;
        eventName = name;
    };
    void SetEventProbability(Event& event) {
        double eventProbability;
        std::cout << "Please enter a probability: ";
        std::cin >> eventProbability;
        event.eventProbability = eventProbability;
    }
    void SetEventDistName(Event& event) {
        std::string distName;
        std::cout << "Please enter a probability: ";
        std::cin >> eventProbability;
        event.eventDistName = distName;
    }
    double GetEventProbability(){
        return eventProbability;
    }
    std::string GetEventName(){
        return eventName;
    }
    std::string GetEventDistName(){
        return eventDistName;
    }
   private:
    double eventProbability;
    std::string eventName;
    std::string eventDistName;
};
#endif