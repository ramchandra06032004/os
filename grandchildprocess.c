#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid1, pid2;

    /* create parent process */
    pid1 = fork();

    if (pid1 < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }
    else if (pid1 == 0) { /* parent process */
        printf("I am the parent, my pid is %d and my parent pid is %d\n", getpid(), getppid());

        /* create child process */
        pid2 = fork();

        if (pid2 < 0) { /* error occurred */
            fprintf(stderr, "Fork Failed\n");
            return 1;
        }
        else if (pid2 == 0) { /* child process */
            printf("I am the child, my pid is %d and my parent pid is %d\n", getpid(), getppid());
        }
    }
    else { /* grandparent process */
        printf("I am the grandparent, my pid is %d\n", getpid());
    }

    return 0;
}