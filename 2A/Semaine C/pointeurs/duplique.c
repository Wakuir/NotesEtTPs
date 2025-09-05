#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

char *copier_chaine(const char *str) {
    const size_t nChar = strnlen(str, MAX_LEN) -1;
    char *copie = malloc(nChar * sizeof(char));
    strncpy(copie, str, nChar);
    return copie;
}

int main() {
    const char original[] = "Ma super chaine a copier";
    printf("Chaine originale : %s\n", original);
    char *copie = copier_chaine(original);  // copie à allouer dynamiquement
    printf("Chaine copiée : %s\n", copie);
    free(copie);
}
