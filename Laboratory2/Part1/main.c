#include <unistd.h>
#include <stdio.h>
int main()
{
    int pid = fork();
    if(pid == -1){
        perror("fork");
        exit(1);
    }
    if (pid != 0)
        printf("Parent: Gavrilov %d\n", getpid());
    else
        printf("Child: Andrei I993 %d\n", getpid());
    sleep(20);
    return 0;
}
