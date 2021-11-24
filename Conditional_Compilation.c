#include <stdio.h>
#include <stdlib.h>

#define LOG_INFO
// #define BUFFER_SIZE 1024

int main()
{
    system("cls");

#ifdef SOME_MACRO
    printf("Some macro exists\n");
#endif

#ifdef LOG_INFO
    printf("This is some information\n");
#else
    printf("I shouldn't print anything!\n");
#endif

#if defined BUFFER_SIZE && BUFFER_SIZE > 2048
    printf("The buffer is huge, do something!\n");
#elif defined BUFFER_SIZE
    printf("The buffer is OK");
#else
    printf("You didn't define a buffer, smartypants\n");
#endif

    printf("\n\n");
    return EXIT_SUCCESS;
}
