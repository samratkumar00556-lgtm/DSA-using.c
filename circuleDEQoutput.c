1,Enqueue rear
2,dequeue front
3,dequeue rear
4,peak front
5,peak rear
6, display
7, exit

#include <stdio.h>
#define size 50
int main(){
    int cequeue[size],choice,value,i;
    int front=-1,rear=-1;

    printf("1,Enqueue rear");
    printf("2,dequeue front");
    printf("3,dequeue rear");
    printf("4,peak front");
    printf("5,peak rear");
    printf("6, display");
    printf("7,exit");

    printf("Enter your choice");
    scanf("%d",&choice);

    if (choice==1){
        if(front==0 && rear ==size-1){
            printf("over flow");
        }
        else{
            printf("Enter the value of insert");
            scanf("%d",& value);
            if(front==-1 && rear==-1){
                front=0;
            }
            rear=(rear)%size;
            cequeue[rear]= value;

        }
        goto start;

    }

    if(choice==2){
        if(front==-1 && rear==-1){
            printf("under flow");
        }
        else{
            if(front==rear){
                printf("%d deleted",cequeue[front]);
                front=-1;
                rear=-1;
            }
            else if(front=size-1){
                printf("%d deleted",cequeue[front]);
                front=0;
            }
            else{
                printf("%d deleted",cequeue[front]);
                front=(front)% size;
            }
            goto start;
        }

    }


    if(choice==3){
        if(front==-1 && rear==-1){
            printf("under flow");
        }
        else{
            if(front==rear){
                printf("% deleted",cequeue[rear]);
                front=-1;
                rear=-1;
            }
            else if(rear==size-1){
                printf("%d deleted",cequeue[rear]);
                rear=0;
            }
            else{
                printf("%d deleted",cequeue[rear]);
                rear=(rear)% size;
            }
            goto start;
        }
    }

    if(choice==4){
        if(front==-1 && rear==-1){
            printf("empty cequeue");
        }
        else{
            printf("peak front element=%d",cequeue[front]);
        }
        goto start;
    }

    if(choice==5){
        if(front==-1 && rear==-1){
            printf("Empty cequeue");
        }
        else{
            printf("peak rear element",cequeue[rear]);
        }
        goto start;
    }

    if(choice==6){
        if(front==-1 && rear==-1){
            printf("empty");
        }
        else{
            for (i=front;i<=rear; i++){
                printf("%d",&i);
            }
            goto start;
         }
    }

    if(choice==7){
        return 0;
    }
    else{
        printf("viled element");
    }
    goto start;

    return 0;
}
