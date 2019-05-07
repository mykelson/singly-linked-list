#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}
sllnode;

sllnode *sllist;

sllnode* create(int n);
int search(int n, sllnode* list);
sllnode* insert(sllnode* list, int n);
void destroy(sllnode* list);

int main(void)
{

    sllnode* nnode1 = create(8);
    nnode1 = insert(nnode1, 7);
    nnode1 = insert(nnode1, 2);
    nnode1 = insert(nnode1, 1);
    nnode1 = insert(nnode1, 6);
    
    sllist = nnode1;

    printf("%i\n", search(1, sllist));
    
    
}

sllnode* create(int n)
{
    sllnode* head = malloc(sizeof(sllnode));
    if (head != NULL)
    {
        head->val = n;
        head->next = NULL;    
    }
    return head;
}

sllnode* insert(sllnode* list, int n)
{
    sllnode* nnode = malloc(sizeof(sllnode));
    if (nnode != NULL);
    {
        nnode->val = n;
        nnode->next = list;
    }
    return nnode;
}

int search(int n, sllnode* list)
{
    sllnode *ptr = list;
    while(ptr != NULL)
    {
        if (ptr->val ==n)
        {
            return 10;
        }
        ptr = ptr->next;
    }   
    return 3;
}

void destroy(sllnode* list)
{
    if ( list->next != NULL)
    {
        destroy(list->next);
    }
    free(list);
    
}