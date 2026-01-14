# 연산자

- 산술 연산자
- 비트 연산자
- 비교 연산자
- 복합 연산자
- 논리 연산자


# 비교 연산자

= (동등 연산자)
<> (비동등 연산자)
> (크다 연산자)
< (작다 연산자)
>= (크거나 같다 연산자)
<= (작거나 같다 연산자)


Select all customers from Mexico:

```sql
SELECT * FROM Customers WHERE Country = 'Mexico';
```


It returns students with grade greater than 2th.

```sql
SELECT * FROM Student WHERE grade >= 2
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

AND는 검색 조건을 좁히는 연산자입니다

```sql
-- 모든 조건을 만족시켜야 함
WHERE 조건1 AND 조건2 AND 조건3 ...;
```


다음은 City가 Rio de Janeiro이고 CustomerID가 50보다 큰 레코드를 추출하는 명령문입니다

```sql
SELECT * FROM Customers
WHERE Country = 'Brazil'
AND City = 'Rio de Janeiro' AND CustomerID > 50;
```


# OR 

검색 조건을 넓히는 연산자입니다.

```sql
-- 조건들 중 하나만 만족시키면 됨
WHERE 조건1 OR 조건2 OR 조건3 ...;
```

다음은 Country가 Germany, Spain인 레코드를 추출하는 명령문입니다

```sql
SELECT *
FROM Customers
WHERE Country = 'Germany' OR Country = 'Spain';
```


# NOT

조건을 뒤집는 연산자로 NOT LIKE, NOT BETWEEN, NOT IN 등 다른 연산자와 함께 쓰입니다.

다음은 Country가 Spain이 아닌 레코드를 추출하는 명령문입니다

```sql
SELECT * FROM Customers
WHERE NOT Country = 'Spain';
```


# BETWEEN 

값의 범위를 지정합니다. 범위는 숫자 뿐만 아니라 문자, 날짜가 될 수도 있습니다.

사용 방법
```sql
BETWEEN value1 AND value2;
```

다음은 Price의 범위를 10과 20의 사이로 지정한 명령문입니다.

```sql
SELECT * FROM Products
WHERE Price BETWEEN 10 AND 20;
```


# IN 

IN은 컬럼의 값을 한정하는 연산자입니다


사용 방법
```sql
WHERE column_name IN (value1, value2, ...);
```


다음은 Country가 Germany, France, UK인 레코드를 추출하는 명령문입니다

```sql
SELECT * FROM Customers
WHERE Country IN ('Germany', 'France', 'UK');
```


# LIKE

LIKE는 패턴으로 컬럼 값을 선별하는 연산자입니다.

```sql
WHERE 컬럼 LIKE 패턴;
```


LIKE는 주로 %(Wildcard) 문자와 함께 쓰입니다

```sql
-- CustomerName이 a로 시작하는 
WHERE CustomerName LIKE 'a%';

-- CustomerName이 a로 끝나는
WHERE CustomerName LIKE '%a';

-- CustomerName이 b로 시작해서 s로 끝나는
WHERE CustomerName LIKE 'b%s';

-- CustomerName이 a를 포함하는
WHERE CustomerName LIKE '%a%';
```

