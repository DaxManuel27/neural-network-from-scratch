#ifndef LOSS_H
#define LOSS_H

#include "matrix.h"

typedef enum {
    LOSS_CROSS_ENTROPY,
    LOSS_MSE
}LossType;

float calculate_loss(Matrix *predictions, int true_label, LossType type);
Matrix* loss_gradient(Matrix *predictions, int true_label, LossType type);

#endif