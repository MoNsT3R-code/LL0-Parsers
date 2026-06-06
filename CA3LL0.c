#include <stdio.h>
#include <string.h>

char stack[100];
char input[100];
int top = -1;
int i = 0;

void push(char c) {
   stack[++top] = c;
}

void pop() {
   if (top >= 0)
       top--;
}

void printStack() {
   for (int j = 0; j <= top; j++)
       printf("%c", stack[j]);
}

int main() {
   printf("Enter input string (end with $): ");
   scanf("%s", input);

   push('0');

   printf("\nStack\tInput\tAction\n");

   while (1) {
       printf(" ");
       printStack();
       printf("\t%s\t", &input[i]);

       if (input[i] == 'c') {
           printf("Shift\n");
           push('c');
           i++;
       }
       else if (input[i] == 'd') {
           printf("Shift\n");
           push('d');
           i++;
       }
       else if (input[i] == '$') {
           printf("Accept\n");
           break;
       }
       else {
           printf("Reject\n");
           break;
       }
   }

   return 0;
}
