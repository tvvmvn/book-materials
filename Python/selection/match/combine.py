# Use the pipe character | as an or operator in the case evaluation
# to check for more than one value match in one case:


day = 4

match day:
  case 1 | 2 | 3 | 4 | 5:
    print("Today is a weekday")
  case 6 | 7:
    print("I love weekends!")