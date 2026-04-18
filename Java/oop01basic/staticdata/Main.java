package oop01basic.staticdata;

class Config {
  // 정적 변수 (상수 역할)
  static final String dbUrl = "mydb.com";
}

public class Main {
  public static void main(String[] args) {
    // 클래스로 접근할 수 있습니다.
    System.out.println(Config.dbUrl); 
  }
}

//mydb.com