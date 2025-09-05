#include <pgmio.h>
#include "allocation.h"
#include "traitement.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void pgm_show(char *filename) {
    size_t cmdSize = strlen("okular ") + strlen(filename);
    char cmd[cmdSize];
    sprintf(cmd, "okular %s", filename);
    system(cmd);
}

int main(void) {
    size_t numIter = 10;

    clock_t startTime = clock();
    for (size_t i = 0; i < numIter; i++)
    {
        pgm_t_image *image = pgm_malloc(500, 400);

        pgm_solid(image, 155);

        pgm_free(image);    
    }

    clock_t endTime = clock();

    float avgNumClock = ((float) (endTime - startTime)) / numIter;

    printf("Temps d'exécution moyen : %f ticks, soit %fs\n", avgNumClock, avgNumClock / CLOCKS_PER_SEC);
    
    //pgm_show("solid.pgm");

    return EXIT_SUCCESS;
}