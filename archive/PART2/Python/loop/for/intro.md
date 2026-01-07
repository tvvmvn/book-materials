# For statements

## What is it

A for loop is used for iterating over a sequence (that is either a list, a tuple, a dictionary, a set, or a string).

This is less like the for keyword in other programming languages, and works more like an iterator method as found in other object-orientated programming languages.

With the for loop we can execute a set of statements, once for each item in a list, tuple, set etc.



```python
# Print each fruit in a fruit list:
fruits = ["apple", "banana", "cherry"]

for x in fruits:
  print(x)
```


```python
# Loop through the letters in the word "banana":
for x in "banana":
  print(x)
```


```python
# Print each number in a range:
for x in range(6):
  print(x)
```


## break

With the break statement we can stop the loop before it has looped through all the items:

```python
# Exit the loop when x is "banana":
fruits = ["apple", "banana", "cherry"]

for x in fruits:
  if x == "banana":
    break

  print(x)
```

## continue

With the continue statement we can stop the current iteration of the loop, and continue with the next:

```python
# Do not print banana:
fruits = ["apple", "banana", "cherry"]

for x in fruits:
  if x == "banana":
    continue

  print(x)
```