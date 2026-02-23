# Before Python 3.6 we used the format() method to format strings.

# The format() method can still be used, but f-strings are faster and the preferred way to format strings.


price = 49

txt = "The price is {} dollars"

print(txt.format(price))