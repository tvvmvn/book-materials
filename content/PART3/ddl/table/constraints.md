# 제약 조건 (Constraints)

테이블을 구성하는 데이터의 무결성을 지키기 위해 제약 조건을 추가할 수 있습니다.

- NOT NULL
- UNIQUE
- PRIMARY KEY
- FOREIGN KEY
- CHECK
- DEFAULT
- CREATE INDEX


```sql
CREATE TABLE table_name (
    column1 datatype constraint1 constraint2 ..,
    ....
);
```


# NOT NULL

값이 없음(NULL)을 허용하지 않는 제약 조건입니다.

예시)
테이블 <Persons>의 ID, LastName, FirstName은 NULL일 수 없습니다. 
```sql
CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255) NOT NULL,
    Age int
);
```


# PRIMARY KEY

기본키(Primary Key)를 지정하는 제약 조건입니다. 테이블은 하나의 기본키를 반드시 가져야 합니다.

예시)
다음 <Persons> 테이블의 ID는 기본키로 지정되었습니다.
```sql
CREATE TABLE Persons (
    ID int NOT NULL PRIMARY KEY,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int
);
```


# FOREIGN KEY

외래키(Foreign Key)를 지정하는 제약 조건입니다. 참조하는 테이블의 기본키와 함께 작성합니다.

예시) 테이블 <Orders>의 PersonID는 <Persons>테이블의 PersonID를 참조합니다.
```sql
CREATE TABLE Orders (
    OrderID int NOT NULL PRIMARY KEY,
    OrderNumber int NOT NULL,
    PersonID int FOREIGN KEY REFERENCES Persons(PersonID)
);
```


# CHECK

컬럼 값의 조건을 지정할 수 있습니다.

예시)
테이블 <Persons>의 Age 컬럼은 값이 18이상이어야 합니다.
```sql
CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int CHECK (Age>=18)
);
```


# DEFAULT

컬럼의 기본값을 설정합니다. 만약 튜플이 삽입될 때 값을 지정한다면 덮어씁니다.

예시)
테이블 <Persons>에서 City의 기본값을 Sandes로 설정합니다. 
```sql
CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int,
    City varchar(255) DEFAULT 'Sandnes'
);
```

