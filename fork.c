#include <stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
	pid_t q;
	printf("hello!it is before fork\n\n");
	printf("pid=%d\n",getpid());
	q=fork();
if(q<0)
{
	printf("error");
}
else
{
if(q==0)
{
printf("i am child,having pid%d\n",getpid());
printf("\ncall hello.c from child process\n");
char*agrs[]={"./ hello",NULL};
execv(agrs[0],agrs);
printf("\n coming back to child process\n");
}
else
{
printf("my child's pid is %d\n",q);
}
printf("goodbye!\n");
return 0;
}
}
