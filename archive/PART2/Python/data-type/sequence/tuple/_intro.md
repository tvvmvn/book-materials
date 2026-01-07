# Tuple

1. What is it
1. Access items
1. Concat tuples
1. slice tuples


## What is tuple

Tuples are used to store multiple items in a single variable.

A tuple is a collection which is ordered and unchangeable.

```python
# Create a Tuple:
thistuple = ("apple", "banana", "cherry")

print(thistuple)
```

### The tuple() Constructor

It is also possible to use the tuple() constructor to make a tuple.

```python
# note the double round-brackets
thistuple = tuple(("apple", "banana", "cherry")) 

print(thistuple)
```

### Ordered && Unchangeable

When we say that tuples are ordered, 
it means that the items have a defined order, 
and that order will not change.

Tuples are unchangeable, meaning that we cannot change, 
add or remove items after the tuple has been created.


### Allow Duplicates

Since tuples are indexed, they can have items with the same value:

```python
# Tuples allow duplicate values:
thistuple = ("apple", "banana", "cherry", "apple", "cherry")

print(thistuple)
```

### length

To determine how many items a tuple has, use the len() function:

```python
thistuple = ("apple", "banana", "cherry")
print(len(thistuple))
```