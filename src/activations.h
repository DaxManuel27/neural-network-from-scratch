#ifndef ACTIVATIONS_H
#define ACTIVATIONS_H

#include "matrix.h"

typedef enum {
    ACTIVATION_RELU,
    ACTIVATION_SIGMOID,
    ACTIVATION_TANH,
    ACTIVATION_SOFTMAX
} ActivationType;

void apply_activation(Matrix *m, ActivationType type);
Matrix* activation_derivative(Matrix *m, ActivationType type);


#endif
