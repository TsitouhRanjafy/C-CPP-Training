#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main(void){


    char c = 'o';
    bool boolean;

    boolean = isalnum(c);

    printf("%d",boolean);
    return EXIT_SUCCESS;
}


/**
 * 
int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
 */