# DDL - TABLE 

- CREATE TABLE
- ALTER TABLE
- DROP TABLE


# CREATE TABLE

테이블을 생성하는 명령문입니다.

```sql
CREATE TABLE 테이블 (
  컬럼1 자료형,
  컬럼2 자료형,
  ....
);
```

예제)
'학번(숫자)', '이름(최대 255자)', '주소(최대 255자)' 컬럼으로 구성된 <학생>테이블을 생성하세요.

```sql
CREATE TABLE 학생 (
    학번 int,
    이름 varchar(255),
    주소 varchar(255),
);
``` 
int: 정수(integer)
varchar: 가변 문자(Variable Character)


# ALTER TABLE

ALTER TABLE문은 테이블의 컬럼을 추가/삭제할 때 사용됩니다.

```sql
ALTER TABLE 테이블명 ADD 컬럼_이름 자료형;
ALTER TABLE 테이블명 DROP COLUMN 컬럼_이름;
```


예제)
<학생>테이블에 '이메일(최대 255자)' 컬럼을 추가하세요.
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