#include<stdio.h>

int main(){
    int data[5] = {10, 30, 60, 50, 40};
    for(int i =0 ; i < 5; i ++){
        printf("\t%d",*(data + i ));
    }
    int temp = 4[data];
    4[data] = 0[data] ;
    0[data] = temp; 
    printf("\n");
    for(int i =0 ; i < 5; i ++){
        printf("\t%d",*(data + i ));
    } 
    int size = sizeof("Hello World");
    printf("\nSize of String : %d",size);

    return 0;
}