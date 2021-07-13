#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f1, *f2;
    if (argc != 3)
    {
        printf("Invalid number of arguements");
        return 1;
    }
    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "w");
    char ch;
    while (1)
    {
        ch = fgetc(f1);
        if (feof(f1))
            break;
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}