// C program to implement one side of FIFO
// This side writes first, then reads
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "common.h"

int main()
{
    char buffer[80];
    int fd = open("/tmp/queue", O_WRONLY);
    fgets(buffer, 80, stdin);
    write(fd, buffer, strlen(buffer)+1);
    close(fd);

    return 0;
}