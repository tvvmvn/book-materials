try:
  print(x)
except NameError:
  print('이름을 확인하세요!')
except:
  print('기타 에러 발생!')