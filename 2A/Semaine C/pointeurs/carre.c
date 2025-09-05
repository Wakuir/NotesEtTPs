#include <stdio.h>

int carre_copie(const int n) {
    return n *n;
}

void carre_adresse(int *n) {
    *n = *n * *n;
}

int main() {
    int n = 3;

    printf("Avant appel carre_copie(n), n = %d\n", n);
    carre_copie(n);
    printf("Après appel carre_copie(n), n = %d\n", n);

    printf("Avant appel carre_adresse(n), n = %d\n", n);
    carre_adresse(&n);
    printf("Après appel carre_adresse(n), n = %d\n", n);
}