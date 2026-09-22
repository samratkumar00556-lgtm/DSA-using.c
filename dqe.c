// 1#enqueue from rear;
// 2#enqueue form front;
// 3#dequeue from rear;
// 4#dequeue from front;
// 5#peak rear element;
// 6#peak front element;
// 7#display;
// 8#exit;

#include <stdio.h>
#define size 50

int main()
{
    int dequeue[size], choice, value, i;
    int front = -1, rear = -1;

    printf("Emter the choice");
    printf("1,enqueue from rear");
    printf("2,enqueue from front");
    printf("3,dequeue from rear");
    printf("4,dequeue from front");
    printf("5,peak rear element");
    printf("6,peak front element");
    printf("7, display");
    printf("8,Exit");

    scanf("%d", &choice);

    if (choice == 1)
    {
        if (front == 0 && rear == size - 1)
        {
            printf("over flow");
        }
        else
        {
            if (rear == size - 1)
            {
                printf("false over flow");
            }
            else
            {
                printf("Enter the value of insert");
                scanf("%d", &value);
            }
            if (front == -1 && rear == -1)
            {
                front = 0;
            }
            rear--;
            dequeue[rear]=value;
        }
            goto start;
    }

    if (choice == 2)
    {
        if(front=0 && rear==size-1){
            printf("over flow");
        }
        else{
            if(front==size-1){
                printf("false over flow");
            }
            else{
                printf("Enter the value of insert");
                scanf("%d",&value);
            }
            if(front==-1 && rear==-1){
                rear=0;
            }
            front++;
            dequeue[front]=value;
        }
        goto start;
    }

    if(choice==3){
        if(front==-1 && rear==-1){
            printf("under flow");
        }
        else{
            if(front==rear){
                printf("%d deleted",dequeue[rear]);
                front=-1;
                rear=-1;
            }
            else{
                printf("%d deleted",dequeue[rear]);
                rear--;
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
                 printf("%d deleted",dequeue[front]);
                front=-1;
                rear=-1;
            }
            else{
                 printf("%d deleted",dequeue[front]);
                 front++;
            }
            goto start;
        }
    }

    if(choice==5){
        if(front==-1 && rear==-1){
            printf("Empty queue");
        }
        else{
            printf("peak rear element=%d",dequeue[rear]);
        }
        goto start;
    }

    if(choice==6){
        if(front==-1 && rear==-1){
            printf("empty queue");
        }
        else{
           printf("peak front element=%d",dequeue[front]);
        }
        goto start;
    }

    if(choice==7){
        if(front==-1 && rear==-1){
            printf("Empty");
        }
        else{
            for(i=front; i<=rear; i++){
                printf("%d",dequeue[i]);
            }
        }
        goto start;
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


