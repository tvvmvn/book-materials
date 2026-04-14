package userinput;

// import
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // info
    String name;

    // create a scanner
    Scanner scanner = new Scanner(System.in);

    // gathering
    System.out.print("your name: ");
    name = scanner.nextLine();

    // print info
    System.out.printf("name: %s", name);

    // close scanner
    scanner.close();
  }
}

// your name: j
// name: j