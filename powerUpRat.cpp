#include <cstdio>

static int rat_things_power = 200;

void powerUpRatThing(int nuclear_isotopes){
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto waste_heat = rat_things_power * 20;
    if (waste_heat > 10000){
        printf("Warning! Hot doggie!\n");
    }
}

int main()
{
    printf("Rat-thing power: %d\n", rat_things_power);
    powerUpRatThing(100);
    printf("Rat-thing power: %d\n", rat_things_power);
    powerUpRatThing(500);
    printf("Rat-thing power: %d\n", rat_things_power);
}
