# if 문

if
if/else
elseif
ternary


# if


```java
package ifstatements.ifbasic;

public class Main {
  public static void main(String[] args) {
    int age = 20;

    if (age >= 18) {
      System.out.println("Adult");
    }
  }
}

// Adult
```


# if/else

```java
package ifstatements.ifelse;

public class Main {
  public static void main(String[] args) {
    int age = 20;

    if (age >= 18) {
      System.out.println("Adult");
    } else {
      System.out.println("Kids");
    }
  }
}

// Adult
```


# else if

```java
package ifstatements.elseif;

public class Main {
  public static void main(String[] args) {
    int age = 20;

    if (age < 18) {
      System.out.println("Kids");
    } else if (age >= 18 && age < 30) {
      System.out.println("20s");
    } else if (age >= 30 && age < 40) {
      System.out.println("30s");
    } else {
      System.out.println("over 40s");
    }
  }
}

// 20s
```


# ternary operator

```java
package ifstatements.ternaryoperator;

public class Main {
  public static void main(String[] args) {
    int age = 20;

    String isAdult = age >= 18 ? "Adult" : "Kids";

    System.out.println(isAdult);
  }
}

// Adult
```