#include<stdio.h>
#include<stdlib.h>
int hanoi(int disks, char fromTower, char supportTower, char targetTower){
    if(disks == 0){
        return;
    }
    else{
        hanoi(disks-1, fromTower, targetTower, supportTower);
        printf("Moving from tower %c to tower %c\n", fromTower, targetTower);
        hanoi(disks-1, supportTower, fromTower, targetTower);
    }
}

int main(){

    printf("Moving 4 disks on hanoi tower:\n");
    hanoi(4, 'A', 'B', 'C');
}