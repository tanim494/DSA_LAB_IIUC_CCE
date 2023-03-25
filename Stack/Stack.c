#include<stdio.h>
#include<stdbool.h>
#define MAX 100;
int items[100];
int top = -1;

bool is_full() {
    return top == MAX - 1;
}
bool is_empty() {
    return top < 0;
}

void push(int item){
    if (is_full()){
        printf("Stack is full");
        return;
    }
    top++;
    items[top] = item;
}
int pop() {
    if (is_empty()) {
        printf("Stack is empty");
        return -1;
    }
    int item = items[top];
    top--;
    return item;
}
void peek() {
    if(top > -1) {
        printf("%d",items[top]);
    }
}
void print_stack() {
    if(is_empty()) {
        printf("Stack is empty");
        return;
    }
    for (int i = 0; i <= top; i++) {
        printf("|%d|\n", items[i]);
    }
}

int main()
{
    
    push(2);
    push(3);
    push(5);
    push(32);
    push(45);
    pop();
    print_stack();
    return 0;
}
