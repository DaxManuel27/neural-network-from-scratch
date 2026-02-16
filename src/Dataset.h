#ifndef DATASET_H
#define DATASET_H

typedef struct {
    Matrix ** examples;
    int * labels;
    int count
}Dataset;

Dataset * dataset_create(int count, int inpu_size);
void dataset_free(Dataset * dataset);

#endif