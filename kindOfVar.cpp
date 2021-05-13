class Bulb
{
    private:
        // Class var
        static int TotalBulbCount;
        // Instance Var
        bool isOn;
    public:
        // Constructor
        Bulb();

        // Class method
        static int getBulbCount();

        // Instance Method
        virtual void turnOn();

        // Instance Method
        virtual void turnOff();

        // Instance Method
        virtual bool isONFun();
};

Bulb::Bulb()
{
    isOn = false;
    TotalBulbCount++;
}

int Bulb::getBulbCount()
{
    return TotalBulbCount;
}

void Bulb::turnOn()
{
    isOn = true;
}

void Bulb::turnOff()
{
    isOn = false;
}

bool Bulb::isONFun()
{
    return isOn;
}

int main()
{
    std::cout << "This file describe class." << std::endl;
}
















