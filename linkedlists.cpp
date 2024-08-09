#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    
    struct node* nxtptr;
};
typedef struct node Node;
int size(struct node* sptr){
    int j=0;
    while(sptr!=NULL){
        j++,sptr=sptr->nxtptr;
    }
    return j;
}
void rev(struct node**sptr){
    if(size(*sptr)>1){
        struct node* store=(*sptr)->nxtptr;
        (*sptr)->nxtptr=NULL;
        struct node* prevptr=*sptr;
        struct node* currptr=store;
        while(currptr!=NULL){
            store=currptr->nxtptr;
            currptr->nxtptr=prevptr;
            prevptr=currptr;
            currptr=store;
        }
        *sptr=prevptr;

    }
    printf("The Reversed Linked List is : ");
    
}
void insert (struct node**sptr,int value){//here we are giving double pointer as we have to modify *sptr
    struct node* prevptr=NULL;
    struct node* currptr=*sptr;//prev ptr and currptr takes the value of adresses so they can change the value
    struct node *newptr=(struct node*)malloc(sizeof(Node));//here don't forget to cast
    if(newptr==NULL)printf("NULL");//if there is no memory remained to allocate
    newptr->data=value;
    while(currptr!=NULL&&value>currptr->data){
        prevptr=currptr;
        currptr=currptr->nxtptr;
    }
    if(prevptr==NULL){
        *sptr=newptr;
        newptr->nxtptr=currptr;
    }
    else{
        prevptr->nxtptr=newptr;
        newptr->nxtptr=currptr;
    }

}
int empty(struct node* sptr){
    if(sptr==NULL)return 0;
    else return 1;
}
void print(struct node* startptr){
    while(startptr!=NULL){
        printf("%d->",startptr->data);
        startptr=startptr->nxtptr;// don't forget to change the start pointer else you will get an infinite loop you can also use ctrl+c after clicking terminal to stop the loop
    }
    printf("NULL");
}
int delee(struct node**sptr,int value){
    if((*sptr)->data==value){
        struct node* temp=*sptr;
        *sptr=(*sptr)->nxtptr;
        free(temp);
        return 1;
    }
    else{
        struct node*currptr=*sptr;
        struct node* prevptr=NULL;
        while(currptr!=NULL&&currptr->data!=value){
            prevptr=currptr;
            currptr=currptr->nxtptr;
        }
        if(currptr==NULL)return 0;
        else{struct node* temp=currptr;
            prevptr->nxtptr=currptr->nxtptr;
            free(temp);
        }return 1;
    }
}
int main(){
    struct node* startptr=NULL;
    printf("1 for to insert\n2 for delete\n3 for reversing linked list\nany other choice for terminate\n");
    int choice;
    printf("Enter the choice value ");
    scanf("%d",&choice);
    while(choice==1||choice==2||choice==3){
        int value;
        if(choice==1){
            printf("enter the value ");
        scanf("%d",&value);
        insert(&startptr,value);}
        else if(choice==2){printf("enter the value ");
        scanf("%d",&value);
            if(empty(startptr)){int re=delee(&startptr,value);
                if(re==0)printf("No such value exist");
                else printf("value:%d is deleted\n",value);
            }
        }
        else {
            rev(&startptr);
        }
        print(startptr);printf("\n");
        printf("Enter the choice value ");
        scanf("%d",&choice);
    }printf("Ok,Done");
    
}