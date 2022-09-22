#ifndef EVENT_H
#define EVENT_H
class Event {
   public:
    Event(double probability = 0, std::string name = "default");
    void SetEventName(Event& event) {
        std::string name;
        std::cout << "Please enter new name: " << std::endl;
        std::cin >> name;
        event.eventName = name;
    };
    void SetEventProbability(double probability) {
        try {
            if (probability <= 1 && probability >= 0) {
                eventProbability = probability;
            } else {
                throw(probability);
            }
        }
            catch (double probability) {
            std::cout << "The probability must be between 0 and 1" << std::endl;
            return;
        }
    }

   private:
    double eventProbability;
    std::string eventName;
};
#endif