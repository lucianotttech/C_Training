/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*****************/
/*   Libraries   */
/*****************/
#include <stdio.h>
#include <unistd.h>


/**********************/
/*   State Machines   */
/**********************/
#include "state_machine.h"


/********************/
/*   Main Program   */
/********************/
int main()
{
    printf("Main: Init \n");
    
    // Initialize all state machines
    InitializeFSM();
    
    // Infinite loop
    while(1)
    {
        // Update all state machines
        UpdateFSM();
        
        /* This delay here is for learning purposes only */
        /* In a real condition, a 1ms interrupt must be implemented
        and used to decrease a counter variable */
        usleep(1000);   // 1 ms
    }
    
    printf("Main: End \n");

    return 0;
}
