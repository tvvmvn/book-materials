# DISTINCT

DISTINCT는 검색 결과에서 중복을 제거하는 명령어입니다.


# SELECT DISTINCT

지정된 모든 컬럼의 값이 동일한 행을 하나의 중복으로 간주합니다.
```sql
SELECT DISTINCT 컬럼1, 컬럼2, .. FROM 테이블;
```

예제) <학생> 테이블에 존재하는 학년을 구해보세요.
```sql
SELECT DISTINCT 학년 FROM 학생;
```


# DISTINCT와 집계 함수

예제) 사원 테이블에 몇 개의 부서가 있는지 구해보세요.
```sql
SELECT COUNT(DISTINCT 부서ID) FROM 사원
```
