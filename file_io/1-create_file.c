#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;

    if (filename == NULL)
    {
        return (-1);
    }

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
        bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);

    return (1);
}
