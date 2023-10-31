#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(){
char *name; //Pointer
pid_t pid = fork();

if(pid == 0){
printf("child:%d started\n",getpid());
printf("child: parent = %d\n",getppid());
printf("child: is going to sleep");
sleep(20);
printf("child: Just Woke Up!!");
}
else if(pid > 0 ){
printf("parent:%d started \n",getpid());
printf("parent: parent = %d\n", getppid());
}
else{
perror("fork error");
}

//Ternary operator
name = (pid == 0)? "child" : "parent";
printf("%s: terminating...\n",name);

return 0;
}
