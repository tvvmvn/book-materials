package ch09class04.encapsulation;

class MapService {
  // 위치 정보는 외부에서 접근할 수 없습니다
  private final int lat; // 위도
  private final int lng; // 경도

  public MapService(int lat, int lng) {
    this.lat = lat;
    this.lng = lng;
  }

  // 사용자의 위치 정보를 바탕으로 장소를 추천해줍니다
  public void recommendPlaces() {
    System.out.printf("좌표 [%d, %d]에 따른 추천 장소들: ...", lat, lng);
  }
}

public class Main {
  public static void main(String[] args) {
    MapService map = new MapService(100, 200);

    map.recommendPlaces();
  }
}

// 좌표 [100, 200]에 따른 추천 장소들: ...%