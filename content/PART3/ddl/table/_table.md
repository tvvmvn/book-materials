# CREATE TABLE

테이블을 생성하는 문장입니다.
다음은 CREATE TABLE 문의 사용 방법입니다.

Syntax
```sql
CREATE TABLE 테이블 (
    컬럼1 자료형,
    컬럼2 자료형,
    컬럼3 자료형,
   ....
);
```


아래는 5개의 컬럼을 가진 테이블 Employee 생성문입니다

```sql
CREATE TABLE Employee (
    PersonID int,
    LastName varchar(255),
    FirstName varchar(255),
    Address varchar(255),
    City varchar(255)
);
```


# ALTER TABLE

ALTER TABLE문은 테이블의 컬럼을 추가/수정/삭제할 때 사용됩니다.

- 컬럼 추가
- 컬럼 삭제
- 컬럼 수정



다음은 컬럼 추가 방법입니다

```sql
ALTER TABLE 테이블명 ADD 컬럼명 자료형;
```


아래는 테이블 Customers에 Email 컬럼을 추가하는 문장입니다.

```sql
ALTER TABLE Customers ADD Email varchar(255);
```


다음은 컬럼을 삭제하는 방법입니다

```sql
ALTER TABLE 테이블명 DROP COLUMN 컬럼명;
```

아래는 테이블 Custromers에서 Email 컬럼을 삭제하는 문장입니다.

```sql
ALTER TABLE Customers DROP COLUMN Email;
```


다음은 컬럼의 이름을 수정하는 방법입니다.

```sql
ALTER TABLE 테이블명 RENAME COLUMN 컬럼명 TO 새컬럼명;
```


# DROP TABLE

DROP TABLE 문은 테이블을 삭제하는 명령어입니다.


```sql
DROP TABLE 테이블명;
```