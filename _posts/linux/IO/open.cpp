#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(void)
{
    int fd = open("hello.in", 
    O_RDWR|O_CREAT|O_TRUNC|O_SYNC|O_NONBLOCK, S_IRUSR|S_IWUSR);
    printf("hello\n");

    return 0;
}