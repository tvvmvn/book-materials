# The update() method will update the dictionary with the items from the given argument.
# if items do not exists, added

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

# The argument must be a dictionary, or an iterable object with key:value pairs.
thisdict.update({"year": 2020})