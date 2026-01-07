# Range

The built-in range() function returns an immutable sequence of numbers, commonly used for looping a specific number of times.

This set of numbers has its own data type called range.


## Creating ranges

The range() function can be called with 1, 2, or 3 arguments, using this syntax:

range(start, stop, step)

1. start (optional)
2. stop (required)
3. step (optional)


### stop

```python
# Create a range of numbers from 0 to 9:
x = range(10)
```

### start

```python
# Create a range of numbers from 3 to 9:
x = range(3, 10)
```

### step

range(3, 10, 2) returns a sequence of each number from 3 to 9, with a step of 2:

```python
# Create a range of numbers from 3 to 9:
x = range(3, 10, 2)
```


## length

Ranges support the len() function to get the number of elements in the range.

```python
# Get the length of a range:
r = range(0, 10, 2)

print(len(r))
```


## range to list

The range object is a data type that represents an immutable sequence of numbers, and it is not directly displayable.

Therefore, ranges are often converted to lists for display.

```python
# Convert different ranges to lists:
print(list(range(5)))
print(list(range(1, 6)))
print(list(range(5, 20, 3)))
```
