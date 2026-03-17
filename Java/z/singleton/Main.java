package z.singleton;


class Connection {
  private static Connection _instance = null;
  private int count = 0;

  public static Connection get() {
    if (_instance == null) {
      _instance = new Connection();
      return _instance;
    }
    return _instance;
  }

  public void count() { 
    count++; 
  }

  public int getCount() { 
    return count; 
  }
}

public class Main {
  public static void main(String[] args) {
    Connection conn1 = Connection.get();
    conn1.count();
    
    Connection conn2 = Connection.get();
    conn2.count();
    
    Connection conn3 = Connection.get();
    conn3.count();

    System.out.print(conn1.getCount());
  }  
}
// 3
