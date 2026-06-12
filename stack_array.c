#include<stdio.h>

#define CAPACITY 5

int stack[CAPACITY], top=-1;

void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();

int main()
{
    int ch,item;

    while(1)
    {
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.PEEK");
        printf("\n4.TRAVERSE");
        printf("\n5.EXIT");

        printf("\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d",&item);
                push(item);
                break;

            case 2:
                item=pop();

                if(item==-1)
                    printf("Stack Underflow\n");
                else
                    printf("Popped item: %d\n",item);

                break;

            case 3:
                peek();
                break;

            case 4:
                traverse();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}

void push(int ele)
{
    if(isFull())
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top]=ele;
        printf("%d pushed\n",ele);
    }
}

int pop()
{
    if(isEmpty())
        return -1;

    return stack[top--];
}

int isFull()
{
    return top==CAPACITY-1;
}

int isEmpty()
{
    return top==-1;
}

void peek()
{
    if(isEmpty())
        printf("Stack Empty\n");
    else
        printf("Top Element: %d\n",stack[top]);
}

void traverse()
{
    if(isEmpty())
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Stack Elements:\n");

        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
