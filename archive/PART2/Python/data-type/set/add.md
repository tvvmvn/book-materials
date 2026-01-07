# Add items

To add one item to a set use the add() method.


## add()

```python
thisset = {"apple", "banana", "cherry"}

thisset.add("orange") 

print(thisset)
# {'banana', 'orange', 'cherry', 'apple'}
```

## update()

To add items from another set into the current set, use the update() method.

```python
# Add elements from tropical into thisset:
thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}

thisset.update(tropical)

print(thisset)
```
