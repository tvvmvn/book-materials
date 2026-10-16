# 전역 변수
a = 1

def myfunc():
  # 지역 변수
  b = 2

print(a)
# print(b) #에러! (접근 불가)

# 
# NameError: name 'b' is not defined