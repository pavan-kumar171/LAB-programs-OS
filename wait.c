#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t q;
printf("Hello! IT is before fork\n\n");
printf("PID=%d\n",getpid());
q=fork();
if(q<0)
{
printf("error");
}
else 
if(q==0)
{
printf("i am child,having pid %d\n",getpid());
}
else
{
wait(NULL);
printf("I am Parent\n");
printf("My child's pid is %d\n",q);
}
printf("good bye\n");
return 0;
}
