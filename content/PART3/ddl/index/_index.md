# 인덱스 생성하기

CREATE INDEX는 인덱스를 생성하는 명령문입니다

다음은 사용법입니다.
```sql
CREATE INDEX 인덱스명 ON 테이블명 (컬럼1, 컬럼2, ...);
```

예시)
아래는 테이블 Person에서 LastName 컬럼에 대해 인덱스'idx_lastname'를 생성하는 명령문입니다
```sql
CREATE INDEX idx_lastname ON Persons (LastName);
```


# 인덱스 삭제하기

다음은 인덱스를 삭제하는 DROP INDEX 명령문의 사용법입니다

Syntax
```sql
DROP INDEX index_name;
```