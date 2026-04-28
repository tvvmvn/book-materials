package more.userinput;

// Scanner 가져오기
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    String name;

    // 스캐너 생성
    Scanner scanner = new Scanner(System.in);

    // 정보 요청
    System.out.print("your name: ");
    // 입력을 처리하고 결과를 반환합니다
    name = scanner.nextLine();

    // 정보 출력
    System.out.printf("name: %s", name);

    // 스캐너 닫기
    scanner.close();
  }
}

// your name: j
// name: j