-- '제품(product)' 테이블 생성하기
CREATE TABLE product (
  product_id int AUTO_INCREMENT,
  product_name varchar(100) NOT NULL,
  price int unsigned NOT NULL,
  category varchar(100) NOT NULL,
  sales int unsigned NOT NULL DEFAULT 0,
  PRIMARY KEY(product_id)
)

-- <제품> 테이블에 데이터 삽입하기
INSERT INTO product (product_name, price, category, sales) VALUES ('아메리카노', 2000, '커피', 10);
INSERT INTO product (product_name, price, category, sales) VALUES ('카페라떼', 3000, '커피', 5);
INSERT INTO product (product_name, price, category, sales) VALUES ('바닐라라떼', 3500, '커피', 3);
INSERT INTO product (product_name, price, category, sales) VALUES ('마카롱', 2000, '디저트', 2);
INSERT INTO product (product_name, price, category, sales) VALUES ('치즈케이크', 4000, '디저트', 1);

-- <제품> 테이블로부터 가장 비싼 제품과 가장 싼 제품의 가격을 추출하세요.
SELECT MAX(price), MAX(price) FROM product;

-- <제품> 테이블에 존재하는 제품의 개수 구하기
SELECT COUNT(*) FROM product;

-- <제품> 테이블로부터 총 판매량 구하기
SELECT SUM(sales) FROM product;

-- <제품> 테이블로부터 제품의 평균가 구하기
SELECT AVG(price) FROM product;

-- <제품> 테이블로부터 카테고리별로 제품의 개수 구하기
SELECT category, COUNT(*) FROM product GROUP BY category;

-- <제품> 테이블로부터 카테고리별로 판매량 구하기
SELECT category, SUM(sales) FROM product GROUP BY category;

-- <제품> 테이블로부터 제품의 총 판매량을 추출하세요. 
-- 단 컬럼의 이름을 ‘총판매량'으로 정하세요.
SELECT SUM(sales) AS 총판매량 FROM product;


