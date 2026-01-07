# Set Operator

집합 연산자

Requirements for Operation:

- Every SELECT statement within operation must have the same number of columns
-The columns in every SELECT statement must also be in the same order
- The columns must also have similar data types

1. UNION (합집합)
1. UNION ALL (합집합)
1. INTERSECT (교집합)
1. EXCEPT (차집합)


## UNION Operator

The UNION operator is used to combine the `result-set of two or more SELECT statements`.

The UNION operator automatically removes duplicate rows from the result set.


```sql
SELECT column_name(s) FROM table1
UNION
SELECT column_name(s) FROM table2;
```

Example

The following SQL statement returns the cities (only distinct values) from both the "Customers" and the "Suppliers" table:

```sql
SELECT City FROM Customers
UNION
SELECT City FROM Suppliers
ORDER BY City;
```


## UNION ALL

While the UNION operator removes duplicate values by default, the UNION ALL `includes duplicate values`

Syntax
```sql
SELECT column_name(s) FROM table1
UNION ALL
SELECT column_name(s) FROM table2;
```

Example
The following SQL statement returns the cities (duplicate values also) from both the "Customers" and the "Suppliers" table:

```sql
SELECT City FROM Customers
UNION
SELECT City FROM Suppliers
ORDER BY City;
```


## INTERSECT

두 SELECT 문의 조회 결과 중 공통된 행만 출력합니다

Syntax
```sql
SELECT column_name(s) FROM table1
INTERSECT
SELECT column_name(s) FROM table2;
```


## EXCEPT

첫번째 SELECT문의 조회 결과에서 두번째 SELECT문의 조회 결과를 제외한 행을 출력합니다

Syntax
```sql
SELECT column_name(s) FROM table1
EXCEPT
SELECT column_name(s) FROM table2;
```