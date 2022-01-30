#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#define N 10000

int total=0;
pthread_mutex_t mutex= PTHREAD_MUTEX_INITIALIZER;

void * thread_function(void * arg);

int main(int argc,char * argv[])
{
    pthread_t id, id2;

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
        pthread_mutex_lock(&mutex);
        total++;
        pthread_mutex_unlock(&mutex);
    }
}