/***************/
/*   Headers   */
/***************/
#include "state_machine.h"


/*****************/
/*   Functions   */
/*****************/

void InitializeFSM(void)
{
    // Set the initial state
    this.currentState = STATE_INITIAL;

    /* Set Outputs */
    printf("FSM:  Init \n");
    
    return;
}

void UpdateFSM(void)
{
    switch(this.currentState)
    {
        case STATE_INITIAL:
        {
            // Change the state
            this.currentState = STATE_1;
            
            // Update the timer counter
            this.counterState = STATE_1_TIME;

            /* Update the Output */
            printf("FSM:  State %d \n", STATE_1);
            
            break;
        }

        case STATE_1:
        {
            if(this.counterState > 0)    /* Stay in this state */
            {
                // Decrease the counter
                this.counterState --;

                /* Do here what corresponds to this state */
                /* ... */
            }
            else                    /* Change to the next State */
            {
                // Change the state
                this.currentState = STATE_2;
                
                // Update the timer counter
                this.counterState = STATE_2_TIME;
                
                /* Update the Output */
                printf("FSM:  State %d \n", STATE_2);
            }

            break;
        }

        case STATE_2:
        {
            if(this.counterState > 0)    /* Stay in this state */
            {
                // Decrease the counter
                this.counterState --;

                /* Do here what corresponds to this state */
                /* ... */
            }
            else                    /* Change to the next State */
            {
                // Change the state
                this.currentState = STATE_3;
                
                // Update the timer counter
                this.counterState = STATE_3_TIME;
                
                /* Update the Output */
                printf("FSM:  State %d \n", STATE_3);
            }

            break;
        }
        
        case STATE_3:
        {
            if(this.counterState > 0)    /* Stay in this state */
            {
                // Decrease the counter
                this.counterState --;

                /* Do here what corresponds to this state */
                /* ... */
            }
            else                    /* Change to the next State */
            {
                // Change the state
                this.currentState = STATE_1;
                
                // Update the timer counter
                this.counterState = STATE_1_TIME;
                
                /* Update the Output */
                printf("FSM:  State %d \n", STATE_1);
            }

            break;
        }

        default:
        case STATE_MAX:
        {
            // There was an error
            // Let's initialize everything
            InitializeFSM();
            
            break;
        }
    }
    
    return;
}
