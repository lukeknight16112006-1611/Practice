#include <stdio.h>

int main()
{
    int age;
    float height;
    char initial;
    char name[100];

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter initial: ");
    scanf(" %c", &initial);

    printf("Enter name: ");
    scanf("%99s", name);

    printf("\nAge: %d\n", age);
    printf("Height: %.3f\n", height);
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);
    printf("Hi and Hello World");

    return 0;
}