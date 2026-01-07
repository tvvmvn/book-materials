# Sort list

## sort()

List objects have a sort() method that will sort the list alphanumerically, ascending, by default:

```python
# Sort the list alphabetically:
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort()

print(thislist)
```


```python
# Sort the list numerically:
thislist = [100, 50, 65, 82, 23]
thislist.sort()

print(thislist)
```

To sort descending, use the keyword argument reverse = True:

```python
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort(reverse = True)
print(thislist)
```

```python
thislist = [100, 50, 65, 82, 23]
thislist.sort(reverse = True)

print(thislist)
```

## reverse()

What if you want to reverse the order of a list, regardless of the alphabet?

The reverse() method reverses the current sorting order of the elements.

```python
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.reverse()
print(thislist)
```