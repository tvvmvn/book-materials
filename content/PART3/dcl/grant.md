# Grant

데이터베이스 관리자가 데이터베이스 사용자에게 권한을 부여하는 명령어입니다


Syntax
```sql
GRANT 권한 리스트 ON 개체 TO 사용자
```
권한 종류: ALL, SELECT, INSERT, DELETE, UPDATE


예제)
```sql
GRANT ALL ON 고객 TO johndoe
```

사용자 ID가 'johndoe'인 사람에게 <고객>테이블에 대한 모든 권한을 부여하는 DCL문입니다


## Grant option

Syntax
```sql
GRANT 권한리스트 ON 개체 TO 사용자 WITH GRANT OPTION;
```

```sql
GRANT ALL ON 고객 TO johndoe WITH GRANT OPTION;
```

사용자 ID가 'johndoe'인 사람에게 <고객>테이블에 대한 모든 권한과 다른 사람에게 권한을 부여할 수 있는 권한까지 부여하는 DCL문입니다