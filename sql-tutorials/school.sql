-- '학과(department)'테이블 생성하기
CREATE TABLE department (
  dept_id int AUTO_INCREMENT,
  dept_name varchar(100) NOT NULL,
  phone_number varchar(100) NOT NULL,
  PRIMARY KEY(dept_id)
)

-- '학생(student)'테이블 생성하기
CREATE TABLE student (
  student_id int AUTO_INCREMENT,
  student_name varchar(100) NOT NULL,
  grade int CHECK (grade BETWEEN 1 AND 4) DEFAULT 1 NOT NULL,
  dept_id int NOT NULL,
  hobby varchar(100),
  PRIMARY KEY(student_id),
  FOREIGN KEY(dept_id) REFERENCES department(dept_id)
)

-- <학과> 테이블에 데이터 삽입하기 
INSERT INTO department (dept_name, phone_number) VALUES ('수학과', '1234-5678');
INSERT INTO department (dept_name, phone_number) VALUES ('물리학과', '2345-6789');
INSERT INTO department (dept_name, phone_number) VALUES ('체육학과', '3456-7890');

-- <학생> 테이블에 데이터 삽입하기
INSERT INTO student (student_name, grade, dept_id, hobby) VALUES ('김모군', 1, 3, '축구');
INSERT INTO student (student_name, grade, dept_id, hobby) VALUES ('이모군', 1, 2, '독서');
INSERT INTO student (student_name, grade, dept_id, hobby) VALUES ('박모군', 2, 1, '영화감상');
INSERT INTO student (student_name, grade, dept_id, hobby) VALUES ('최모군', 2, 2, '게임');
INSERT INTO student (student_name, grade, dept_id, hobby) VALUES ('정모군', 3, 3, '축구');

-- <학생> 테이블로부터 이름이 '이모군'인 학생 조회하기
SELECT * FROM student WHERE student_name = '이모군';

-- <학생> 테이블로부터 1학년 학생들만 조회하기
SELECT * FROM student WHERE grade = 1;

-- <학생> 테이블로부터 취미가 '축구'인 1학년 학생들 조회하기
SELECT * FROM student WHERE grade = 1 AND hobby = '축구';

-- <학생> 테이블로부터 취미가 '축구' 또는 '게임'인 학생들 조회하기
SELECT * FROM student WHERE hobby IN ('축구', '게임')

-- <학생> 테이블로부터 이름이 '김'으로 시작하는 학생들 조회하기
SELECT * FROM student WHERE student_name LIKE '김%';

-- <학생> 테이블로부터 이름을 기준으로 알파벳순으로 조회하기
SELECT * FROM student ORDER BY student_name;

-- <학생>, <학과> 테이블을 활용해 학생들을 그들이 속한 학과 정보와 함께 조회하기
SELECT * FROM student JOIN department 
ON student.dept_id = department.dept_id;

-- <학생>, <학과> 테이블을 조인한 결과로부터 몇 개의 컬럼만 조회합니다.
SELECT student_id, student_name, department.dept_id, dept_name 
FROM student JOIN department 
ON student.dept_id = department.dept_id;

-- <학생>, <학과> 테이블을 조인해보세요. 
-- 이때 학생 테이블의 별칭을 s, 학과 테이블의 별칭을 d로 지정해보세요. 
-- 단 AS는 생략하세요.
SELECT * FROM student s JOIN department d
ON s.dept_id = d.dept_id