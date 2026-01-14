# SELECT

SELECT는 테이블에서 레코드를 추출하는 명령어입니다

1. 기본 사용
1. ORDER BY
1. Sub Query
1. JOIN
1. Group
1. Set Operator


사용 방법
```sql
SELECT 컬럼1, 컬럼2, ... FROM 테이블_이름;
```

다음은 테이블 Customers에서 모든 레코드의 CustomerName, City 값을 추출하는 명령문입니다

```sql
SELECT CustomerName, City FROM Customers;
```

모든 컬럼을 추출하고자 한다면 컬럼 이름 대신 *문자를 사용할 수 있습니다.
다음은 테이블 Customers로부터 모든 컬럼과 함께 레코드를 추출하는 명령문입니다

```sql
SELECT * FROM Customers;
```


# SELECT DISTINCT

DISTINCT는 주어진 컬럼에서 같은 값을 가진 행을 한번만 추출하는 명령어입니다

```sql
SELECT DISTINCT 컬럼 FROM 테이블;
```

아래처럼 여러 개의 컬럼을 지정하면, 지정된 모든 컬럼의 값이 동일한 행을 하나의 중복으로 간주합니다.

```sql
SELECT DISTINCT 컬럼1, 컬럼2, .. FROM Customers;
```


다음은 고객들이 거주하고 있는 국가들을 알고싶을 때 적절한 명령문입니다.

```sql
SELECT DISTINCT Country FROM Customers;
```
