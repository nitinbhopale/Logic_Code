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

void InsertFirst(PPNODE Head, int No)
{
    // Step 1 : Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // Step 2 : Initialise the node
    newn->Data = No;
    newn->next = NULL;

    // Step 3 : Check Whether Linked List is empty or not 
    if(*Head == NULL) // Linked List is empty
    {
        *Head = newn;
    }
    else    // Linked List contain atleast 1 node in it
    {
        newn -> next = *Head; 
        *Head = newn;
    } 
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->Data);
        Head = Head -> next;
    }
    printf("Null \n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
        
    }
    return iCnt;    
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51); // Insert first (60,51);
    InsertFirst(&First, 21); // Insert first (60,21);
    InsertFirst(&First, 11); // Insert first (60,11);
    
    Display(First); 
    iRet = Count(First);

    printf("Number of Nodes are : %d\n",iRet);
    return 0;
}