# User Input

The Scanner class is used to get user input, and it is found in the codejava.util package.

To use the Scanner class, create an object of the class and use any of the available methods found in the Scanner class documentation. In our example, we will use the nextLine() method, which is used to read Strings:

```java
// Import the Scanner class
import codejava.util.Scanner;  

class Main {
  public static void main(String[] args) {
    // Create a Scanner object
    Scanner myObj = new Scanner(System.in);  
    
    // Output
    System.out.println("Enter username");

    // Read user input
    String userName = myObj.nextLine();  

    // Output user input
    System.out.println("Username is: " + userName);  
  }
}
```