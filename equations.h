#ifndef EQUATIONS_H
#define EQUATIONS_H
class Equation {
   public:
    Equation(std::string name = "default equation", int num = 0);

   private:
    std::string equationName;
    int numParams;
};
#endif