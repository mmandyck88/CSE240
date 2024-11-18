/**
* hw01q3 – hq01q3 - Fixing and Debugging codes
*
* Completion time : 25 hours
*
* @author Melissa Mandyck, Acuna, and Claveau code used
* @vers ion January 14th, 2024
*/

#include <stdio.h>
int main() {
    char ch;
    ch = '+';
    int f, a = 10, b = 20;
    printf("ch = %c\n", ch);
    switch (ch) {
    case '+':
        f = a + b;
        printf("f = %d\n", f);
        break;
    case '-':
        f = a - b;
        printf("f = %d\n", f);
        break;
    case '*':
        f = a * b;
        printf("f = %d\n", f);
        break;
    case '/':
        f = a / b;
        printf("f = %d\n", f);
        break;
    default:
        printf("invalid operator\n");
    }

    ch = '-';
    printf("ch = %c\n", ch);
    switch (ch) {
    case '+':
        f = a + b;
        printf("f = %d\n", f);
        break;
    case '-':
        f = a - b;
        printf("f = %d\n", f);
        break;
    case '*':
        f = a * b;
        printf("f = %d\n", f);
        break;
    case '/':
        f = a / b;
        printf("f = %d\n", f);
        break;
    default:
        printf("invalid operator\n");
    }

    ch = '*';
    printf("ch = %c\n", ch);
    switch (ch) {
    case '+':
        f = a + b;
        printf("f = %d\n", f);
        break;
    case '-':
        f = a - b;
        printf("f = %d\n", f);
        break;
    case '*':
        f = a * b;
        printf("f = %d\n", f);
        break;
    case '/':
        f = a / b;
        printf("f = %d\n", f);
        break;
    default:
        printf("invalid operator\n");
    }
    ch = '/';
    printf("ch = %c\n", ch);
    switch (ch) {
    case '+':
        f = a + b;
        printf("f = %d\n", f);
        break;
    case '-':
        f = a - b;
        printf("f = %d\n", f);
        break;
    case '*':
        f = a * b;
        printf("f = %d\n", f);
        break;
    case '/':
        float f;
        f = (float)a / b;
        printf("f = %0.2f\n", (float)f);
        break;
    default:
        printf("invalid operator\n");
    }

    ch = '%';
    printf("ch = %c\n", ch);
    switch (ch) {
    case '+':
        f = a + b;
        printf("f = %d\n", f);
        break;
    case '-':
        f = a - b;
        printf("f = %d\n", f);
        break;
    case '*':
        f = a * b;
        printf("f = %d\n", f);
        break;
    case '/':
        f = (float)a / b; 
        printf("f = %0.2f\n", (float)f);
        break;
    default:
        printf("invalid operator\n");
    }
    return 0;
}