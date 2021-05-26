#include <cstdio>

struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if (new_year < 2019) return false;
        year = new_year;
        return year;
    }
    int get_year() {
        return year;
    }
    private:
    int year;
};
// The member-of-pointer operator or arrow operator(->) performs two
// simultaneous operation:
// 1) It dereferences a pointer.
// 2) It accesses a member of the pointed-to obejct.

int main()
{
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    clock_ptr->set_year(2020);
    printf("Address of clock: %p\n", clock_ptr);
    printf("Value of clock's year: %d", clock_ptr->get_year());
}
