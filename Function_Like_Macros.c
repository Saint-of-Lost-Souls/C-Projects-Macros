#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 100 // Preprocessor macro
#define CALC_ARRAY_LEN(x) (sizeof((x)) / sizeof((x[0]))) // Function-like macro
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // If a is greater than b, we evaluate a, else evaluate b
// Best practice to put all parameters in ()

int main()
{
    system("cls");

    double array[ARRAY_LEN];

    printf("Array length: %d\n", ARRAY_LEN);

// Evaulated in the preprocessor step, before compilation
#undef ARRAY_LEN      // Removing the previous definition for ARRAY_LEN
#define ARRAY_LEN 999 // Redefining ARRAY_LEN

    printf("New array length: %d\n", ARRAY_LEN);

    // Predefined C Macros
    printf("File name of this program is: %s\n",__FILE__);
    printf("Line number is: %d\n",__LINE__);
    printf("Program Compilation Date: %s\n",__DATE__);
    printf("Time of compilation is: %s\n",__TIME__);
    
    // int array_len = sizeof(array) / sizeof(array[0]);
    int array_len = CALC_ARRAY_LEN(array);
    printf("Sizeof array: %d\n", array_len);

    int a = -1, b = 5;
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b));
    int b_before = b;
    printf("MAX(%d, %d): %d\n", a, b_before, MAX(a, b++));
    printf("b before increment: %d\n", b_before);
    printf("b after increment: %d\n", b);

    printf("\n\n");
    return EXIT_SUCCESS;
}
