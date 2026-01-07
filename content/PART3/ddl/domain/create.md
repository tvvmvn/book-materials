# Create domain

```sql
CREATE DOMAIN 직위 VARCHAR2(10) 
  DEFAULT '팀원'
  CONSTRAINT VALID-직위 CHECK(
    VALUE IN ('팀원', '팀장', '대표')
  );
```