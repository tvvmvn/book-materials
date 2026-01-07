# List

1. What is it
1. access items
1. change items
1. add items
1. remove items
1. sort items
1. concat lists
1. slice lists


## What is List

Lists are used to store multiple items in a single variable.

List items are ordered, changeable, and allow duplicate values.

```python
thislist = ["apple", "banana", "cherry"]
print(thislist)
```

### length

To determine how many items a list has, use the len() function:
```python
# Print the number of items in the list:
thislist = ["apple", "banana", "cherry"]
print(len(thislist))
```

### constructor

It is also possible to use the list() constructor when creating a new list.

```python
# note the double round-brackets
thislist = list(("apple", "banana", "cherry")) 

print(thislist)
```

### Allow Duplicates

Since lists are indexed, lists can have items with the same value:

```python
# Lists allow duplicate values:
thislist = ["apple", "banana", "cherry", "apple", "cherry"]
print(thislist)
```