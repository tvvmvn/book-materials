# Recursion

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.


<!-- e.g) 5! = 5 * 4 * .. * 1 -->

example. Factorial (계승)

```c
int factorial(int n);

int main() {
  printf("Factorial of 5 is %d", factorial(5));
  return 0;
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}
```