# include <stdio.h>

int stack[STACK_MAX_SIZE];
int top=-1;

void push (int x){
    if(top==STACK_MAX_SIZE-1){
        printf("%d\n",stack overflow);
    }
    else{
        stack[++top]=x;
        printf("inserted");
        
    }

void pop(){
    if(top==-1){
        printf("underflow");
    else{
        printf("popped element =%d",stack[top--]);
    }
void display{
    if(top==-1){
        printf("stack empty");
    else{
        printf("the elemnts are"){
            for(i=top;i>=0;i--){
                printf("%d", stack[i]);
            }
            printf("\n");
        }
    }
    }
}
    }
}
    }
