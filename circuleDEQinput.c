1, Enqueue rear 2, enqueue front 3, dequeue front 4, peak front 5, display 6, exit

#include <stdio.h>
#define size 50
    int main()
{
    int front = -1, rear = -1;
    int cequeue[size], choice, value, i;

    printf("1,Enqueue rear");
    printf("2,Enqueue front");
    printf("3,Dequeue front");
    printf("4,peak front");
    printf("5,display");
    printf("6,exit");

    printf("Enter your choice");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (front == 0 && rear == size - 1)
        {
            printf("over flow");
        }
        else
        {
            printf("Enter the value of insert");
            scanf("%d", &value);

            if (front == -1 && rear == -1)
            {
                front = 0;
            }
            rear = (rear) % size;
            cequeue[rear] = value;
        }
        goto start;
    }

    if (choice == 2)
    {
        if (front == 0 && rear == size - 1)
        {
            printf("over flow");
        }
        else
        {
            printf("Enter the value of insert");
            scanf("%d", &value);
            if (front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
            }
            else if (front == 0)
            {
                front = size - 1;
            }
            else
            {
                front--;
                cequeue[front] = value;
            }
            goto start;
        }
    }

    if (choice == 3)
    {
        if (front == -1 && rear == -1)
        {
            printf("under flow");
        }
        else if (front == rear)
        {
            printf("%d deleted", cequeue[front]);
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            printf("%d deleted", cequeue[front]);
            front = 0;
        }
        else
        {
            printf("%d deleted", cequeue[front]);
            front = (front) % size;
        }
        goto start;
    }

    if (choice == 4)
    {
        if (front == -1 && rear == -1)
        {
            printf("Empty cequeue");
        }
        else
        {
            printf("peak front element=%d", cequeue[front]);
        }
        goto start;
    }

    if (choice == 5)
    {
        if (front == -1 && rear == -1)
        {
            printf("Empty");
        }
        else
        {
            for (i = front; i <= rear; i++)
            {
                printf("%d", &i);
            }
            goto start;
        }
    }

    if (choice == 6)
    {
 
    return 0;
    }
else
{
    printf("viled element");
}
goto start;

return 0;
}
