#include <stdio.h>
#include <stdlib.h>
typedef struct Stack{
    int top;
    int *a;
}stack;
void create_stack(stack **s){
*s=(stack*)(malloc(sizeof(stack)));
(*s)->top=-1;
(*s)->a=NULL;//(*s).top=-1; here () needed due to order of precedence of '.';
//I forgot to initialize array;
//without initialising the array and i am doing the realloc so behaviour is undefined;
}
void push(stack*s,int n){
    s->top++;
    s->a=realloc(s->a,(s->top + 1)*sizeof(int));
    // if(temp==NULL)printf("Sorry failed to allocate memory"),exit(1);
    //initially i used temp to realloc and again i forgot to re assign , s->a=temp
    // s->a=temp;
    (s->a)[s->top]=n;
}
int isempty(stack*s){
    if(s->top==-1)return 1;
    else return 0;
}
int pop(stack*s){if(isempty(s)){printf("stack underflow");
return -1;
}
    return s->a[s->top--];
}

int main(){
    stack *s;
    create_stack(&s);
    printf("stack created\n");
    int n=12345;
    printf("n is taken\n");
    push(s,n);
    printf("n is pushed\n");
    while(!isempty(s)){
        n=pop(s);
        printf("%d ,",n);
        if(n>=10)
        push(s,n%10),
        push(s,n/10);
        else printf("%d ",n);
    }
}/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int top;
    int *a;
} stack;

// Function to create and initialize the stack
void create_stack(stack **s) {
    *s = (stack *)malloc(sizeof(stack));
    if (*s == NULL) {
        printf("Failed to allocate memory for stack structure\n");
        exit(1);
    }
    (*s)->top = -1;
    (*s)->a = NULL;
}

// Function to push an element onto the stack
void push(stack *s, int n) {
    s->top++;
    int *temp = realloc(s->a, (s->top + 1) * sizeof(int));
    if (temp == NULL) {
        printf("Sorry, failed to allocate memory\n");
        exit(1);
    }
    s->a = temp;
    s->a[s->top] = n;
}

// Function to check if the stack is empty
int isempty(stack *s) {
    return s->top == -1;
}

// Function to pop an element from the stack
int pop(stack *s) {
    if (isempty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->a[s->top--];
}

int main() {
    stack *s;  // Declare a pointer to stack
    create_stack(&s);  // Pass the address of the pointer to the function
    printf("Stack created\n");

    int n = 12345;
    printf("n is taken\n");
    push(s, n);
    printf("n is pushed\n");

    while (!isempty(s)) {
        n = pop(s);
        if (n >= 10) {
            push(s, n % 10);
            push(s, n / 10);
        } else {
            printf("%d ", n);
        }
    }

    // free(s->a);  // Free the allocated memory for the array
    // free(s);     // Free the allocated memory for the stack structure

    return 0;
}*/
