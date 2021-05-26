#include <cstdio>

struct College {
    char name[256];
};

void print_name(College* clg_ptr){
    printf("%s\n", clg_ptr->name);
}

int main()
{
    College best_clg[] = {"IIT Bombay","Jadavpure", "Presidency College Kolkata","Culcutta University"};
    print_name(best_clg);
}
