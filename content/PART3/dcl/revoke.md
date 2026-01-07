# Revoke

데이터베이스 관리자가 데이터베이스 사용자의 권한을 취소하는 명령어입니다

Syntax
```sql
REVOKE 권한 리스트 ON 개체 FROM 사용자
```


## GRANT OPTION FOR

다른 사용자에게 권한을 부여할 수 있는 권한을 취소합니다

Syntax
```sql
REVOKE GRANT OPTION FOR 권한 리스트 ON 개체 FROM 사용자
```

예제)
```sql
REVOKE GRANT OPTION FOR UPDATE ON 고객 FROM johndoe;
```


## CASCADE

권한을 취소할 때 권한을 부여받았던 사용자가 다른 사용자에게 부여한 권한도 연쇄적으로 취소합니다

Syntax
```sql
REVOKE  권한 리스트 ON 개체 FROM 사용자 CASCADE
```
