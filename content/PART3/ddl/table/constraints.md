# 제약 조건 (Constraints)

테이블을 구성하는 데이터의 무결성을 지키기 위해 다양한 제약 조건을 추가할 수 있습니다.

- NOT NULL
- UNIQUE
- PRIMARY KEY
- FOREIGN KEY
- CHECK
- DEFAULT
- CREATE INDEX


```sql
CREATE TABLE 테이블_이름 (
  컬럼1 자료형 제약조건1 제약조건2 ..,
  컬럼2 자료형 제약조건1 제약조건2 ..,
  ...
);
```


# NOT NULL

NULL을 금지하는 제약 조건입니다. 즉 레코드를 삽입/수정할 때 해당 컬럼을 반드시 입력해야 합니다.

예시)
테이블 <학생>의 '학번'과 '이름'에 NULL을 금지합니다.
```sql
CREATE TABLE 학생 (
  학번 int NOT NULL,
  이름 varchar(255) NOT NULL,
  나이 int
);
```


# PRIMARY KEY

기본키(Primary Key)를 지정하는 제약 조건입니다. 테이블은 하나의 기본키를 반드시 가져야 합니다.

예시)
다음 <학생> 테이블의 '학번'은 기본키로 지정되었습니다.
```sql
CREATE TABLE 학생 (
  학번 int NOT NULL PRIMARY KEY,
  ...
);
```


# FOREIGN KEY

외래키(Foreign Key)를 지정하는 제약 조건입니다. 참조하는 테이블, 참조키를 함께 작성합니다.

예시) 테이블 <학생>의 '동아리ID'는 <동아리> 테이블의 기본키인 '동아리ID'를 참조합니다.
```sql
CREATE TABLE 학생 (
  ...
  동아리ID int FOREIGN KEY REFERENCES 동아리(동아리ID)
);
```


# CHECK

컬럼 값의 조건을 지정할 수 있습니다.

예시)
테이블 <학생>의 '학년'은 값이 1이상 4이하이어야 합니다.
```sql
CREATE TABLE 학생 (
  ...
  학년 int CHECK (학년 >= 1 AND 학년 <= 4)
);
```


# DEFAULT

컬럼의 기본값을 설정합니다. 튜플을 삽입할 때 컬럼 값을 생략하면 기본값이 적용됩니다.

예시)
테이블 <학생>에서 '학년'의 기본값을 1로 설정합니다. 
```sql
CREATE TABLE 학생 (
  ...
  학년 int DEFAULT 1 
);
```

