package more.thread02;

// Runnable 구현
class RunnableImpl implements Runnable {
  public void run() {
    System.out.println("스레드 안에서 실행중..");
  }
}

public class Main {
  public static void main(String[] args) {
    // 스레드 생성
    Thread thread = new Thread(new RunnableImpl());

    // 스레드 시작
    thread.start();

    System.out.println("스레드 밖에서 실행중..");
  }
}

// 스레드 밖에서 실행중..
// 스레드 안에서 실행중..