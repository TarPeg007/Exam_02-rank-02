#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;
    if (argc == 3)
    {
        while(argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                j++;
            i++;
        }
        if (argv[1][i] == '\0')
            write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
}