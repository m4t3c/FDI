#if !defined MATRIX_H

#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t M, N;
    double* data;
};

extern struct matrix *mat_sommadiretta(const struct matrix *a, const struct matrix *b);

#endif /*MATRIX_H*/