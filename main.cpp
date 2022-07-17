#include <iostream>

class Calculator
{
public:
    double i, j;
    int add()
    {
        return i+j;
    }
    int subtract()
    {
        return i-j;
    }
    int multiply()
    {
        return i*j;
    }
    int divide()
    {
        return i/j;
    }
};


int main() {
    std::cout << "hello world!" << std::endl;
    Calculator myCalc;
    myCalc.i = 4;
    myCalc.j = 3;
    std::cout << myCalc.add() << std::endl;
    std::cout << myCalc.subtract() << std::endl;
    std::cout << myCalc.multiply() << std::endl;
    std::cout << myCalc.divide() << std::endl;
}