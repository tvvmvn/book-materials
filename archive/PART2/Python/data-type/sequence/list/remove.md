# Remove


## del keyword

The del keyword also removes the specified index:

```python
# Remove the first item:
thislist = ["apple", "banana", "cherry"]
del thislist[0]

print(thislist)
```

## remove()

The remove() method removes the specified item.

```python
# Remove "banana":
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")

print(thislist)
```

If there are more than one item with the specified value, the remove() method removes the first occurrence:

```python
# Remove the first occurrence of "banana":
thislist = ["apple", "banana", "cherry", "banana", "kiwi"]
thislist.remove("banana")

print(thislist)
```

## pop()

The pop() method removes the specified index.
If you do not specify the index, the pop() method removes the last item.

```python
# Remove the second item:
thislist = ["apple", "banana", "cherry"]
thislist.pop(1)

print(thislist)
```

## clear()

The clear() method empties the list.

The list still remains, but it has no content.


```python
# Clear the list content:
thislist = ["apple", "banana", "cherry"]
thislist.clear()

print(thislist)
```