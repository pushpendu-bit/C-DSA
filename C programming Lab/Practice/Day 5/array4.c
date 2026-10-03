#include<stdio.h>
#include<stdlib.h>

#define MAX 100
int stack[MAX];
int top = -1;

void push(char x){
    stack[++top] = x;
}
void pop(){
    return stack[top--];
}

int precedence(char x){
    if(x == '+' || x == '-'){
        return 1;
    }
    if(x == '*' || x == '/'){
        return 2;
    }
    if(x == '^'){
        return 3;
    }
    return 0;
}


int main(){
    char infix[MAX], postfix[MAX];
    int i,j = 0;
}