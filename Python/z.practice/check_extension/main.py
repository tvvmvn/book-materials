# 파일 이름
file_name = 'me.jpg'

# 파일에서 확장자(extension)를 추출하는 부분입니다.
# .을 기준으로 문자열을 나누고 마지막 요소에 접근합니다.
# 현재 ext변수의 값은 jpg입니다.
ext = file_name.split('.')[-1]

# 지원되는 파일 형식
supported = ('jpg', 'png', 'gif')

# 지원되는 파일이라면 업로드 가능!
if ext in supported:
  print('업로드 가능')

# 
# 업로드 가능
