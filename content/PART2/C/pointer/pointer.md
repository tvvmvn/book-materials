# Pointer

다른 변수의 주소를 값으로 가지는 변수를 포인터라고 부릅니다.
포인터의 자료형은 주소를 저장한 변수의 자료형과 같으며 자료형 뒤에 *을 붙입니다.

```c
int myAge = 30;     
int* ptr = &myAge;  

printf("%d\n", myAge); // 30
printf("%p\n", ptr); // 0x7ffe5367e044
```