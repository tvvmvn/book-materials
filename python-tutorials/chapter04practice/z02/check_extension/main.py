# 업로드할 파일
file_name = 'me.jpg'

# 파일에서 확장자(extension)를 추출하는 부분입니다.
ext = file_name.split('.')[-1]

# 지원되는 파일 형식
supported = ('jpg', 'png', 'gif')

# 업로드 가능 여부를 검사합니다
if ext in supported:
  print('업로드 가능')

# 
# 업로드 가능
