#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i;
    int nbr;
    if (argc == 2)
    {
        i = 1;
        nbr = atoi(argv[1]);
        if (nbr == 1)
            printf("1");
        while(++i <= nbr)
        {
            if (nbr % i == 0)
            {
                printf("%d",i);
                if (nbr == i)
                    break;
                printf("*");
                nbr/=i;
                i = 1;
            }
        }
        //return(0);
    }
    printf("\n");
}