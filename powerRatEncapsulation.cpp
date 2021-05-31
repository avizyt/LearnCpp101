#include <cstdio>


void powerUpRatThing(int nuclear_isotopes){
    static int rat_things_power = 200;
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto waste_heat = rat_things_power * 20;
    if (waste_heat > 10000){
        printf("Warning! Hot doggie!\n");
    }
    printf("Rat-thing power: %d\n", rat_things_power);
}

int main()
{
    // we can not access rat_things_power static variable beacuse now it 
    // is not the global variable, it is local.
    powerUpRatThing(100);
    powerUpRatThing(500);
}
