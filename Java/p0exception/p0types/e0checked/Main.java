package p0exception.p0types.e0checked;

import java.io.FileInputStream;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    // It can be build now
    try {
      FileInputStream file = new FileInputStream("foo.txt");
    } catch (IOException e) {
        System.err.println("I/O 오류 발생: " + e.getMessage());
        e.printStackTrace();
    }
  }
}
