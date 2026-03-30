# DDL - TABLE 

- CREATE TABLE
- ALTER TABLE
- DROP TABLE
- 제약 조건


# CREATE TABLE

테이블을 생성하는 명령문입니다.

```sql
CREATE TABLE 테이블 (
  컬럼1 자료형,
  컬럼2 자료형,
  ....
);
```

예제) '학번(숫자)', '이름(최대 255자)', '주소(최대 255자)' 컬럼으로 구성된 <학생>테이블을 생성하세요.

```sql
CREATE TABLE 학생 (
    학번 int,
    이름 varchar(255),
    주소 varchar(255),
    주민번호 char ?
);
``` 
int: 정수(integer)
varchar: 가변 문자(Variable Character)
char: 불변 문자


# ALTER TABLE

ALTER TABLE문은 테이블의 컬럼을 추가/삭제할 때 사용됩니다.

```sql
ALTER TABLE 테이블명 ADD 컬럼_이름 자료형;
ALTER TABLE 테이블명 DROP COLUMN 컬럼_이름;
```


예제) <학생>테이블에 '이메일(최대 255자)' 컬럼을 추가하세요.
```sql
ALTER TABLE 학생 ADD 이메일 varchar(255);
```

예제)
<학생>테이블에서 '이메일' 컬럼을 삭제하세요.
```sql
ALTER TABLE 학생 DROP COLUMN 이메일;
```


# DROP TABLE

DROP TABLE 문은 테이블을 삭제하는 명령어입니다.

```sql
DROP TABLE 테이블_이름;
```


# 제약 조건 (Constraints)

테이블을 생성 또는 수정할 때 데이터의 무결성을 지키기 위해 다양한 제약 조건을 추가할 수 있습니다. 다음은 제약 조건을 추가하는 명령어입니다.

- PRIMARY KEY
- FOREIGN KEY
- NOT NULL
- UNIQUE
- CHECK
- DEFAULT


```sql
CREATE TABLE 테이블_이름 (
  컬럼1 자료형 제약조건1 제약조건2 ..,
  컬럼2 자료형 제약조건1 제약조건2 ..,
  ...
);
```


# NOT NULL

'NULL 금지' 제약 조건을 추가하는 명령어입니다. 즉 레코드를 삽입할 때 해당 컬럼을 반드시 입력해야 합니다.

예시) 데이터 삽입 시 '학번', '이름'을 필수 입력해야하는 <학생>테이블을 생성하세요.
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

예시) '학번'을 기본키로 가지는 <학생>테이블을 생성하세요.
```sql
CREATE TABLE 학생 (
  학번 int NOT NULL PRIMARY KEY,
  ...
);
```


# FOREIGN KEY

외래키(Foreign Key)를 지정하는 명령어입니다. 참조하는 테이블, 참조키를 함께 작성합니다.

예시) '전공ID'가 <전공>테이블의 기본키인 '전공ID'를 참조하는 <학생>테이블을 생성하세요.
```sql
CREATE TABLE 학생 (
  ...
  전공ID int FOREIGN KEY REFERENCES 전공(전공ID)
);
```

예시) '전공ID'가 <전공>테이블의 기본키인 '전공ID'를 참조하는 <학생>테이블을 생성하세요.
```sql
CREATE TABLE 학생 (
  ...
  전공ID,
  ...
  FOREIGN KEY(전공ID) REFERENCES 전공(전공ID) ON DELETE CASCADE
);
```
ON DELETE CASCADE: 참조 중인 튜플이 삭제되면 여기도 전부 다 삭제되벌임


# CHECK

컬럼 값의 조건을 지정하는 명령어입니다.

예시) <학생>테이블을 생성하세요. 단 '학년'의 값이 1이상 4이하이어야 합니다.
```sql
CREATE TABLE 학생 (
  ...
  학년 int CHECK (학년 >= 1 AND 학년 <= 4)
);
```


# DEFAULT

컬럼의 기본값을 지정하는 명령어입니다. 튜플을 삽입할 때 컬럼 값을 생략하면 기본값이 적용됩니다.

예시) <학생>테이블을 생성하세요. 단 '학년'의 기본값으로 1을 설정하세요.
```sql
CREATE TABLE 학생 (
  ...
  학년 int DEFAULT 1 
);
```

