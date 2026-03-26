# 캡슐화

자바를 통해 구현한 캡슐화 코드입니다.
객체가 사용자의 요청을 처리하기 위한 모든 필요한 모든 코드들을 가지고 있습니다.
사용자는 그저 요청만 하면 됩니다.

<!-- 멤버 변수들은 또한 외부에서 접근할 수 없습니다. -->


```java
// Immutable Object
class MapService {
  // your crds
  private final int x;
  private final int y;

  public MapService(int x, int y) {
    this.x = x;
    this.y = y;
  }

  public void recommendPlaces() {
    // logic based on x, y
    System.out.println("place list here..");
  }
}

public class Main {
  public static void main(String[] args) {
    MapService map = new MapService(100, 200);

    map.recommendPlaces();
  }
}
```