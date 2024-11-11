#include <stdio.h>
#include <math.h>
int main() {
    int choice,a,b,result;
    float Result;
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            result=a+b;
            printf("%d + %d = %d\n",a,b,result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            result=a - b;
            printf("%d - %d = %d\n",a,b,result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            result=a*b;
            printf("%d * %d = %d\n",a,b,result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            if (b == 0)
            printf("Error: Division by zero\n");
             else 
			{
                Result=(double)a/b;
                printf("%d / %d = %.2f\n",a,b,Result);
            }
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%d%d",&a,&b);
            result=pow(a,b);
            printf("%d ^ %d = %d\n",a,b,result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d",&a);
            if ( a < 0)
            printf("Error: Square root of negative number is not defined\n");
            else
			{
                Result=(double)sqrt(a);
            printf("Square root of %d = %.2f\n",a,Result);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
