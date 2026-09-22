// 1,#enqueue fron rear;
// 2,#dequeue from front;
// 3,#dequeue from rear;
// 4,#peak front elelment;
// 5,#peak rear element;
// 6,#display
// 7,#exit;

#include <stdio.h>
#define size 50
int main()
{
    int dequeue[size], choice, value, i;
    int front = -1, rear = -1;

    printf("Enter the choice");
    printf("1,enqueue from rear");
    printf("2,dequeue from front");
    printf("3,dequeue from rear");
    printf("4,peak front element");
    printf("5,peak rear element");
    printf("6,display");
    printf("7,exit");

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
                front == 0;
                rear++;
            }
            dequeue[rear] = value;
        }
        goto start;
    }

    if (choice == 2)
    {
        if (front == -1 && rear == -1)
        {
            printf("under flow");
        }
        else
        {
            if (front == rear)
            {
                printf("%d deleted,dequeue[front]");
                front = -1;
                rear = -1;
            }
            else
            {
                printf("%d deleted", dequeue[front]);
                front++;
            }
            goto start;
        }
    }

    if (choice == 3)
    {
        if (front == -1 && rear == -1)
        {
            printf("undre flow");
        }
        else
        {
            if (front == rear)
            {
                printf("%d deleted", dequeue[rear]);
                front = -1;
                rear = -1;
            }
            else
            {
                printf("%d deleted", dequeue[rear]);
                rear--;
            }
            goto start;
        }
    }

    if (choice == 4)
    {
        if (front == -1 && rear == -1)
        {
            printf("Empty queue");
        }
        else
        {
            printf("peak front element=%d", dequeue[front]);
        }
        goto start;
    }

    if (choice == 5)
    {
        if (front == -1 && rear == -1)
        {
            printf("Empty queue");
        }
        else
        {
            printf("peak raer elelment=%d", dequeue[rear]);
        }
        goto start;
    }

    if (choice == 6)
    {
        if (front == -1 && rear == -1)
        {
            printf("Empty");
        }
        else
        {
            if (i = front ; i <= rear ; i++)
            {
                printf("%d", & [i]);
            }
            goto start;
        }
    }

    if (choice == 7)
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
