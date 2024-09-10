#include<stdio.h>
#include<unistd.h>
int main()
{
printf(" i am in exec_demo.c");
printf("PID of exec_demo.c is %d\n",getpid());
char *args[]={"./ hello",NULL};
execv(args[0],args);
printf("coming back to exec_demo.c");
return 0;
}
