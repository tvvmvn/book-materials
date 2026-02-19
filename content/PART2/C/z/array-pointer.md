

따라서 아래처럼 포인터를 활용해 배열의 모든 요소를 구하는 것도 가능합니다.

```c
int myNumbers[4] = {25, 50, 75, 100};

printf("%d", *myNumbers); // 25
printf("%d", *(myNumbers + 1)); // 50
printf("%d", *(myNumbers + 2)); // 75
printf("%d", *(myNumbers + 3)); // 100
```
