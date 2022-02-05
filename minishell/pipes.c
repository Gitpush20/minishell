
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <fcntl.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <limits.h>
int main()
{
    int id ,i = 0;
    
    while ( i < 3)
    {
        id = fork();
        printf("new process");
        if (id == 0)
            printf("do something");
        i++;
    }

    return (0);
}