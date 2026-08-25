package chapter04practice.z01.entermembers;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    String[] members = new String[3];

    Scanner scanner = new Scanner(System.in);

    System.out.println("enter members:");
    for (int i = 0; i < members.length; i++) {
      members[i] = scanner.nextLine();
    } 

    System.out.println("members: " + String.join(", ", members));

    scanner.close();
  }
}

// enter members:
// john
// jane
// mary
// members: john, jane, mary