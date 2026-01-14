# ORDER BY

추출할 레코드의 순서를 정렬하는 명령어입니다.
정렬 명령을 따로 명시하지 않으면 문자는 알파벳순, 숫자는 오름차순으로 정렬됩니다.

사용 방법
```sql
FROM 테이블 ORDER BY 컬럼1, 컬럼2, ... ASC|DESC;
```

다음은 ProductName을 기준으로 레코드를 알파벳순으로 정렬하고 추출하는 명령문입니다

```sql
SELECT * FROM Products ORDER BY ProductName;
```

다음은 Price를 기준으로 내림차순으로 정렬하고 추출하는 명령문입니다

```sql
SELECT * FROM Products ORDER BY Price DESC;
```


여러 개의 컬럼을 기준으로 정렬하는 경우를 생각해봅시다. 우선 Country를 기준으로 오름차순 정렬합니다. 그리고 Country값이 같은 레코드들을 CustomerName 기준으로 오름차순 정렬합니다. 

```sql
SELECT * FROM Customers ORDER BY Country, CustomerName;
```

다음은 우선 Country를 기준으로 오름차순 정렬합니다. 그리고 Country값이 같은 레코드들을 CustromerName 기준으로 내림차순 정렬합니다.

```sql
SELECT * FROM Customers
ORDER BY Country ASC, CustomerName DESC;
```
