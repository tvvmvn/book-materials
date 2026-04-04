package z.encapsulation;

class MapService {
  // x, y는 외부에서 접근할 수 없습니다
  private final int x;
  private final int y;

  public MapService(int x, int y) {
    this.x = x;
    this.y = y;
  }

  // 사용자의 좌표를 바탕으로 장소를 추천해줍니다
  public void recommendPlaces() {
    System.out.printf("Places based on [%d, %d]", x, y);
  }
}

public class Main {
  public static void main(String[] args) {
    MapService map = new MapService(100, 200);

    map.recommendPlaces();
  }
}

// Places based on [100, 200]%