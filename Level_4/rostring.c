#include <unistd.h>
void write_word(char *start,char *end)
{
    while(start < end)
    {
        write(1,start,1);
        start++;
    }
}

int main(int argc, char *argv[])

{
    int i = 0;
    if (argc > 1)
    {
        char *str;
        char *first_word_start;
        char *first_word_end;
        str = argv[1];
        while(*str == 32 || *str == 9)
            str++;
        first_word_start = str;
        while(*str && *str != 32 && *str != 9)
            str++;
        first_word_end = str;
        while(*str == 32 || *str == 9)
            str++;
        if (*str)
        {
            while(*str)
            {
                if (*str == 32 || *str == 9)
                {
                    while(*str == 32 || *str == 9)
                        str++;
                    if (*str)
                        write(1," ",1);
                }
                else
                {
                    write(1,str,1);
                    str++;
                }
            }
            write(1," ",1);
        }
        write_word(first_word_start,first_word_end);
    }
    write(1,"\n",1);
}
