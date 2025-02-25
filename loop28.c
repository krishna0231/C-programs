// write a program to show opration of arithmetic,assignmenta and logical operator 
#include<stdio.h>
int main()
{
    int a = 5, b = 3;

    // Arithmetic operations
    printf("Arithmetic Operations:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Assignment operations
    printf("\nAssignment Operations:\n");
    a += b;
    printf("a += b: %d\n", a);
    a -= b;
    printf("a -= b: %d\n", a);
    a *= b;
    printf("a *= b: %d\n", a);
    a /= b;
    printf("a /= b: %d\n", a);
    a %= b;
    printf("a %%= b: %d\n", a);

    // Logical operations
    printf("\nLogical Operations:\n");
    printf("(a > b) && (a < b): %d\n", (a > b) && (a < b));
    printf("(a > b) || (a < b): %d\n", (a > b) || (a < b));
    printf("!(a == b): %d\n", !(a == b));
    /*
     Algorithm of the Code
This algorithm represents the working of Arithmetic, Assignment, and Logical Operators.

Start (Begin the program)
Initialize two variables a = 5 and b = 3.
Perform Arithmetic Operations and print the results:
a + b
a - b
a * b
a / b
a % b
Perform Assignment Operations and print the results:
a += b
a -= b
a *= b
a /= b
a %= b
Perform Logical Operations and print the results:
(a > b) && (a < b)
(a > b) || (a < b)
!(a == b)
End (Finish the program)
📌 Flowchart
Here's a simple description of the flowchart steps for this program.

🔹 Flowchart Steps
1️⃣ Start ⬇️
2️⃣ Initialize (a = 5, b = 3) ⬇️
3️⃣ Perform Arithmetic Operations and print the results ⬇️
4️⃣ Perform Assignment Operations and print the results ⬇️
5️⃣ Perform Logical Operations and print the results ⬇️
6️⃣ End
    */
}