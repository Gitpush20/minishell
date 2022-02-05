#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void p()
{
    char bf[3];

    printf("%d\n", getpid());
    read(1, bf, 1);
    printf("->%s\n", bf);
}

void *c()
{
    sleep(1);
    write(1, "sc", 2);
    return (NULL);
}

int main()
{
    pthread_t t;

    pthread_create(&t, NULL,c,NULL);
    pthread_detach(t);
    p();
    return 0;
}
