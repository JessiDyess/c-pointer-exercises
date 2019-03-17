//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>

void run_array_of_pointers() {
    printf("Running array of pointers\n");

  //define a struct
struct KeyValue{
    char key;
    int value;
};

//create array
void declareArr(){
    struct KeyValue **array;
    *array = (struct KeyValue *)malloc(10 * sizeof (*array));
    array = malloc(sizeof(int *) * 10);

    for (int i=0; i <= 10; ++i) {
        struct KeyValue newValue ={"a", 0};
        array[i] = newValue;
    }
    free(array);

}

}
