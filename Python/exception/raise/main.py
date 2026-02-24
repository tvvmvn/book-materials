input = 123
password = 1234

try:
  if input != password:
    raise Exception(1)
  
  print("login success")
except:
  print("비밀번호 오류")
# 비밀번호 오류