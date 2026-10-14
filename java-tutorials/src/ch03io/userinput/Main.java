package ch03io.userinput;

// Scanner 가져오기
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // 입력값을 저장할 변수
    String name;

    // 스캐너 생성
    Scanner scanner = new Scanner(System.in);

    // 정보 요청
    System.out.print("your name: ");
    // 입력 처리 및 결과 반환
    name = scanner.nextLine();

    // 결과 출력
    System.out.printf("name: %s", name);

    // 스캐너 닫기 (필수)
    scanner.close();
  }
}

// your name: j
// name: j