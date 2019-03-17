//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_monolithic_array() {
    printf("Running monolithic array\n");

   //define a struct
struct KeyValue{
    char key;
    int value;
};

//create and initialize dynamic array
void declareArr(){
    KeyValue *Array = malloc(10 * sizeof *Array);
    for (int i=0; i <= 10; ++i) {
        struct KeyValue newValue ={"a", 0};
        Array[i] = newValue;
    }
    free(Array);
    
}

}
