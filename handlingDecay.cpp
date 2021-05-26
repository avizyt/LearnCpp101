#include <cstdio>

struct College {
    char name[256];
};

void print_name(College* clg, size_t n_clg) {
  for (size_t i = 0; i < n_clg; ++i) {
    printf("%s College\n", clg[i].name);
  }
}

int main()
{
  College oxford[]{"Magdalen", "Nuffield", "kellogg"};
  print_name(oxford, sizeof(oxford) / sizeof(College));
}
