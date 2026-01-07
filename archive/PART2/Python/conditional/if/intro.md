# If statements
 
An "if statement" is written by using the if keyword.

1. if
3. else
2. elif

## if

```python
a = 33
b = 200

if b > a:
  print("b is greater than a")
```

shorhand

```python
a = 5
b = 2

if a > b: print("a is greater than b")
```


## else

The else keyword catches anything which isn't caught by the preceding conditions.

The else statement is executed when the if condition (and any elif conditions) evaluate to False.

```python
a = 200
b = 33

if b > a:
  print("b is greater than a")
else:
  print("b is not greater than a")
```

shorthand

```python
a = 2
b = 330

print("A") if a > b else print("B")
```

## elif

The elif keyword is Python's way of saying "if the previous conditions were not true, then try this condition".

```python
score = 75

if score >= 90:
  print("Grade: A")
elif score >= 80:
  print("Grade: B")
elif score >= 70:
  print("Grade: C")
elif score >= 60:
  print("Grade: D")
```

elif with else

```python
a = 200
b = 33

if b > a:
  print("b is greater than a")
elif a == b:
  print("a and b are equal")
else:
  print("a is greater than b")
```

