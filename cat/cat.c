/*
** EPITECH PROJECT, 2019
** prep.c	
** File description:
** prep
*/

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
        i++;
    return 1;
}

int main(int argc, char *argv[])
{
    int i;
    int fd;
    int ch;
    char buffer[32];

    if (argc == 1) {
        while ((ch = read(0, buffer, 31)) > 0) {
          write(1, buffer, ch);
         }
    }
    for (i = 1; i < argc; i++) {
        fd = open(argv[i], O_RDONLY);
        if (fd < 0) {

            write(1, "cat: ", 5);
            write(1, argv[i], my_strlen(argv[i]));
            write(1, ": No such file or directory\n", 28);
            continue;
        }
        while ((ch = read(fd, buffer, 31)) > 0)
            write(STDOUT_FILENO, buffer, ch);
        close(fd);
    }
}
