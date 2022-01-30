#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#define N 10000

int total=0;
sem_t s;


void * thread_function(void * arg);

int main(int argc,char * argv[])
{
    pthread_t id, id2;
    sem_init(&s,0,1);
    pthread_create(&id,NULL,thread_function,NULL);
    pthread_create(&id2,NULL,thread_function,NULL);
    pthread_join(id,NULL);
    pthread_join(id2,NULL);

printf("%d\n",total);

    if(total==2*N)
    {
        printf(" OK ");
    }
    else{
        printf(" ERROR ");
    }

    return 0;
}
void * thread_function(void *arg)
{
    int i;
    for(i = 0;i < N; i++)
    {
        sem_wait(&s);
        total++;
        sem_post(&s);

    }

}
