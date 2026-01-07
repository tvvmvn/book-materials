# map()

The map() function executes a specified function for each item in an iterable. The item is sent to the function as a parameter.

*syntax*
map(function, iterables)

- function: Required. The function to execute for each item
- iterable: Required. A sequence, collection or an iterator object. You can send as many iterables as you like, just make sure the function has one parameter for each iterable.


```python
# Calculate the length of each word in the tuple:
def myfunc(n):
  return len(n)

x = map(myfunc, ('apple', 'banana', 'cherry'))

for i in x:
  print(i)
```


# filter()

The filter() function returns an iterator where the items are filtered through a function to test if the item is accepted or not.

*syntax*
filter(function, iterable)

- function: A Function to be run for each item in the iterable
- iterable: The iterable to be filtered


```python
ages = [5, 12, 17, 18, 24, 32]

def myFunc(x):
  if x < 18:
    return False
  else:
    return True

adults = filter(myFunc, ages)

for x in adults:
  print(x)
```