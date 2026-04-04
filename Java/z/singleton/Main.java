package z.singleton;


class Connection {
  private static Connection _instance = null;
  // 
  private int count = 0;

  public static Connection get() {
    // 인스턴스를 한번만 생성하도록 보장합니다.
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
    // conn1, conn2, conn3은 결국 같은 객체입니다.
    // (변수가 메모리 상에서 같은 곳을 가리킵니다)
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
