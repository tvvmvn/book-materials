# Set

1. What is Set
1. Access items
1. Add items
1. Remove items
1. sort items
1. Concat sets
1. Slice sets


## What is Set

Sets are used to store multiple items in a single variable.

A set is a collection which is unordered, unchangeable*, and unindexed.

* Note: Set items are unchangeable, but you can remove items and add new items.

```python
# Create a Set:
thisset = {"apple", "banana", "cherry"}

print(thisset)
```

## The set() Constructor

It is also possible to use the set() constructor to make a set.

```python
# note the double round-brackets
thisset = set(("apple", "banana", "cherry")) 

print(thisset)
```

## Duplicates Not Allowed

Sets cannot have two items with the same value.

```python
# Duplicate values will be ignored:
thisset = {"apple", "banana", "cherry", "apple"}

print(thisset)
```


## Length

To determine how many items a set has, use the len() function.

```python
thisset = {"apple", "banana", "cherry"}

print(len(thisset))
```