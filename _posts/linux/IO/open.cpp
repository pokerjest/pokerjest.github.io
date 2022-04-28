#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(void)
{
    int fd = open("hello.in", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR);
    printf("hello\n");

    return 0;
}