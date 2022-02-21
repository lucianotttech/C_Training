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

pthread_mutex_t lock;
int16_t MY_ACCOUNT = 10;

void *myThreadWithMutex(void *vargp)
{
    pthread_mutex_lock(&lock);
    // printf("%d %d\n",MY_ACCOUNT,*(int16_t *)vargp);

    if (*(int8_t *)vargp + MY_ACCOUNT >= 0)
    {
        sleep(1);
        MY_ACCOUNT += *(int16_t *)vargp;
    }
    else
    {
        printf("NOT POSSIBLE TO SUBSTRACT MORE THAN YOU HAVE \n");
    }

    pthread_mutex_unlock(&lock);

    return NULL;
}

void *myThread(void *vargp)
{
    if (*(int8_t *)vargp + MY_ACCOUNT >= 0)
    {
        sleep(1);
        MY_ACCOUNT += *(int16_t *)vargp;
    }
    else
    {
        printf("NOT POSSIBLE TO SUBSTRACT MORE THAN YOU HAVE\n");
    }

    return NULL;
}

int main()
{
    pthread_mutex_init(&lock, NULL);
    pthread_t thread_ida, thread_idb;
    int16_t x, y;

    x = -3;
    pthread_create(&thread_ida, NULL, myThread, &x);
    pthread_detach(thread_ida);
    // printf("After Thread: %d\n",MY_ACCOUNT);

    y = -8;
    pthread_create(&thread_idb, NULL, myThread, &y);
    pthread_detach(thread_idb);

    sleep(5);
    printf("After Thread: %d\n", MY_ACCOUNT);

    return 0;
}
