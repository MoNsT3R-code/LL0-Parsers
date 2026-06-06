
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char input[100];
int i = 0;

void E(); void E1(); void T(); void T1(); void F();

void match(char c){
    if(input[i]==c) i++;
    else { printf("Rejected\n"); exit(0); }
}

void F(){
    if(input[i]=='i'){
        printf("F->id\n");
        match('i');
    } else if(input[i]=='('){
        printf("F->(E)\n");
        match('(');
        E();
        match(')');
    } else { exit(0); }
}

void T1(){
    if(input[i]=='*'){
        printf("T'->*FT'\n");
        match('*');
        F();
        T1();
    } else printf("T'->ε\n");
}

void T(){
    printf("T->FT'\n");
    F();
    T1();
}

void E1(){
    if(input[i]=='+'){
        printf("E'->+TE'\n");
        match('+');
        T();
        E1();
    } else printf("E'->ε\n");
}

void E(){
    printf("E->TE'\n");
    T();
    E1();
}

int main(){
    scanf("%s", input);
    strcat(input, "$");

    printf("Parsing Started\n");
    E();

    if(input[i]=='$') printf("Accepted\n");
    else printf("Rejected\n");
}
