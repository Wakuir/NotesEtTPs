#ifndef TRAITEMENT_H_ 
#define TRAITEMENT_H_

#include <pgmio.h>

extern void pgm_solid(pgm_t_image *image, pgm_t_pixel color);
extern void pgm_negative(pgm_t_image *image);
extern void pgm_threshold(pgm_t_image *image, unsigned char threshold);
extern void pgm_gradient(pgm_t_image *image);

#endif /* TRAITEMENT_H_ */