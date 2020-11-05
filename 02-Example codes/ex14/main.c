/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node * rNode;
    struct node * lNode;
} node_t;

void surfTreeInc(node_t * parent)
{
    if(parent->lNode != NULL)
    {
        surfTreeInc(parent->lNode);
    }
    
    printf("At: %p - Value: %d \r\n", parent, parent->number);

    if(parent->rNode != NULL)
    {
        surfTreeInc(parent->rNode);
    }
    
    return;
}

node_t * createNode(uint8_t number)
{
    node_t * nodeAux;
    nodeAux = (node_t*) malloc(sizeof(node_t));
    
    nodeAux->number = number;
    nodeAux->rNode = NULL;
    nodeAux->lNode = NULL;
    
    return nodeAux;
}

void insertNode(node_t * parent, uint8_t number)
{
    if(parent->number <= number)
    {
        if(parent->rNode == NULL)
        {
            parent->rNode = createNode(number);
        }
        else
        {
            insertNode(parent->rNode, number);
        }
    }
    else
    {
        if(parent->lNode == NULL)
        {
            parent->lNode = createNode(number);
        }
        else
        {
            insertNode(parent->lNode, number);
        }
    }
    
    return;
}

int main()
{
    node_t * root = NULL;
    int key;
    int running = 1;
    
    while(running)
    {
        printf("\r\n1 - NEW VALUE\r\n2 - SHOW ALL\r\n3 - EXIT\r\nOption: ");

        if(scanf("%d", &key) == 1)
        {
            switch(key)
            {
                case 1: // New value
                    printf("INSERT NEW VALUE: ");
                    scanf("%d", &key);
                    if(root == NULL)
                    {
                        root = createNode(key);
                    }
                    else
                    {
                        insertNode(root, key);
                    }
                    break;
                    
                case 2: // Show All
                    if(root != NULL)
                    {
                        surfTreeInc(root);
                    }
                    else
                    {
                        printf("The tree is empty \r\n");
                    }
                    break;
                    
                case 3: // Exit
                    running = 0;
                    break;
                
                default:
                    printf("It is not a valid number! \r\n");
                    break;
            }
        }
        else
        {
            printf("It is not a number! \r\n");
            running = 0;
        }
    }
    
    /*
    
    Note: Here is missing the release of the memory used!
    When the program ends, you must move over each node and run "free(node);"
    
    */
    
    printf("--- End ---");
    
    return 0;
}
