#include <unistd.h>

void fizz_buzz(int nb)
{
    char digit[] = "0123456789";
    if (nb >= 10)
        fizz_buzz(nb / 10);
    write(1,&digit[nb % 10],1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1,"fizzbuzz",8);
        else if (i % 3 == 0)
            write(1,"fizz",4);
        else if(i % 5 == 0)
            write(1,"buzz",4);
        else
            fizz_buzz(i);
            write(1,"\n",1);
        i+=1;
    }
    return(0);
}