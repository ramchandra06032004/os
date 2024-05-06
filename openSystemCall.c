#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd;

    fd = open("fcfs.c", O_RDONLY);
    if (fd == -1) {
        perror("Error opening the file");
        return 1;
    }else{
        printf("File opened successfully\n");
    
    }

    // You can now read from the file using the file descriptor 'fd'

    close(fd);  // Always remember to close the file when you're done

    return 0;
}