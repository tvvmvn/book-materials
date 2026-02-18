# 비트 연산자


& (and) 
| (or)
^ (xor)
~ (not)
>> (left shift)
<<  (right shift)


# basic

```c
#include <stdio.h>

int main() {
  int a = 10; // 0000 1010
  int b = 12; // 0000 1100

  printf("and: %d\n", a & b);// 8  (0000 1000)
  printf("or: %d\n", a | b);// 14 (0000 1110)
  printf("xor: %d\n", a ^ b);// 6  (0000 0110)

  return 0;
}
```

# not

```c
#include <stdio.h>

int main() {
  int a = 5; // 0000 0101

  printf("%d\n", ~a); //-6
}
```


# shift

```c
#include <stdio.h>

int main() {
  int a = 10; // 0000 1010

  printf("%d\n", a << 1);//20 (0001 0100)
  printf("%d\n", a >> 1);//5 (0000 0101)
}
```