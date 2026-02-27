# 연산자 (Operator)

주로 조건을 지정할 때 사용됩니다.

- 산술 연산자 (Arithmetic Operator)
- 비트 연산자 (Bit Operator)
- 비교 연산자 (Comparison Operator)
- 복합 연산자 (Composit Operator)
- 논리 연산자 (Logical Operator)


# 비교 연산자

- = (동등 연산자)
- <> (비동등 연산자)
- > (크다 연산자)
- < (작다 연산자)
- >= (크거나 같다 연산자)
- <= (작거나 같다 연산자)

예제)
테이블 <학생>에서 1학년 학생들만 조회하세요.
```sql
SELECT * FROM 학생 WHERE 학년 = 1;
```

예제)
테이블 <학생>에서 3학년 이상인 학생들만 조회하세요.
```sql
SELECT * FROM 학생 WHERE 학년 >= 2
```


# 논리 연산자

- AND 
- OR 
- NOT 
- BETWEEN 
- IN 
- LIKE 
- ALL 
- SOME 
- ANY 
- EXISTS 


# AND

AND는 검색 조건을 추가하는 연산자입니다.

```sql
.. WHERE 조건 AND 추가조건1 AND 추가조건2 ...;
```

예제)
<학생>에서 1학년이면서 취미가 축구인 학생들을 조회하세요.
```sql
SELECT * FROM 학생
WHERE 학년 = 1 AND 취미 = '축구' 
```


# OR 

OR은 검색 조건을 넓히는 연산자입니다. 명시된 조건들 중 하나만 만족시키면 됩니다.

```sql
WHERE 조건 OR 추가조건1 OR 추가조건2 ...;
```

예제)
<학생>에서 1학년이거나 '생년월일'이 2000년 1월 1일 이후인 학생들을 조회하세요.
```sql
SELECT * FROM 학생 
WHERE 학년 = 1 OR 생년월일 >='2000-01-01';
```


# NOT

조건을 뒤집는 연산자로 NOT LIKE, NOT BETWEEN, NOT IN 등 다른 연산자와 함께 쓰입니다.

예제)
<학생>에서 1학년을 제외한 학생들 정보를 조회하세요.
```sql
SELECT * FROM 학생 
WHERE NOT 학년 = 1;
```


# BETWEEN 

값의 범위를 지정합니다. 범위는 숫자 뿐만 아니라 문자, 날짜가 될 수도 있습니다.

```sql
... BETWEEN 값1 AND 값2;
```

예제)
<학생>에서 1학년에서 3학년 사이의 학생들만 조회하세요.
```sql
SELECT * FROM 학생
WHERE 학년 BETWEEN 1 AND 3;
```


# IN 

IN에 명시된 조건들 중 하나를 만족시키는 레코드를 추출합니다.
여러 개의 OR 연산자를 사용하는 것과 같습니다.

```sql
... WHERE 컬럼 IN (값1, 값2, ...);
```

예제)
<학생>에서 취미가 축구, 농구, 야구 중 하나인 학생들을 조회하세요.
```sql
SELECT * FROM 학생
WHERE 취미 IN ('축구', '농구', '야구');
```


# LIKE

LIKE는 값의 패턴으로 검색 조건을 추가하는 연산자입니다.
LIKE는 주로 %(Wildcard) 문자와 함께 쓰입니다.

```sql
... WHERE 컬럼 LIKE 패턴;
```

예제)
<학생>에서 이름이 '김'으로 시작하는 학생들을 조회하세요.

```sql
SELECT * FROM 학생 WHERE 이름 LIKE '김%';
```

예제)
<학생>에서 이름이 '수'로 끝나는 학생들을 조회하세요.
```sql
WHERE 학생 LIKE '%수';
```

예제)
<학생>에서 이름에 '동'을 포함하는 학생들을 조회하세요. 
```sql
WHERE 학생 LIKE '%동%';
```