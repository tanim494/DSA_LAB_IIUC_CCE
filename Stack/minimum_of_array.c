#include<stdio.h>
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
