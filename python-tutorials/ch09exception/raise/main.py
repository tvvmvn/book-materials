age = 15

try:
  if age < 18:
    raise Exception('너무 어려요!')
  
  print("입장")
  
except:
  print("예외 발생!")

# 예외 발생!