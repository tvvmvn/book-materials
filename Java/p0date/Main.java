package p0date;

import java.util.Date;

public class Main {
  public static void main(String[] args) {
    
    /*
     * UTC (GMT)
     * KST = UTC + 9
     */

    int exp = 86400000; // one day

    // the number of milliseconds since January 1, 1970, 00:00:00 GMT
    System.out.println(System.currentTimeMillis());
    
    // represents the time at which it was allocated (KST)
    System.out.println(new Date(0)); // Thu Jan 01 09:00:00 KST 1970
    System.out.println(new Date(exp)); // Fri Jan 02 09:00:00 KST 1970

    System.out.println(new Date()); 
    System.out.println(new Date(System.currentTimeMillis())); 
    System.out.println(new Date(System.currentTimeMillis() + exp)); 
    
    System.out.println(new Date().getTime());
    System.out.println(new Date().getTime() + exp);
  }
}

