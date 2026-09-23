#include <stdio.h>

int main()
{   
    //variable declaration
    int age;
    float height;
    char initial;
    char name[100];

    //IO statements
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter initial: ");
    scanf(" %c", &initial);

    printf("Enter name: ");
    scanf("%99s", name);


    //different data types
    printf("\nAge: %d\n", age);
    printf("Height: %.3f\n", height);
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);
    printf("Hi and Hello World");

//Decison making loop  and operators (unary and logical)
    if (age>=18 && age<=60){
        printf("valid age\n");
    }
    else {
        printf("Not valid");
    }
    age++;
    printf("%d\n",age);
    age--;
    printf("%d\n",age);


    return 0;
}