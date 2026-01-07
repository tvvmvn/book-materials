# if Statement

1. if
1. if / else
1. elseif

## if 

Use the if statement to specify a block of code to be executed if a condition is true.

Syntax
```c
if (condition) {
  // block of code to be executed if the condition is true
}
```

```c
int age = 20;

if (age >= 18) {
  printf("Adult");
}
```

## if / else

Syntax
```c
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```

```c
int time = 20;

if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
// Outputs "Good evening."
```

## elseif

```c
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```
you can add more else-if statements than one and
else in last is optional.


```c
int time = 22;

if (time < 10) {
  printf("Good morning.");
} else if (time < 20) {
  printf("Good day.");
} else {
  printf("Good evening.");
}

// Outputs "Good evening."
```