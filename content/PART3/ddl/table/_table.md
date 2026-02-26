# DDL - TABLE 

- CREATE TABLE
- ALTER TABLE
- DROP TABLE


# CREATE TABLE

테이블을 생성하는 문장입니다. 다음은 CREATE TABLE 문의 사용 방법입니다.

```sql
CREATE TABLE 테이블 (
  컬럼1 자료형,
  컬럼2 자료형,
  ....
);
```

예제)
아래는 3개의 컬럼을 가진 테이블 <학생> 생성문입니다.
```sql
CREATE TABLE 학생 (
    학번 int,
    이름 varchar(255),
    주소 varchar(255),
);
```


# ALTER TABLE

ALTER TABLE문은 테이블의 컬럼을 추가/삭제할 때 사용됩니다.

```sql
ALTER TABLE 테이블명 ADD 컬럼_이름 자료형;
ALTER TABLE 테이블명 DROP COLUMN 컬럼_이름;
```


예제)
아래는 테이블 <학생>에 '이메일' 컬럼을 추가하는 문장입니다.
```sql
ALTER TABLE 학생 ADD 이메일 varchar(255);
```

예제)
아래는 테이블 <학생>에서 '이메일' 컬럼을 삭제하는 문장입니다.
```sql
ALTER TABLE 학생 DROP COLUMN 이메일;
```


# DROP TABLE

DROP TABLE 문은 테이블을 삭제하는 명령어입니다.

```sql
DROP TABLE 테이블명;
```