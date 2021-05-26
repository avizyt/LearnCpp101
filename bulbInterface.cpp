#include <iostream>

class BulbInterface
{
    public:
        virtual void turnOn() = 0;
        virtual void turnOff() = 0;
        virtual bool isOnFun() = 0;
};

// implements BuldInterface
class Bulb:public BulbInterface
{
    private:
        // Instance Variables
        bool isOn;
    public:
        // Constructor
        Bulb();

        // Instance Method
        virtual void turnOn();

        // Instance Method
        virtual void turnOff();

        // Instance Method
        virtual bool isOnFun();
};

int main()
{
    Bulb b;
    std::cout << "bulb is on return: "<< b.isOnFun() << std::endl;
    b.turnOn();
    std::cout <<"bulb is on return:" << b.isOnFun() << std::endl;
    return 0;
}
