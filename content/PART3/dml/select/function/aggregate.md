# 집합 함수

주로 GROUP BY (HAVING) 명령어와 함께 쓰이며 그룹을 대상으로 여러 연산을 수행할 수 있습니다. 집합 함수는 NULL값을 무시합니다(COUNT(*) 제외)

```sql
SELECT 그룹함수 GROUP BY 컬럼 HAVING 그룹 필터링 조건
```

- MIN() 
- MAX() 
- COUNT()
- SUM()
- AVG()


# MIN(), MAX()

레코드들로부터 제시한 컬럼의 최소값과 최대값을 구하는 함수입니다.

다음은 테이블 Products를 대상으로 상품의 최저가를 구하는 명령문입니다

```sql
SELECT MAX(Price) FROM Products;
```


# COUNT()

주어진 컬럼을 포함한 레코드의 개수를 세는 함수입니다.

다음은 테이블 Products의 총 레코드의 개수를 구하는 명령문입니다

```sql
SELECT COUNT(*) FROM Products;
```

COUNT 에서 *(와일드카드) 대신 컬럼을 지정하면 지정된 컬럼이 NULL값이 레코드는 제외합니다.

ProductName이 NULL값인 레코드들을 제외한 레코드들을 추출합니다

```sql
SELECT COUNT(ProductName) FROM Products;
```


다음은 국가별 고객의 수를 알고싶을 때 적절한 명령문입니다.

```sql
SELECT Country, COUNT(CustomerID) FROM Customers
GROUP BY Country;
```


다음은 국가별 고객의 수를 알고싶을 때 적절한 명령문입니다. 단 고객의 수가 10명 이상인 정보만 조회합니다

```sql
SELECT Country, COUNT(Country) FROM Customers
GROUP BY Country HAVING COUNT(Country) > 10;
```


# SUM()

레코드들로부터 주어진 컬럼의 합을 구하는 함수입니다.

다음은 OrderDetails에서 총 주문수량을 구하는 명령문입니다

```sql
SELECT SUM(Quantity)
FROM OrderDetails;
```


# AVG()

레코드들로부터 주어진 컬럼의 평균을 구하는 함수입니다.

다음은 테이블 Products로부터 제품의 평균 가격을 구하는 명령문입니다

```sql
SELECT AVG(Price)
FROM Products;
```

