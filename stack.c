#include<stdio.h>

#define MAX 5

int i=-1, input_array[MAX];
void push(int number){
    if (i==MAX-1){
        printf("Stack Overflow !! \n");
    }
    else{
        i+=1;
        input_array[i]=number;
    }
}

void pop(){
    if (i==-1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d is the poped one\n",input_array[i]);
        i-=1;
    }
}

void show(){
    if (i==-1){
        printf("Stack Empty\n");
    }
    for(int j=0;j<=i;j++){
        printf("%d ",input_array[j]);
    }
}



int main(){
    int opt = 0;
    while(opt!=4){
    printf("Choose option \n1. push\n2. pop\n3. show\n4. exit\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
            int value=0;
            printf("Enter the number : ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            break;
    }
    if(opt==4){
        break;
    }
    }
    return 0;
}