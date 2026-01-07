# Dictionary

1. What is it
1. Access items
1. Change items
1. Add items
1. Remove items


## What is it

A dictionary is a collection which is ordered*, changeable and do not allow duplicates.

Dictionaries are used to store data values in key:value pairs.
The values in dictionary items can be of any data type:


```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

print(thisdict)
```

## Get length

To determine how many items a dictionary has, use the len() function:

```python
# Print the number of items in the dictionary:
print(len(thisdict))
```

### Constructor

It is also possible to use the dict() constructor to make a dictionary.

```python
# Using the dict() method to make a dictionary:
thisdict = dict(name = "John", age = 36, country = "Norway")

print(thisdict)
```