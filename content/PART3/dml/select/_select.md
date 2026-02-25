# SELECT

SELECT는 테이블에서 레코드를 추출하는 명령어입니다.

사용 방법:
```sql
SELECT 컬럼1, 컬럼2, ... FROM 테이블_이름;
모든 컬럼을 추출하고자 한다면 컬럼명 대신 * 문자를 사용할 수 있습니다.
```

예시)
다음은 Customers에서 모든 레코드의 CustomerName, City 값을 추출하는 명령문입니다.
```sql
SELECT CustomerName, City FROM Customers;
```

예시)
다음은 테이블 Customers로부터 모든 컬럼과 함께 레코드를 추출하는 명령문입니다
```sql
SELECT * FROM Customers;
```


# SELECT DISTINCT

DISTINCT는 주어진 컬럼들의 값이 같은 행을 한번만 추출하는 명령어입니다.
지정된 모든 컬럼의 값이 동일한 행을 하나의 중복으로 간주합니다.
```sql
SELECT DISTINCT 컬럼1, 컬럼2, .. FROM Customers;
```

예시) 
다음 명령문은 고객들이 거주하는 모든 국가들을 중복없이 한번만 추출합니다. 
```sql
SELECT DISTINCT Country FROM Customers;
```
