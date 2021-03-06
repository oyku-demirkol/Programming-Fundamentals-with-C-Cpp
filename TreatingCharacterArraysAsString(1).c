//Treating character arrays as string
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

// function main begins program execution
int main()
{
    char string1[SIZE]; //reserves 20 characters
    char string2[] = "string literal";

    //read string from user into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1); //   gets(string1); gets function is better for strings and if you want all input than you should gets func. use
    //otherwise it(scanf) gives you nothing after space , and for scanf you should not & use.
   // Function scanf will read characters until a space, tab, newline or end-of-file indicator is encountered. 

    //output strings
    printf("string1 is: %s\nstring2 is: %s\n"
           "string1 with spaces between charachter is:\n",string1,string2);
     //output characters until null character is reached
     for(size_t i=0; i<SIZE && string1[i] != '\0'; ++i){  
         //space = '\0' The character constant representing the null character is '\0'. 
         //All strings in C end with this character!!! for exp. The preceding definition is equivalent to -> char string1[] = {'f','i', 'r', 's', 't','\0'};
        printf("%c ", string1[i]);
     }
     puts("");

    return 0;
}
