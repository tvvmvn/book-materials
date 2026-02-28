level = 2

match level:
  case 1:
    print("Lv.1")
  case 2:
    print("Lv.2")
  case 3:
    print("Lv.3")
  case _: # option
    print("Unknown level")

# Lv.2