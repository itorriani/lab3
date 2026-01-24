#include <stdio.h> 
#include <stdlib.h>
#include <fcntl.h>   
#include <unistd.h>  


int main(char* fileName, char contents[], int bytes)
{
    int file = open(fileName, O_RDONLY); //open a file with read

    ssize_t bytes_read;

    while ((bytes_read=read(file, contents, bytes)) > 0) { }; // use read functionality 

    contents[bytes_read] = '\0'; // null terminate the contents

    close(file); // close file for memory leaking related issues

    return 0;
}