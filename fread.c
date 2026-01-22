#include <stdio.h>;

char *fread(char* fileName, int bytes)
{
    FILE *file; // set up file

    int contents[bytes]; //set up space with the designated amount

    file = fopen(fileName, "rb"); // open the file in read

    fread(contents, sizeof(int), bytes, file);

    for (int i = 0; i < 5; i++)
    {
        //do something
        
    }




}