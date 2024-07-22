#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int top = -1, stack[SIZE];
void push();
void pop();
void show();
int min_index_arr[int arr[100],int n]{
    int minvalue = arr[0];
    int minindex = 0;
    int i = 0;
    while (i<n)
    {
        if (arr[i]<minvalue)
        {
            minindex = i;
            minvalue = arr[i];
        }
        i++;
    } 
}
int* survivedRobotsHealths(int* positions, int positionsSize, int* healths, int healthsSize, char * directions, int* returnSize){
    int i = 0;
}
int main()
{
    
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", stack[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
    }
}