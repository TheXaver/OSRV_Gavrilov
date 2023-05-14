#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int x;
    srand(time(NULL));
    x = rand()%2+1;
    if(x==1)
    printf("Gavrilov Andrei I993\n");
    else printf("Eto mysor\n");
    return 0;
}
