-- '학과(department)'테이블 생성하기
CREATE TABLE department (
  dept_code char(2),
  dept_name varchar(100) UNIQUE NOT NULL,
  phone_number varchar(100) NOT NULL,
  PRIMARY KEY(dept_code)
);

-- '학생(student)'테이블 생성하기
CREATE TABLE student (
  student_number char(3),
  student_name varchar(100) NOT NULL,
  grade int CHECK (grade BETWEEN 1 AND 4) DEFAULT 1 NOT NULL,
  dept_code char(3) NOT NULL,
  hobby varchar(100),
  PRIMARY KEY(student_number),
  FOREIGN KEY(dept_code) REFERENCES department(dept_code)
  ON UPDATE CASCADE
  ON DELETE CASCADE
);

-- <학과> 테이블에 데이터 삽입하기 
INSERT INTO department (dept_code, dept_name, phone_number) VALUES ('10', '수학과', '1234-5678');
INSERT INTO department (dept_code, dept_name, phone_number) VALUES ('20', '물리학과', '2345-6789');
INSERT INTO department (dept_code, dept_name, phone_number) VALUES ('30', '체육학과', '3456-7890');

-- <학생> 테이블에 데이터 삽입하기
INSERT INTO student (student_number, student_name, grade, dept_code, hobby) VALUES ('100', '김모군', 1, '30', '축구');
INSERT INTO student (student_number, student_name, grade, dept_code, hobby) VALUES ('200', '이모군', 1, '20', '독서');
INSERT INTO student (student_number, student_name, grade, dept_code, hobby) VALUES ('300', '박모군', 2, '10', '영화감상');
INSERT INTO student (student_number, student_name, grade, dept_code, hobby) VALUES ('400', '최모군', 2, '20', '게임');
INSERT INTO student (student_number, student_name, grade, dept_code, hobby) VALUES ('500', '정모군', 3, '30', '축구');

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
ON student.dept_code = department.dept_code;

-- <학생>, <학과> 테이블을 조인한 결과로부터 몇 개의 컬럼만 조회합니다.
SELECT student_number, student_name, department.dept_code, dept_name 
FROM student JOIN department 
ON student.dept_code = department.dept_code;

-- <학생>, <학과> 테이블을 조인해보세요. 
-- 이때 학생 테이블의 별칭을 s, 학과 테이블의 별칭을 d로 지정해보세요. 
-- 단 AS는 생략하세요.
SELECT * FROM student s JOIN department d
ON s.dept_code = d.dept_code;