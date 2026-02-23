# The list of the values is a view of the dictionary, 
# meaning that any changes done to the dictionary will be reflected in the values list.


# Make a change in the original dictionary, 
# and see that the values list gets updated as well:

car = {
"brand": "Ford",
"model": "Mustang",
"year": 1964
}

x = car.values()

print(x) #before the change

car["year"] = 2020

print(x) #after the change