//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_global_array() {
    printf("Running global array\n");

    //define a struct
struct KeyValue{
    char key;
    int value;
};

//create static array of structs
static struct KeyValue StaticArray[10];
    
int main() {
    for (int i=0; i <= 10; ++i) {
       struct KeyValue newValue ={"a", 0};
       StaticArray[i] = newValue;
    }

    for(int x =0; x <= 10; x++){
        printf("Here are your numbers %d\n", StaticArray[x].value);
        printf("Here are you characters %d\n", StaticArray[x].key);
    }

    return 0;
}
}
