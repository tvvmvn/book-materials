# While statements

Loops can execute a block of code as long as a specified condition is true.

Loops are handy because they save time, reduce errors, and they make code more readable.

```c
while (condition) {
  // code block to be executed
}
```

In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:

```c
int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}
```

## Do/While

The do/while loop is a variant of the while loop. 
This loop will execute the code block once, 
before checking if the condition is true, 
then it will repeat the loop as long as the condition is true.

This behavior makes do/while useful 
when you want to ensure something happens at least once, 
like showing a message or asking for user input.

```c
do {
  // code block to be executed
}
while (condition);
```

```c
int number;

do {
  printf("Enter a positive number: ");
  scanf("%d", &number);
} while (number > 0);
```