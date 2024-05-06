#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid1, pid2;

    /* create first child process */
    pid1 = fork();

    if (pid1 < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }
    else if (pid1 == 0) { /* first child process */
        printf("I am the first child, my pid is %d\n", getpid());
    }
    else { /* parent process */
        /* create second child process */
        pid2 = fork();

        if (pid2 < 0) { /* error occurred */
            fprintf(stderr, "Fork Failed\n");
            return 1;
        }
        else if (pid2 == 0) { /* second child process */
            printf("I am the second child, my pid is %d\n", getpid());
        }
        else { /* parent process */
            printf("I am the parent, my pid is %d\n", getpid());
        }
    }

    return 0;
}