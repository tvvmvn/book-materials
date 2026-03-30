# GROUP BY

GROUP BY 명령어를 추가해서 레코드 그룹을 대상으로 연산을 할 수도 있습니다.

```sql
SELECT 집계_함수 FROM 테이블 
GROUP BY 컬럼 
```


예제) <제품> 테이블에서 카테고리별로 가장 비싼 제품을 조회하세요.
```sql
SELECT 카테고리, MAX(가격) FROM 제품
GROUP BY 카테고리
```


예제) <제품>에서 카테고리 별 제품의 개수를 조회하세요.
```sql
SELECT 카테고리, COUNT(*) FROM 제품
GROUP BY 카테고리
```


예제) 테이블 <제품>으로부터 카테고리별 제품 판매량을 조회하세요.
```sql
SELECT 카테고리, SUM(판매량) FROM 제품
GROUP BY 카테고리
```


예제) 테이블 <제품>으로부터 카테고리별 제품의 평균가격을 조회하세요.
```sql
SELECT 카테고리, AVG(가격) FROM 제품
GROUP BY 카테고리
```


# HAVING

그룹을 필터링하는 조건절

```sql
SELECT 집계_함수 FROM 테이블 
GROUP BY 컬럼 
HAVING 그룹_필터링_조건
```


예제) 테이블 <제품>에서 카테고리 별로 제품의 수가 3개 이상인 카테고리의 정보만 조회하세요.
```sql
SELECT 카테고리, COUNT(*) FROM 제품
GROUP BY 카테고리 
HAVING COUNT(*) >= 3;
```
