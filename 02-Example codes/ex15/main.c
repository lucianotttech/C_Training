/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <pthread.h>
#include <unistd.h>

void *myThread(void *vargp)
{
    printf("Printing from Thread: %x \n", *(uint8_t *)vargp);
    sleep(1);
    *(uint8_t *)vargp = 0;

    return NULL;
}

int main()
{
    pthread_t thread_id;
    uint8_t x = 2;

    pthread_create(&thread_id, NULL, myThread, &x);
    pthread_join(thread_id, NULL);
    printf("After Joined Thread: %x \n", x);

    x = 3;
    pthread_create(&thread_id, NULL, myThread, &x);
    pthread_detach(thread_id);
    printf("After Detached Thread: %x \n", x);

    sleep(2);
    printf("After 2 seconds: %x \n", x);

    return 0;
}
