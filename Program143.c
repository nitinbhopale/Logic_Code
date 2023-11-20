#include<stdio.h>
#include<stdlib.h>

// Structure Declaration
struct node
{
    int Data;                // 4 bytes
    struct node *next;       // 8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(struct node ** Head, int No)
{
    struct node * newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn->Data = No;
    newn->next = NULL;
    
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);


    return 0;
}