//Include required libaries
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
pid_t pid = fork(); //Create variable
if(pid == 0){
//Exit
exit(0);
}
else if(pid > 0){
sleep(5);
system("ps -e -o pid,ppid,stat,user,cmd | grep $USER");

}
else{
//Error
perror("fork error");
}


return 0;}
