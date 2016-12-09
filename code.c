#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
srand(time(NULL));
int x = rand()%100;
printf("%d",x);
}