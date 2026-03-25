# 인덱스 생성하기

CREATE INDEX는 인덱스를 생성하는 명령문입니다.

```sql
CREATE INDEX 인덱스_이름 ON 테이블_이름 (컬럼1, 컬럼2, ...);
```

예시)
테이블 <학생>에서 '이름' 컬럼에 대해 인덱스 'idx_name'를 생성하세요.
```sql
CREATE INDEX idx_name ON 학생 (이름);
```


# 인덱스 삭제하기

다음은 인덱스를 삭제하는 DROP INDEX 명령문의 사용법입니다

Syntax
```sql
DROP INDEX 인덱스_이름;
```