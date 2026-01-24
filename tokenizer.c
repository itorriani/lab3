#include <stdio.h> 
#include <string.h> 

#define CONTENT_SIZE 1000

int main(int argc, char *argv[1]) // fileName, 
{   
    char contents[CONTENT_SIZE]; //leave plenty of room for contents of a file

    while (fgets(contents, CONTENT_SIZE, stdin) != NULL) // read until the last line (when it's null)
    {
        contents[strcspn(contents, "\r\n")] = '\0'; // clean up content for new characters

        char *linePtr = strtok(contents, " \t\r\n\v\f"); // create a pointer to a tokenized version of each line

        while (linePtr != NULL)
        {
            printf("%s \n", *linePtr); // print each word in the line

            strtok(NULL, " \t\r\n\v\f");

        }

    }

    return 0; //return from function


}   