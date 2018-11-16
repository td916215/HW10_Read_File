#include <stdio.h>
#include <stdlib.h>

void readTxt(void);

int main()
{
    readTxt();

    return 0;
}

void readTxt()
{
    // define pointer and open txt file
    FILE *ptr;
    ptr = fopen("C:\\My Files\\Classes\\(18c) Fall Semester 2018\\Computer Programming\\Module 10 (This Week!)\\readMe.txt", "r");

    if (ptr == NULL) // file cannot be read
    {
        // report inability to read
        printf("Unable read this file.");
    }
    else // file can be read
    {
        // char variable to fill in with contents of file
        char text;

        printf("Contents:\n");

        // while fgetc is still outputting to text char - until end of file
        while ((text = fgetc(ptr)) != EOF)
        {
            // print each text char item as the contents of the file
            printf("%c", text);
        }

        fclose(ptr);
    }
}
