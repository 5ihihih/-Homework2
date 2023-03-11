#include <stdio.h>

int main(){
    printf("[----- [Inhwa Oh] [2022078036] -----]\n\n");
    
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    
    //위에서 선언한 변수들이 차지하는 메모리의 크기를 부호있는 10진 정수로 출력한다
    printf("Size of char: %ld byte\n", sizeof(charType));       
    printf("Size of int: %ld bytes\n", sizeof(integerType));
    printf("Size of float: %ld byte\n", sizeof(floatType));
    printf("Size of double: %ld byte\n", sizeof(doubleType));

    printf("----------------------------------------------\n");

    //각 자료형의 크기를 출력한다
    printf("Size of char: %ld byte\n", sizeof(char));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of float: %ld byte\n", sizeof(float));
    printf("Size of double: %ld byte\n", sizeof(double));

    printf("----------------------------------------------\n");

    //각 포인터의 크기를 출력한다
    printf("Size of char*: %ld byte\n", sizeof(char*));
    printf("Size of int*: %ld bytes\n", sizeof(int*));
    printf("Size of float*: %ld byte\n", sizeof(float*));
    printf("Size of double*: %ld byte\n", sizeof(double*));

}