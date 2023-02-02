#include<stdio.h>
/**
 * Author: Ahsanul Karim Tanim
 * ID: E221013
 * Experiment-2
 * Experiment Task:  Write a C program to Insert an element in an Array.
 * Github: github.com/tanim494
*/
int main()
{   
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);      //asking user for the array size
    int array [size];
    for (int i = 0; i < size; i++) {
        printf("Enter Element no-%d: ",i+1);
        scanf("%d",&array[i]);      //adding element to the array
    }
    printf("Array Before Changing: ");      //this will print the previous array before changing
    for (int j = 0; j < size; j++) {
        printf("%d\t", array[j]);
    }
    int extra;
    printf("\nHow many elements you want to add in the array?:");
    scanf("%d",&extra);     //asking user how many element they want to add in the array
    extra += size;      //increasing size of the array
    for (int k = size; k < extra; k++) {
        printf("Enter Element no-%d: ",k+1);
        scanf("%d",&array[k]);      //adding elements to the previous array
    }
    printf("Array after adding element: ");
     for (int m = 0; m < extra; m++) {
        printf("%d\t", array[m]);       //printng the new array after adding
    }
}
