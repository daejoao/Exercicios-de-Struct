#include <stdio.h>
#include "struct.c"
#include <string.h>

// gcc main.c -o main
// ./main

int main(){
    Data data = newData();
    
    showDia(data);
    showMes(data);
    showAno(data);


    showData(data);

    return 0;
}