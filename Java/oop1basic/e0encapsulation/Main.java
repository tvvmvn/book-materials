package oop1basic.e0encapsulation;

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

