#include<stdio.h>
/**
 * Author: Ahsanul Karim Tanim
 * ID: E221013
 * Experiment
 * Experiment Task: Write a C program to Find MINIMUM element in Array.
 * Github: github.com/tanim494
*/
int main()
{   
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int stack [size];
    for (int i = 0; i < size; i++) {
        printf("Enter Element no-%d: ",i+1);
        scanf("%d",&stack[i]);
    }
    int minimum = stack[0];
    for (int j = 0; j < size; j++)
    {
        if (minimum>stack[j])
        {
            minimum = stack[j];
        }
        
    }
    printf("The minimum element of this array is: %d",minimum);
    
}
