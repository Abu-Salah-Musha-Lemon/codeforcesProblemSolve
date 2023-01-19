#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int x = (num1*num2)/2;
    printf("You entered: %d",x);
}
