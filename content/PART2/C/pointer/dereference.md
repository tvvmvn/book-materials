# 역참조

메모리 주소로 변수의 값에 접근하는 것을 역참조(dereference)라고 표현합니다. 
메모리 주소 앞에 *(역참조 연산자)를 붙여 역참조 할 수 있습니다.

```c
int myAge = 30;     
int* ptr = &myAge;  

printf("%p\n", ptr); //0x7ffe5367e044
printf("%d\n", *ptr); //30
```