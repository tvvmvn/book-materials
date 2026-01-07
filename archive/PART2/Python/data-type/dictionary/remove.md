# Remove items

There are several methods to remove items from a dictionary:


## del keyword

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

del thisdict["model"]

print(thisdict)
```

## pop()

The pop() method removes the item with the specified key name:

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

thisdict.pop("model")

print(thisdict)
```

## clear()

The clear() method empties the dictionary:

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict.clear()
print(thisdict)
```