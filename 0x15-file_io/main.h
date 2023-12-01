#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  /* For size_t */
#include <unistd.h>

int _putchar(char c);

/* File-related functions */
int open_file(const char *filename, int flags);
int close_file(int fd);
ssize_t read_file(int fd, void *buf, size_t count);
ssize_t write_file(int fd, const void *buf, size_t count);

/* Text file-related functions */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */

