package z.e0iterator;

import java.util.ArrayList;
import java.util.Iterator;

public class Main {
  public static void main(String[] args) {

    ArrayList<Integer> ages = new ArrayList<Integer>();

    ages.add(12);
    ages.add(18);
    ages.add(20);
    ages.add(22);

    Iterator<Integer> it = ages.iterator();

    while (it.hasNext()) {
      int i = it.next();

      if (i < 18) {
        it.remove();
      }
    }

    System.out.println(ages);
  }
}
