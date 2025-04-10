#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int rn=(rand()%100)+1;
    int nog=0;
    int gn;

    do
    {
        printf("guess the no");
        scanf("%d",&gn);
        if(gn>rn)
        printf("lower no please");
        else if (gn<rn)
        printf("higher no please");
        else
        printf("great");

        nog++;
        
    } while (gn!=rn);
    printf("you guessed the no. in %d guesses",nog);
    return 0;
    
}