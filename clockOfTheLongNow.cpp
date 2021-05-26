#include <cstdio>

struct ClockOfTheLongNow {    //Creating a class name ClockOfTheLongNow.
    void add_year() {         // creating a method for incrementing year.
        year++;
    }
    int year;                 // variable year.
};

int main()
{
    ClockOfTheLongNow clock;    // Instance of ClockOfTheLongNow is clock.
    clock.year = 2021;
    clock.add_year();           // using void method to incrementing year.
    printf("year: %d\n", clock.year);
    clock.add_year();
    printf("year: %d\n", clock.year);
}
