# DCL

데이터베이스 관리자가 사용자의 권한을 관리하는 명령어입니다. 다음의 권한들을 관리할 수 있습니다

- INSERT
- SELECT
- UPDATE
- DELETE


# GRANT

데이터베이스 관리자가 사용자에게 권한을 부여하는 명령어입니다.

```sql
GRANT 권한 ON 개체 TO 사용자 WITH GRANT OPTION
```
GRANT OPTION: 사용자가 자신이 부여받은 권한을 다른 사용자에게도 부여할 수 있도록 하는 명령어입니다. 선택 사항입니다.


예제)
사용자 '고양이'에게 <생선>테이블에 대한 모든 권한을 부여하세요.
```sql
GRANT ALL ON 생선 TO 고양이
```

예제)
사용자 '고양이'에게 <생선>테이블에 대한 모든 권한과 '고양이'가 자신이 부여받은 그 권한을 다른 사용자들에게 똑같이 부여할수 있는 권한을 부여하세요.
```sql
GRANT ALL ON 생선 TO 고양이 WITH GRANT OPTION;
```


# REVOKE

데이터베이스 관리자가 사용자의 권한을 취소하는 명령어입니다.

```sql
REVOKE 권한 ON 개체 FROM 사용자 CASCADE;
```
CASCADE: 해당 사용자 뿐만 아니라 해당 사용자가 권한을 부여한 다른 사용자들로부터 권한을 회수합니다. 선택 사항입니다.


예제)
사용자 '고양이'로부터 <생선> 테이블에 대한 모든 권한을 취소하세요.
```sql
REVOKE ALL ON 생선 FROM 고양이;
```

예제)
'고양이' 뿐만 아니라 '고양이'가 권한을 부여한 다른 사용자들로부터 <생선> 테이블에 대한 모든 권한을 취소하세요.
```sql
REVOKE ALL ON 생선 FROM 고양이 CASCADE;
```

예제)
'고양이'에게 부여했던 GRANT OPTION을 취소하세요.
```sql
REVOKE GRANT OPTION FOR ALL ON 생선 FROM 고양이;
```

