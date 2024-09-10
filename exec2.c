#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t q;
printf("hello! it is before fork\n\n");
printf("PID=%d\n",getpid());
q=fork();
if (q<0)
{
printf("error");
}
else
if(q==0)
{
printf("i am child,having pid %d\n",getpid());
printf("\n cell hello.c from child process\n");
char*args[]={"./hello",NULL};
execv(args[0],args);
printf("\n coming back to child process\n");
}
else 
{
printf(" i am parent\n");
printf("my child's pid is %d\n",q);
}
printf("good bye!\n");
return 0;
}

