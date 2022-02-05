/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:10:41 by mbel-bas          #+#    #+#             */
/*   Updated: 2022/02/02 12:51:40 by mbel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
/*my shell should follow 3 steps :

1.Command is entered and if length is non-null, keep it in history.

2.Parsing : Parsing is the breaking up of commands into individual words and strings

3.Checking for special characters like pipes, etc is done

4.Checking if built-in commands are asked for.

5.If pipes are present, handling pipes.

6.Executing system commands and libraries by forking a child and calling execvp.

7.Printing current directory name and asking for next input.*/

// void echo_impl(char *command, char *av)
// {
// 	// if (strcmp(command, "echo -n"))
// 	// {
		
// 	// }
		
// 	printf("%s",av);
// }
void ss_loop(int ac, char **av)
{
	while (1)
	{
		if (ac == 2)
			{
				if (strcmp("echo", av[2]) == 0 )
				{
					if (strcmp("-n", av[3]) == 0)
					{
						printf("echo -n %s", av[4]);
						exit(EXIT_SUCCESS);
					}
					else
						printf("echo %s",av[3]);
				}
					exit(EXIT_FAILURE);
			}
			else
				printf("WRONG ARGUMENTS");
}
int main(int ac, char **av)
{
	char s[100];
	int fd = open("myfile.txt",O_RDWR | O_CREAT, 0777);
	stat();
	printf("%s\n", getcwd(s, 100));
	chdir("/");
	printf("%s\n", getcwd(s, 100));
	dup2(fd,0);
	read(0,"myfile.txt",1);
	if (strcmp(av[1],"clear") == 0)
		printf("\033[H\033[J");
	if (strcmp(av[1],"echo") == 0)
		echo_impl(av[1], av[2]);
	else
		return (0);
	printf("HELLO WORLD\n");
	close(fd);
	ss_loop(ac , av);
	return(0);
}
int main (int argc, char **argv)
{
	while (1){
		int childPid;
		char * cmdLine;

	        printPrompt();

	        cmdLine= readCommandLine(); //or GNU readline("");
		
		cmd = parseCommand(cmdLine);

		record command in history list (GNU readline history ?)
 
		if ( isBuiltInCommand(cmd)){
		    executeBuiltInCommand(cmd);
		} else {		
		     childPid = fork();
		     if (childPid == 0){
			executeCommand(cmd); //calls execvp  
			
		     } else {
			if (isBackgroundJob(cmd)){
			        record in list of background jobs
			} else {
				waitpid (childPid);

			}		
		}
	}       
}