#include <unistd.h>

int main (){
    char buff[100];
    ssize_t n;
    write(STDOUT_FILENO,"enter input \n",14);
    n=read(STDIN_FILENO,buff,sizeof(buff));
    write(STDOUT_FILENO,buff,n);
    return 0;
}
