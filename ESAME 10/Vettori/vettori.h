#if !defined VETTORI_H

#define VETTORI_H

#include <stdlib.h>
#include <stdio.h>

struct vettore {
    unsigned char size;
    double* data;
};

extern int vettore_leggi(FILE* f, struct vettore* v);

#endif /*VETTORI_H*/