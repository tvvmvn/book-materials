# Ternary Operator

There is also a short-hand if...else, known as the ternary operator because it uses three operands.

The ternary operator returns a value based on a condition: if the condition is true, it returns the first value; otherwise, it returns the second value.

It can be used to replace multiple lines of code with a single line, and is often used to replace simple if...else statements:

Syntax
```c
variable = (condition) ? expressionTrue : expressionFalse;
```

```c
int time = 20;

(time < 18) ? printf("Good day.") : printf("Good evening.");
```