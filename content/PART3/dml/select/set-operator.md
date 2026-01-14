# 집합 연산자

집합 연산에 참여하는 두 테이블로부터 컬럼을 명시할 때 기본적으로 컬럼들은 같은 자료형이어야 합니다. 또한 명시된 컬럼들의 순서와 개수를 일치시켜야 합니다. 


- UNION (합집합)
- UNION ALL (합집합)
- INTERSECT (교집합)
- EXCEPT (차집합)


# UNION

두 SELECT문의 추출 결과를 합칩니다. 중복되는 행은 삭제합니다

```sql
SELECT 컬럼1, 컬럼2, ... FROM 테이블1
UNION
SELECT 컬럼1, 컬럼2, ... FROM 테이블2;
```


다음은 Customers, Suppliers 테이블에 나타난 모든 도시 값을 알고싶을 때 적절한 명령문입니다.

<!-- 집합 연산도 조인처럼 테이블이 있으면 좋을 듯 -->
```sql
SELECT City FROM Customers
UNION
SELECT City FROM Suppliers
```


# UNION ALL

UNION와 기본적으로 같은 연산이지만 중복된 행도 포함시킵니다.

다음은 Customers, Suppliers 테이블에 나타난 모든 도시 값 뿐만 아니라 각 도시의 개수를 알고 싶을 때 적절한 명령문입니다.

```sql
SELECT City FROM Customers
UNION ALL
SELECT City FROM Suppliers
```


# INTERSECT

두 SELECT 문의 조회 결과 중 공통된 행만 출력합니다

```sql
SELECT column_name(s) FROM table1
INTERSECT
SELECT column_name(s) FROM table2;
```


다음은 Customers, Suppliers에 공통적으로 있는 City를 알고싶을 때 적절한 명령문입니다

```sql
SELECT 컬럼1, 컬럼2, ... FROM 테이블1
INTERSECT
SELECT 컬럼1, 컬럼2, ... FROM 테이블2;
```


# EXCEPT

첫번째 SELECT문의 조회 결과에서 두번째 SELECT문의 조회 결과를 제외한 행을 출력합니다

```sql
SELECT 컬럼1, 컬럼2, ... FROM 테이블1
EXCEPT
SELECT 컬럼1, 컬럼2, ... FROM 테이블2;
```