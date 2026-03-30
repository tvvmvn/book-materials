# 뷰(View) 생성하기

뷰는 SQL문의 조회 결과를 기반으로 생성되는 가상의 테이블입니다. 자주 조회하는 조회 결과를 뷰로 생성하면 편리합니다.

```sql
CREATE VIEW 뷰_이름 AS 
SELECT 컬럼1, 컬럼2, ...
```

예제) 테이블 <학생>으로부터 <1학년 학생들> 뷰를 생성하세요.
```sql
CREATE VIEW [1학년 학생들] AS 
SELECT * FROM 학생 
WHERE 학년 = 1
```