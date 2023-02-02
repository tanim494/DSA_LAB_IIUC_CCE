#include<stdio.h>
/**
 * Author: Ahsanul Karim Tanim
 * ID: E221013
 * Experiment-1
 * Experiment Task: Write a C program to Find Maximum element in Array.
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
    int maximum = stack[0];
    int location;
    for (int j = 0; j < size; j++)
    {
        if (maximum<stack[j])
        {
            maximum = stack[j];
        }
       
    }
    printf("The maximum element of this array is: %d",maximum);
}
