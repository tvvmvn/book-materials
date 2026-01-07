# Lambda

A lambda is a small anonymous function.

A lambda function can take any number of arguments, but can only have one expression.


# Syntax

lambda arguments : expression

```python
# Add 10 to argument a, and return the result:
x = lambda a : a + 10

print(x(5))
```

```python
# Multiply argument a with argument b and return the result:
x = lambda a, b : a * b

print(x(5, 6))
```