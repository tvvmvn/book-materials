package userinput;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("What's your name?");
    String name = scanner.nextLine();

    System.out.println("How old are you?");
    int age = scanner.nextInt();

    System.out.printf("name: %s, age: %d", name, age);

    scanner.close();
  }
}

// What's your name?
// john
// How old are you?
// 30
// name: john, age: 30%  