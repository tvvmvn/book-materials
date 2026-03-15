package oop01basic.encapsulation;

class MapService {
  // not accessible from outside
  private final int x;
  private final int y;

  public MapService(int x, int y) {
    this.x = x;
    this.y = y;
  }

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

