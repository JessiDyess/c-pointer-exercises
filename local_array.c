//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_local_array() {
    printf("Running local array\n");

   //define a struct
struct KeyValue{
    char key;
    int value;
}

//create static array of structs inside function
void declareArr(){
    static struct KeyValue StaticArray[10];
    for (int i=0; i <= 10; ++i) {
        struct KeyValue newValue ={"a", 0};
        StaticArray[i] = newValue;
    }
} 


}
