#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#define N 10000
int total=0;
int turno;
void * mifuncion(void * arg);

int main(int argc,char * argv[])
{
    pthread_t id, id2;
    int ids[2];
    turno=0;
    ids[0] = 0;
    ids[1] = 1;
    pthread_create(&id,NULL,mifuncion,(void *)&ids[0]);
    pthread_create(&id2,NULL,mifuncion,(void *)&ids[1]);
    pthread_join(id,NULL);
    pthread_join(id2,NULL);
    printf("%d\n",total);
    printf("terminado",total);
    if(total==2*N)
    {
        printf(" OK ");
    }
    else{
        printf(" ERROR ");
    }
//printf("total = %d ",total);
    return 0;
}
void * mifuncion(void *arg)
{
    int id=*(int *)arg;
    int i;
    for(i = 0;i < N; i++)
    {
        while(turno!=id); //SE COMPRUEBA CONTINUAMENTE LA CONDICIÓN
        printf("%d\n",turno);
        total++;
        turno=1-turno;

    }
}