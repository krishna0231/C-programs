 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%*d%d", &a, &b, &c);
    printf("a=%d\tb=%d\tc=%d",a,b,c);
    getch();
    return 0;

 }