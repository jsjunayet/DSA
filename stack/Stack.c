#include<stdio.h>
#include<stdlib.h>
#define Max 10
int Stack[Max];
int top = -1;
void Push(int value){
    if(top == Max-1){
        printf("overflow", value);
    }else{
        Stack[++top] = value;
        printf("succefull add %d .\n", value);
    }
}
int pop(){
    if(top == -1){
        printf("underflow");
    }else{
        int pops = Stack[top--];
        printf("sccefull deleted %d .\n", pops);
        return pops;
    }
}

int main (){
    int choice, value;
    while (1)
    {
        printf("1. push \n");
        printf("2. Pop \n");
        printf("3. exit \n");
        printf("enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        printf("enter your value push : ");
        scanf("%d", &value);
        Push(value);
        break;
        case 2:
        pop(value);
        break;
        case 3:
        exit(0);
        
        default:
            printf("invalid choice");
        }
    }
    
    
}


