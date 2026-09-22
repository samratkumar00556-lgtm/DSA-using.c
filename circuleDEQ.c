// 1,Enqueue from rear
// 2,Enqueue from front
// 3,dequque from rear
// 4,dequeue from front
// 5,peak front element
// 6,peak rear element
// 7,display
// 8,exit

#include<stdio.h>
#define size 50
int main (){
    int cequeue[size],choice,value,i;

    int front =-1, rear=-1;

    printf("1,Enqueue rear");
    printf("2,Enqueue front");
    printf("3,Dequeue front");
    printf("4,Dequeue rear");
    printf("5,peak front element");
    printf("6,peak rear element");
    printf("7,display");
    printf("8,exit");

    printf("Enter your choice");

    scanf("%d",& choice);

    if(chioce==1){
        if(front==0 && rear==size-1){
            printf("over flow");
        }
        else{
            printf("Enter the value of insert rear");
            scanf("%d",& value);

            if(front==-1 && rear==-1){
            front=0;
          }
          rear=(rear+1)%size;   
          
            cequeue[rear]= value;
          }
          goto start;
        
    }

    if(choice==2){
        if(front==0 && rear==size-1){
            printf(" overflow");
        }
        else{
            printf("enter the value of insert front");
            scanf("%d",& value);

            if(front==-1 && rear==-1){
                front=0;
                rear=0;
            }
            elae{
                if(front==0){
                    fronsize-1;
                }
                else{
                    front--;
                }
                cequeue[front]= value;
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
                printf("%d deleted",cequeue[front]);
                front=-1;
                rear=-1
            }
            else if (front=size-1){
            printf("%d deleted",cequeue[front]);
            front=0;
            }
            else{
                printf("%d deleted",cequeue[front]);
                front=(front+1)%size;
            }
            goto start;
        }
    }

    if(choice==4){
        if(front==-1 && rear==-1){
            printf("under flow");
        }
        else{
            if(front==rear){
                printf("%d deleted",cequeue[rear]);
                front=-1;
                rear=-1;
            }
            else if(rear==0){
                printf("%d deleted",cequeue[rear]);
                rear=(rear+1)% size;
            }
        else{
            printf("%d deleted",cequeue[rear]);
            rear--;
        }
        goto start;
        }

}

if (choice==5){
    if(front==-1 && rear==-1){
        printf("Empty cequeue");
    }
    else{
        printf("%d peak front element",cequeue[front]);
    }
    goto start;
}

if(choice==6){
    if(front==-1 && rear==-1){
        printf("undedr flow");
    }
    else{
        printf("%d deleted",cequeue[rear]);
    }
    goto start;
}

if(choice==7){
    if(front==-1 && rear==-1){
        printf("empty");
    }
    else{
        for (i=front;i<=rear;i++){
            printf("%d",&[i]);
        }
        goto start;
    }
}

if (choice==8){
    return 0;
    else{
    printf("viled value"):
}
goto sratr;
}
    return 0;
}