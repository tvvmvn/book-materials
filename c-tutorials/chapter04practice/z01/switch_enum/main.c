#include <stdio.h>

enum Level {
  Beginner,
  Amateur,
  Master
};

int main() {
  enum Level myLevel = Master;

  switch (myLevel) {
    case Beginner:
      printf("Try Hard\n");
      break;
    case Amateur:
      printf("Keep doing\n");
      break;
    case Master:
      printf("Great!\n");
      break;
  }
}

// Great
