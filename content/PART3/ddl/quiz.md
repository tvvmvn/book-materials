# CREATE


예제) 이름, 학번, 전공, 성별, 생년월일로 구성된 <학생>테이블을 정의하는 SQL문을 작성하세요. 단 제약 조건은 다음과 같습니다.

- '학번'은 기본키입니다.
- '이름'은 NULL이 올 수 없습니다
- '전공'은 <학과>테이블의 '학과코드'를 참조하는 외래키로 사용됩니다
- <학과>테이블에서 삭제가 일어나면 관련된 튜플들의 '전공'값을 NULL로 만듭니다
- <학과>테이블에서 '학과코드'가 변경되면 '전공' 값도 같은 값으로 변경한다.
- '생년월일'은 1980년 1월 1일 이후의 데이터만 저장할 수 있다


```sql
CREATE TABLE 학생 (
  이름 VARCHAR(15) NOT NULL,
  학번 CHAR(8),
  전공 CHAR(5),
  성별 GENDER,
  생년월일 DATE,
  PRIMARY KEY(학번),
  FOREIGN KEY(전공) REFERENCES 학과(학과코드)
    ON DELETE SET NULL
    ON UPDATE CASCADE,
  CONSTRAINT 생년월일제약 CHECK(생년월일 >= '1980-01-01')
);
```


예제) 다음의 조건을 만족하는 <사원>테이블을 생성해보세요

- '근무지번호'는 <근무지> 테이블의 '근무지번호'를 참조하는 외래키이다.
- <근무지> 테이블에서 '근무지번호가'가 삭제되면 <사원>테이블의 '근무지번호'도 삭제된다.

```sql
CREATE TABLE 사원 (
  사원번호 NUMBER(4) PRIMARY KEY,
  사원명 VARCHAR(10),
  근무지번호 NUMBER(2) FOREIGN KEY REFERENCES 근무지 ON DELETE CASCADE
)
```