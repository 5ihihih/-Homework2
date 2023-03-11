#include <stdio.h>

int main(){
    printf("[----- [Inhwa Oh] [2022078036] -----]\n\n");

    int i;
    int *ptr;
    int **dptr;

    i = 1234;

    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i);           //변수i에 저장된 값 출력
    printf("address of i == %p\n", &i);        //i의 주소 출력
    printf("value of ptr == %p\n", ptr);       //포인터변수 ptr이 가리키는 주소 출력 
    printf("address of ptr == %p\n", &ptr);    //ptr의 주소 출력

    ptr = &i;   //포인터변수 ptr에 변수 i의 주소를 대입

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); 
    printf("address of i == %p\n", &i); 
    printf("value of ptr == %p\n", ptr);      //ptr에 저장된 i의 주소 출력
    printf("address of ptr == %p\n", &ptr);   
    printf("value of ptr == %d\n", *ptr);     //ptr이 가리키는 i에 저장된 값 출력

    dptr = &ptr;   //이중포인터변수 dptr에 포인터변수 ptr의 주소를 대입

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);          
    printf("address of i == %p\n", &i);       
    printf("value of ptr == %p\n", ptr);      
    printf("address of ptr == %p\n", &ptr);   
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);    //dptr에 저장된 ptr의 주소 출력
    printf("address of dptr == %p\n", &dptr); //dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);  //dptr이 가리키는 ptr에 저장된 값 출력
    printf("value of **dptr == %d\n", **dptr);//dptr이 가리키는 ptr이 가리키는 i에 저장된 값 출력

    return 0;
}