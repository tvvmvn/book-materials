# 포인터와 배열

배열의 변수 이름은 포인터입니다. 

포인터는 연산도 가능합니다. 이를 활용해 다른 요소들의 메모리 주소를 구할 수도 있습니다. 

각 요소의 메모리 주소를 잘 보면 4씩 증가하는 것을 알 수 있습니다(메모리 주소는 16진수 형식입니다). 이는 정수형의 크기가 4바이트이기 때문입니다.

```c
int myNumbers[4] = {25, 50, 75, 100};

printf("%p\n", myNumbers); 
printf("%p\n", myNumbers + 1);
printf("%p\n", myNumbers + 2);
printf("%p", myNumbers + 3);

// 0x7ff7bfeff220
// 0x7ff7bfeff224
// 0x7ff7bfeff228
// 0x7ff7bfeff22c
```
