/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
    int number;
    void * nextNode;
} node_t;

node_t * findLast(node_t *parent)
{
    if(parent->nextNode == NULL)
    {
        return parent;
    }
    else
    {
        return findLast(parent->nextNode);
    }
}

node_t * findNumber(node_t *parent, int number)
{
    if(parent->number == number)
    {
        return parent;
    }
    else
    {
        if(parent->nextNode != NULL)
        {
            return findNumber(parent->nextNode, number);
        }
        else
        {
            // Value not found
            return NULL;
        }
    }
}

node_t * createNode(uint8_t number)
{
    node_t * nodeAux;
    nodeAux = (node_t *) malloc(sizeof(node_t));
    
    nodeAux->number = number;
    nodeAux->nextNode = NULL;
    
    return nodeAux;
}

void printItem(node_t * node)
{
    printf("At: %p - Value: %d \r\n", node, node->number);
    
    return;
}

int main()
{
    node_t * root = NULL;
    int key;
    int running = 1;

    while(running)
    {
        printf("\r\n1 - NEW VALUE\r\n2 - SEARCH\r\n3 - SHOW ALL\r\n4 - EXIT\r\nOption: ");
        
        if(scanf("%d", &key) == 1)
        {
            switch(key)
            {
                case 1: // New Value
                    printf("INSERT NEW VALUE: ");
                    scanf("%d", &key);
                    if(root == NULL)
                    {
                        root = createNode(key);
                    }
                    else
                    {
                        findLast(root)->nextNode = createNode(key);
                    }
                    break;
                    
                case 2: // Search
                    printf("INSERT NUMBER TO FIND: ");
                    scanf("%d", &key);
                    if(root != NULL)
                    {
                        node_t * myNode = findNumber(root, key);
                        if(myNode != NULL)
                        {
                            printItem(myNode);
                        }
                        else
                        {
                            printf("Value not found \r\n");
                        }
                    }
                    else
                    {
                        // The list is empty
                        printf("Value not found \r\n");
                    }
                    break;
                    
                case 3: // Show All
                    if(root != NULL)
                    {
                        for(node_t * myNode = root ; myNode != NULL ; myNode = myNode->nextNode)
                        {
                            printItem(myNode);
                        }
                    }
                    else
                    {
                        printf("The list is empty \r\n");
                    }
                    break;
                    
                case 4: // Exit
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
