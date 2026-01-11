# Threads

자바에서 병렬로 작업을 처리하고 싶을 때 Thread를 사용할 수 있습니다.
Thread는 메인 프로그램이 동작하는 동안 뒤에서 맡겨진 작업을 처리합니다.

Thread를 만드는 두가지 방법이 있습니다

- Thread 클래스를 상속하고 run 메소드를 덮어쓰기
- Runnable 인터페이스를 구현하기


첫번째 방법: Thread 클래스를 상속하고 나의 쓰레드로 새롭게 정의합니다.

```java
public class MyThread extends Thread {
  public void run() {
    System.out.println("Thread에서 실행중인 코드");
  }
}


class Main {
  public static void main(String[] args) {
    // Thread 생성
    MyThread thread = new MyThread();
    
    thread.start();

    System.out.println("Thread 밖에서 실행중인 코드");
  }
}
```


두번째 방법: Runnable 인터페이스를 구현한 객체를 Thread의 생성자에 전달합니다.

```java
public class MyRunnable implements Runnable {
  public void run() {
    System.out.println("Thread에서 실행중인 코드");
  }
}

class Main {
  public static void main(String[] args) {
    MyRunnable runnable = new MyRunnable();

    // Thread 생성
    Thread thread = new Thread(runnable);

    thread.start();

    System.out.println("Thread 밖에서 실행중인 코드");
  }
}
```