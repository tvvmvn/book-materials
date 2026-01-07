# Add items

Adding an item to the dictionary is done by using a new index key and assigning a value to it:

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

thisdict["color"] = "red"

print(thisdict)
```

## update()

The update() method will update the dictionary with the items from a given argument. If the item does not exist, the item will be added.

```python
# Add a color item to the dictionary by using the update() method:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

thisdict.update({"color": "red"})
```