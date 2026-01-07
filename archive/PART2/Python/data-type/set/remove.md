# Remove items

To remove an item in a set, use the remove(), or the discard() method.

## remove()

Note: If the item to remove does not exist, remove() will raise an error.

```python
# Remove "banana" by using the remove() method:
thisset = {"apple", "banana", "cherry"}

thisset.remove("banana")

print(thisset)
```

## discard()

Note: If the item to remove does not exist, discard() will NOT raise an error.

```python
# Remove "banana" by using the discard() method:
thisset = {"apple", "banana", "cherry"}

thisset.discard("banana")

print(thisset)
```

## pop()

Remove a random item by using the pop() method:

```python
thisset = {"apple", "banana", "cherry"}

x = thisset.pop()

print(x)

print(thisset)
```

## clear()

The clear() method empties the set:

```python
thisset = {"apple", "banana", "cherry"}

thisset.clear()

print(thisset)
```