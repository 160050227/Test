#include <stdio.h>

int main() {
    int num1, num2, sum, product;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
Conditional Statement:
c
Copy code
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
Loop (Printing numbers from 1 to 10):
c
Copy code
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
Array (Sum of elements in an array):
c
Copy code
#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);



