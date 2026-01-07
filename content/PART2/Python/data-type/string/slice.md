# 문자열 자르기

문자열 자르기는 기본적으로 리스트 자르기와 같은 원리로 작동합니다

```python
s = "hello world"

print(s[2:])
# llo world
print(s[:5])
# hello
print(s[2:5])
# llo
```

리스트 자르기와 마찬가지로 음수 인덱스로 같은 작업을 수행할 수 있습니다.

```python
s = "hello world"

print(s[-5])
# world
print(s[:-2])
# hello wor
print(s[-5:-2])
# worl
```