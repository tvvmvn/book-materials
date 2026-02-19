# loop


다음은 1과 10사이의 수 중에서 짝수만 출력하는 코드입니다

```c
int n = 1;

while (n <= 10) {
  if (n % 2 == 0) {
    printf("%d ", n);
  }
  n++;
}
```


다음은 주어진 숫자를 거꾸로 뒤집는 코드입니다

```c
// A variable with some specific numbers
int numbers = 12345;

// A variable to store the reversed number
int revNumbers = 0;

// Reverse and reorder the numbers
while (numbers) {
  // Get the last number of 'numbers' and add it to 'revNumber'
  revNumbers = revNumbers * 10 + numbers % 10;
  // Remove the last number of 'numbers'
  numbers /= 10;
}
```


다음은 주어진 수가 짝수인지 홀수인지 판단하는 코드입니다.

```c
int myNum = 5;

if (myNum % 2 == 0) {
  printf("%d is even.\n", myNum);
} else {
  printf("%d is odd.\n", myNum);
}
```