# 별칭

명령문을 작성할 때 컬럼과 테이블을 조작자가 원하는 대로 이름(별칭)을 지을 수 있습니다. 기존의 컬럼/테이블의 이름이 길거나 읽기 어려운 경우 별칭을 사용하면 효과적입니다. 


- 컬럼 별칭
- 테이블 별칭


# 컬럼 별칭

```sql
컬럼이름 AS 별칭
```


다음은 CustomerID를 ID, CustomerName를 Customer로 단순화하여 추출하는 명령문입니다

```sql
SELECT CustomerID AS ID, CustomerName AS Customer
FROM Customers;
```


# 테이블 별칭

테이블 별칭은 명령문에서 테이블 이름을 여러번 언급해야 할때 효과적입니다.

사용 방법
```sql
테이블 AS 별칭;
```

테이블 별칭이 없는 경우와 있는 경우 두가지를 비교해봅시다. 별칭이 있는 경우가 더 짧은 문장이라는 것을 알 수 있습니다

```sql
SELECT * FROM customers JOIN orders
ON customers.CustomerID = orders.CustomerID
WHERE customers.City = 'London';
```

```sql
SELECT * FROM customers AS c JOIN orders AS o
ON c.CustomerID = o.CustomerID;
WHERE c.City = 'London';
```