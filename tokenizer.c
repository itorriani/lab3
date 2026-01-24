#include <stdio.h> 
#include <string.h> 

#define CONTENT_SIZE 1000

int main(int argc, char *argv[1]) // fileName, 
{   
    char contents[CONTENT_SIZE]; //leave plenty of room for contents of a file

    FILE *file = fopen(argv[1], "r"); //read the file

    while (fgets(contents, CONTENT_SIZE, file) != NULL) // read until the last line (when it's null)
    {
        contents[strcspn(contents, "\r\n")] = '\0'; // clean up content for new characters

        char *linePtr = strtok(contents, " "); // create a pointer to a tokenized version of each line

        while (linePtr != NULL)
        {
            printf("%s \n", *linePtr);



        }


    }


}   