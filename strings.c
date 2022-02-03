// CSC 250 Zwach - SP22
// Trevor Schlechter

#include <stdio.h>
#include <string.h>

int numofT(char str[]);
int vowels(char str[]);
int spaces(char str[]);
int newline(char str[]);
int specialc(char str[]);

int main()
{
//declare variables
    char str[240];
    int nl = 0;
    int sc = 0;

//read string from user
    printf("Enter a string:  ");
    fgets( str, sizeof(str), stdin);

//find and remove \n and \r
    nl = newline(str);

//find stats and print
    sc = specialc(str);

    printf("Stats for string ***%s***\n", str);
    printf("Length: %d\n", strlen(str) - 1);
    printf("T's: %d\n", numofT(str));
    printf("Vowels: %d\n", vowels(str));
    printf("Spaces: %d\n", spaces(str));
    
    if (nl >= 1) {
        printf("There was a newline\n");
    } else {
        printf("There was not a newline\n");
    }
    
    if (sc >= 1) {
        printf("There was a @, $, or !\n");
    } else {
        printf("There was not a @, $, or !\n");
    }

return 0;
}

int numofT(char str[]) {
    int T = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 't' || str[i] == 'T') {
            T++;
        }
    }

return T;
}

int vowels(char str[]) {
    int V = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            V++;
        }
    }
return V;
}

int spaces(char str[]) {
    int S = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            S++;
        }
    }

return S;
}

int newline(char str[]) {
    int N = 0;

    if (strchr(str, '\n') || strchr(str, '\r')) {
        N++;
    }

return N;
}

int specialc(char str[]) {
    int C = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '$' || str[i] == '@' || str[i] == '!')
        C++;
    }

return C;
}
