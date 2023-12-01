#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10

int front=0, rear=0;
int arr[MAX_SIZE];

int addItem(int item) {
    arr[front++] = item;
    return 0;
}



void printArrReverse() {
    while (rear <= MAX_SIZE-1)
        rear++;
    for (int i = 0; i < rear; rear--) {
        printf("arr[%d] = %d\n", MAX_SIZE-rear, arr[rear-1]);

    }
}

int main() {
    
    addItem(1);
    addItem(2);
    addItem(3);
    addItem(4);
    addItem(5);
    addItem(6);
    addItem(7);
    addItem(8);
    addItem(9);
    addItem(10);
    printArrReverse();
    

    return 0;
}
