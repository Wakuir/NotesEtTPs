#include <stdio.h>
#include <stdlib.h>

int **pascal_malloc(int profondeur) {
    int **triangle = malloc(sizeof(int *) * (profondeur + 1));
    for (int i = 0; i <= profondeur; i++) {
        triangle[i] = malloc(sizeof(int) * (i + 1));
    }

    return triangle;
}

void pascal_free(int **triangle, const int profondeur) {
    if (triangle != NULL) {
        for (int i = 0; i < profondeur; i++) {
            free(triangle[i]);
        }
    }

    free(triangle);
    triangle = NULL;
}

void pascal_fill(int **triangle, const int profondeur) {
    for (int i = 0; i <= profondeur; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }
}

int main(const int argc, const char *argv[]) {
    // Il faut préciser la profondeur de la ligne à afficher
    if (argc == 2) {
        const int profondeur = atoi(argv[1]);
        int **triangle = pascal_malloc(profondeur);

        pascal_fill(triangle, profondeur);

        for (int i = 0; i <= profondeur; i++) {
            if (i == 0) {
                printf("a^%d + ", profondeur);
            } else if (i < profondeur) {
                printf("%d.a^%d.b^%d + ", triangle[profondeur][i], profondeur - i, i);
            } else {
                printf("b^%d", profondeur);
            }
        }
        printf("\n");

        pascal_free(triangle, profondeur);
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}
