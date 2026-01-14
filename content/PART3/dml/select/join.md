# 조인 

- 내부 조인
- 외부 조인


# 내부 조인

ON에 명시된 조건을 만족하는 테이블의 두 레코드를 연결합니다.

```sql
...
FROM 테이블1 JOIN 테이블2
ON 테이블1.컬럼 = 테이블2.컬럼;
```

다음은 상품들을 카테고리의 이름과 함께 조회하고 싶을 때 적합한 명령문입니다.

```sql
SELECT *
FROM Products JOIN Categories 
ON Products.CategoryID = Categories.CategoryID;
```

<!-- 
아래 내용을 테이블로 표현하는 것이 일단 좋아보임. 
조인은 특히 테이블을 고려해보아야 함.
-->
```
<상품> [상품ID, 상품명, 카테고리ID]
<카테고리> [카테고리ID, 카테고리 이름]

결과: [상품ID, 상품명, 카테고리ID, 카테고리 이름]
```


# 외부 조인

- LEFT JOIN
- RIGHT JOIN
- FULL JOIN


LEFT JOIN은 ON에 명시된 조건을 만족하는 두 테이블의 각 레코드들을 연결합니다. 그리고 왼쪽 테이블에서 조건을 만족하지 않는 레코드들을 포함시킵니다. 이렇게 포함된 레코드들은 오른쪽 테이블에 속한 컬럼값으로 NULL을 가집니다.

```sql
...
FROM 테이블1 LEFT JOIN 테이블2
ON 테이블1.컬럼 = 테이블2.컬럼;
```

다음은 고객별로 주문 상세정보를 알고싶을 때 적합한 명령문입니다. 주문이 없는 고객도 포함시킵니다.

```sql
SELECT *
FROM Customers LEFT JOIN Orders 
ON Customers.CustomerID = Orders.CustomerID
```

RIGHT JOIN은 ON에 명시된 조건을 만족하는 두 테이블의 각 레코드들을 연결합니다. 그리고 오른쪽 테이블에서 조건을 만족하지 않는 레코드들을 포함시킵니다. 이렇게 포함된 레코드들은 왼쪽 테이블에 속한 컬럼값으로 NULL을 가집니다.

```sql
...
FROM 테이블1 RIGHT JOIN 테이블2
ON 테이블1.컬럼 = 테이블2.컬럼;
```

FULL JOIN은 내부 조인 결과에 왼쪽 테이블과 오른쪽 테이블에서 ON에 명시된 조건을 만족하지 않는 레코드들도 전부 포함시키는 명령어입니다. 이때 연결로 인해 발생한 레코드상의 추가적인 컬럼들은 NULL 값을 가집니다.

```sql
...
FROM 테이블1 FULL JOIN 테이블2
ON 테이블1.컬럼 = 테이블2.컬럼;
```