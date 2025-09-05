#include <naivepgmio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pgm_show(char *filename) {
    size_t cmdSize = strlen("okular ") + strlen(filename);
    char cmd[cmdSize];
    sprintf(cmd, "okular %s", filename);
    system(cmd);
}

pgm_t_pixel *pgm_malloc(int width, int height) {
    return (pgm_t_pixel *) malloc(width * height * sizeof(pgm_t_pixel));
}

void pgm_solid(pgm_t_pixel *pixels, int width, int height, pgm_t_pixel color) {
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            pixels[y * width + x] = color;
        }
    }
}

void pgm_negative(pgm_t_pixel *pixels, int width, int height) {
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            long int index = y * width + x;
            pixels[index] = 255 - pixels[index];
        }
    }
}

void pgm_threshold(pgm_t_pixel *pixels, int width, int height, unsigned char threshold) {
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            long int index = y * width + x;
            pixels[index] = (pixels[index] >= threshold ? 255 : 0);
        }
    }
}

void pgm_gradient(pgm_t_pixel *pixels, int width, int height) {
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            long int index = y * width + x;
            pixels[index] = ((float) x) / width * 255;
        }
    }
}

int main(void) {
    size_t width = 500, height = 400;

    pgm_t_pixel *pixels = pgm_malloc(width, height);
    pgm_gradient(pixels, width, height);
    pgm_naivewrite("gradient.pgm", pixels, width, height);
    pgm_show("gradient.pgm");

    return EXIT_SUCCESS;
}