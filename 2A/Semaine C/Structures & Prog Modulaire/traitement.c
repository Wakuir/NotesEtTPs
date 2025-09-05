#define SEUIL_PIXEL(valeur, seuil) (valeur < seuil ? 0 : 255)
#define DEBUG 0

#if DEBUG
// instructions vues par le compilateur lorsque DEBUG ≠ 0
#define AFFICHER_FONCTION() printf("Traitement d'image par : %s\n", __func__)
#else
// instructions vues par le compilateur lorsque DEBUG vaut 0
#define AFFICHER_FONCTION()
#endif

#include "traitement.h"
#include <pgmio.h>
#include <stdio.h>

void pgm_solid(pgm_t_image *image, pgm_t_pixel color) {
    AFFICHER_FONCTION();
    for (size_t y = 0; y < image->height; y++)
    {
        for (size_t x = 0; x < image->width; x++)
        {
            image->pixels[y * image->width + x] = color;
        }
    }
}

void pgm_negative(pgm_t_image *image) {
    AFFICHER_FONCTION();
    for (size_t y = 0; y < image->height; y++)
    {
        for (size_t x = 0; x < image->width; x++)
        {
            long int index = y * image->width + x;
            image->pixels[index] = 255 - image->pixels[index];
        }
    }
}

void pgm_threshold(pgm_t_image *image, unsigned char threshold) {
    AFFICHER_FONCTION();
    for (size_t y = 0; y < image->height; y++)
    {
        for (size_t x = 0; x < image->width; x++)
        {
            long int index = y * image->width + x;
            image->pixels[index] = SEUIL_PIXEL(image->pixels[index], threshold);
        }
    }
}

void pgm_gradient(pgm_t_image *image) {
    AFFICHER_FONCTION();
    for (size_t y = 0; y < image->height; y++)
    {
        for (size_t x = 0; x < image->width; x++)
        {
            long int index = y * image->width + x;
            image->pixels[index] = ((float) x) / image->width * 255;
        }
    }
}