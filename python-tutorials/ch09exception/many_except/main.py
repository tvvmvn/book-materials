try:
  print(x)

# NameError 처리
except NameError:
  print('변수명을 확인하세요!')
# 기타 예외 처리
except:
  print('기타 에러 발생!')

# 변수명을 확인하세요!