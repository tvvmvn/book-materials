# 제약 조건 (Constraints)

테이블을 생성/수정할 때 데이터의 무결성을 지키기 위해 다양한 제약 조건을 추가할 수 있습니다. 다음은 제약 조건을 추가하는 명령어입니다.

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

'NULL 금지' 제약 조건을 추가하는 명령어입니다. 즉 레코드를 삽입할 때 해당 컬럼을 반드시 입력해야 합니다.

예시)
데이터 삽입 시 '학번', '이름'을 필수 입력해야하는 <학생>테이블을 생성하세요.
```sql
CREATE TABLE 학생 (
  학번 int NOT NULL,
  이름 varchar(255) NOT NULL,
  생년월일 date,
  ..
);
```


# PRIMARY KEY

기본키(Primary Key)를 지정하는 명령어입니다.

예시)
'학번'을 기본키로 가지는 <학생>테이블을 생성하세요.
```sql
CREATE TABLE 학생 (
  학번 int NOT NULL PRIMARY KEY,
  ...
);
```


# FOREIGN KEY

외래키(Foreign Key)를 지정하는 명령어입니다. 참조하는 테이블, 참조키를 함께 작성합니다.

예시) 
'전공ID'가 <전공>테이블의 기본키인 '전공ID'를 참조하는 <학생>테이블을 생성하세요.
```sql
CREATE TABLE 학생 (
  ...
  전공ID int FOREIGN KEY REFERENCES 전공(전공ID)
);
```


# CHECK

컬럼 값의 조건을 지정하는 명령어입니다.

예시)
<학생>테이블을 생성하세요. 단 '학년'의 값이 1이상 4이하이어야 합니다.
```sql
CREATE TABLE 학생 (
  ...
  학년 int CHECK (학년 >= 1 AND 학년 <= 4)
);
```


# DEFAULT

컬럼의 기본값을 지정하는 명령어입니다. 튜플을 삽입할 때 컬럼 값을 생략하면 기본값이 적용됩니다.

예시)
<학생>테이블을 생성하세요. 단 '학년'의 기본값으로 1을 설정하세요.
```sql
CREATE TABLE 학생 (
  ...
  학년 int DEFAULT 1 
);
```

