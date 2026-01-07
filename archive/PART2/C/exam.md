# loop

In this example, we create a program that only print even numbers between 0 and 10 (inclusive):

```c
int i = 0;

while (i <= 10) {
  printf("%d\n", i);
  i += 2;
}
```

In this example we use a while loop to reverse some numbers:

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


# Contional statements

Find out if a number is even or odd:

```c
int myNum = 5;

if (myNum % 2 == 0) {
  printf("%d is even.\n", myNum);
} else {
  printf("%d is odd.\n", myNum);
}
```