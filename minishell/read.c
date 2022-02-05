
#ifndef READLINE_LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <fcntl.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <limits.h>
#endif

void    pwd_implement()
{
    FILE *fd;
    char prompt[PATH_MAX];
    if (getcwd(prompt,sizeof(prompt)) == NULL)
        printf("Error");
    else
        printf("%s\n",prompt);
        fd = fopen ("test.txt","w+");
        //fclose(fd);
}
void export(char *env[])
{
    int i =0 ;
    while (env[i])
    {
         printf("\n%s", env[i]);
         i++;
    }
}
void echo_print()
{
    printf();
}
void echo_param()
{
    
}
// 
int main(int ac, char **av, char *env[])
{
    char buf[1000];
    while (1)
    {
        write(1,"$>",2);
        read(0, buf, 1000);
        printf("buf is %s",buf);
        if (strcmp(buf,"pwd\n") == 0)
        {
            write(1,"in pwd\n",7);
            sleep(1);
            pwd_implement();
            continue;
        }
        if (strcmp(buf, "export\n") == 0)
        {
            // write(1,"in export\n", 10);
            // sleep(1);
            export(env);
            continue;
        }
    }
    return (0);
}
