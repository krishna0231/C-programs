#include<stdio.h>

int main() {
    int a =12;
    int b = a;
    int c = b*6;
    printf("enter 12,b,c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a=%d b=%d c=%d\n", a, b, c);
        return 0;
}