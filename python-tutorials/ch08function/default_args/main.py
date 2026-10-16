def greeting(to = "world"): # 기본 인자: world
  print("hello", to)

# 인자 없음 -> 기본 인자가 적용됩니다
greeting()
# 인자 있음
greeting('C')
greeting('Python')

# 
# hello world
# hello C
# hello Python