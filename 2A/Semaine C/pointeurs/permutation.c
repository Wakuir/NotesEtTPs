#include <stdio.h>

void permuter(int *adr_a, int* adr_b) {
    const int temp = *adr_a;
    *adr_a = *adr_b;
    *adr_b = temp;
}

int main() {
    int a = 5;
    int b = 7;

    printf("Avant permutation : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    permuter(&a, &b);

    printf("Après permutation : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
