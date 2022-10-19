#include <stdio.h>

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
//call by value
int main(){
    int x = 10;
    int y = 11;
    printf("Values before swap: x = %d, y = %d\n", x,y);
    swap(x,y);
    printf("Values after swap: x = %d, y = %d", x,y);
}

#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//call by reference
int main(){
    int x = 10;
    int y = 11;
    printf("Values before swap: x = %d, y = %d\n", x,y);
    swap(&x,&y);
    printf("Values after swap: x = %d, y = %d", x,y);
}
