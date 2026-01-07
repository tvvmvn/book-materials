# while statements

With the while loop we can execute a set of statements as long as a condition is true.


```python
# Print i as long as i is less than 6:
i = 1

while i < 6:
  print(i)
  i += 1
```

## break

With the break statement we can stop the loop even if the while condition is true:


```python
# Exit the loop when i is 3:
i = 1

while i < 6:
  if i == 3:
    break
  print(i)
  i += 1
```

## continue

With the continue statement we can stop the current iteration, and continue with the next:

```python
# Continue to the next iteration if i is 3:

i = 0

while i < 6:
  i += 1
  
  if i == 3:
    continue
  print(i)
```