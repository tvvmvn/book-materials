package z.e0hashmap;

import java.util.Map;
import java.util.Set;
import java.util.HashMap;

public class Main {

  public static void main(String[] args) {

    Map<String, Object> person = new HashMap<String, Object>();
    person.put("name", "John Doe");
    person.put("age", 30);
    person.put("isGoodGuy", true);
    
    System.out.println(person);

    Set<String> keySet = person.keySet();
    
    for (String key : keySet) {
      System.out.println(key + ": " + person.get(key));
    }
   }
}
