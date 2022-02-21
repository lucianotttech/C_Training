/*****************/
/*   Libraries   */
/*****************/
#include <stdio.h>
#include <stdint.h>

/****************/
/*   Constant   */
/****************/

#define STATE_1_TIME 500  /* 0.5 s */
#define STATE_2_TIME 2000 /*   2 s */
#define STATE_3_TIME 5000 /*   5 s */

// List all available states
typedef enum
{
    STATE_INITIAL = 0,
    STATE_1,
    STATE_2,
    STATE_3,
    STATE_MAX,
} state_t;

/*****************/
/*   Variables   */
/*****************/
static struct
{
    state_t currentState;
    uint32_t counterState;
} this;

/***************************/
/*   Function prototypes   */
/***************************/
void InitializeFSM(void);
void UpdateFSM(void);
