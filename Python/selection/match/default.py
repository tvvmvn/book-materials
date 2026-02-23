# Use the underscore character _ as the last case value 
# if you want a code block to execute when there are not other matches:



day = 4

match day:
  case 6:
    print("Today is Saturday")
  case 7:
    print("Today is Sunday")
  case _:
    print("Looking forward to the Weekend")