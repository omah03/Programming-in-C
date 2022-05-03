#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) 
{
    int func;
    char buffer[1024];
/*Writes the file*/
    func = open("ubung1.txt", O_CREAT | O_WRONLY, 0600);

    if (func == -1)
    { 
        printf("Unable to create file 'ubung1.txt'\n");
        exit(1);
    }
write(func, "Omar&Anna:FirstBKSUbung!\n", 25);

close(func);

func = open("ubung1.txt", O_RDONLY);

if (func == -1)
    { 
        printf("Unable to read file 'ubung1.txt'\n");
        exit(1);
    }

read(func,buffer,25);
buffer[25] = '\0';

close(func);

printf("buffer :%s\n, buffer");

return 0;

}