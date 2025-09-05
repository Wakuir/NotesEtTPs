#include "allocation.h"
#include <pgmio.h>
#include <stdlib.h>

pgm_t_image *pgm_malloc(size_t width, size_t height) {
    pgm_t_image *image = malloc(sizeof(pgm_t_image));

    (*image).pixels = malloc(width * height * sizeof(pgm_t_pixel));
    (*image).width = width;
    (*image).height = height;
    
    return image;
}

void pgm_free(pgm_t_image *image) {
    free((*image).pixels);
    free(image);
}