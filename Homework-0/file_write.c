#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdlib.h>

int main(){
    int count;
    mode_t mode = S_IRUSR | S_IWUSR;
    close(1);
    int file = open("output.txt",O_CREAT | O_TRUNC | O_RDWR,mode);
    write(file,"Great\n",7);

    for(int count = 5; count; count--){
        write(STDOUT_FILENO,"Hello\n",6);
        write(STDERR_FILENO,".",1);
    }
    close(file);
    int file2 = open("",O_CREAT | O_TRUNC | O_RDWR,mode);
    if(file2 == -1){
        perror("open failed");
        exit(1);
    }
    write(file2,"Great\n",7);

    for(int count = 5; count; count--){
        write(STDOUT_FILENO,"Hello\n",6);
        write(STDERR_FILENO,".",1);
    }
    close(file2);

}


