#include<stdio.h>
/**
 * Author: Ahsanul Karim Tanim
 * ID: E221013
 * Experiment-3
 * Experiment Task:  Write a C program to Delete an element from an Array.
 * Github: github.com/tanim494
*/
void main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];    //creating a array of the size that user want
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d-no element: ",i+1);
        scanf("%d",&array[i]);  //running a loop for inserting elements in array
    }
    printf("Array before changing:  ");
    for (int j = 0; j < size; j++)
    {
        printf("%d  ",array[j]);    //printing array before changing
    }
    printf("\nWhich element you want to delete:");
    int d;
    scanf("%d",&d);
    for (int k = d - 1; k < size - 1; k++)
    {
        array[k] = array[k+1];  //deleting the element that user wants
    }
    size--; //as we're deleteing 1 element, so we're decreasing the array size by 1
    printf("Array after changing: ");
    for (int l = 0; l < size - 1; l++)
    {
        printf("%d  ",array[l]);    //printing the array after deleting
    }
    
}
