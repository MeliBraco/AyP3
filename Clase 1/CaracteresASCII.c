#include <stdio.h>

//ASCII

int main()
{
     for(int i = 0; i<128; i++){

        printf("%03d %c \n", i, i);
    }

    return 0;
}

int main()
{
    for(int i = 0; i<128; i++){

        printf("%c \n", i);
    }

    return 0;
}