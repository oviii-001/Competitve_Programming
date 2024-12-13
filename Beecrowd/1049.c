#include <stdio.h>
#include <string.h>

int main() {
  char cat1[50];
  char cat2[50];
  char cat3[50];

  scanf("%s %s %s", cat1, cat2, cat3);

  if (strcmp(cat1, "vertebrado") == 0) {
    if (strcmp(cat2, "ave") == 0) {
      if (strcmp(cat3, "carnivoro") == 0) {
        printf("aguia\n");
      } else if (strcmp(cat3, "onivoro") == 0) {
        printf("pomba\n");
      }
    } else if (strcmp(cat2, "mamifero") == 0) {
      if (strcmp(cat3, "onivoro") == 0) {
        printf("homem\n");
      } else if (strcmp(cat3, "herbivoro") == 0) {
        printf("vaca\n");
      }
    }
  }
  if (strcmp(cat1, "invertebrado") == 0) {
    if (strcmp(cat2, "inseto") == 0) {
      if (strcmp(cat3, "hematofago") == 0) {
        printf("pulga\n");
      } else if (strcmp(cat3, "herbivoro") == 0) {
        printf("lagarta\n");
      }
    } else if (strcmp(cat2, "anelideo") == 0) {
      if (strcmp(cat3, "hematofago") == 0) {
        printf("sanguessuga\n");
      } else if (strcmp(cat3, "onivoro") == 0) {
        printf("minhoca\n");
      }
    }
  }

  return 0;
}
