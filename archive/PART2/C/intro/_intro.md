# Intro

1. What is C
1. Output
1. Comment


# What is C

1960
UNIX


# Output

To output values or print text in C, you can use the printf() function:

```c
int main() {
  printf("Hello World!");
  return 0;
}
```

to output values in number type

```c
int myNum = 15;

printf("%d", myNum);
```


To combine both text and a variable, separate them with a comma inside the printf() function:

```c
int myNum = 15;

printf("My favorite number is: %d", myNum);
```

