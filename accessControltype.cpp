#include <cstdio>

class ClockOfTheLongNow {
    int year;
    public:
    void add_year() {
        year++;
    }
        bool set_year(int new_year){                // setter method.
            if (new_year < 2019) return false;
            year = new_year;
            return true;
        }
        int get_year() {                            // getter method.
            return year;
        }
    };
// Which way you declare classes is a matter of style. There is absolutely no
// difference between struct and class aside from the dfault access control.

int main()
{
    ClockOfTheLongNow clock;
    if(!clock.set_year(2018)){
        clock.set_year(2019);
    }
    clock.add_year();
    printf("year: %d\n", clock.get_year());
}
