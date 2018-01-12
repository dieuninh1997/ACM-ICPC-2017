#include <iostream>
using namespace std;

    //Up, Right, Down, Left
int direction(int x0, int y0, int x, int y) {
  if (x > x0) {
    return 2;
  }
  else if (x < x0) {
    return 4;
  }
  else {
    if (y > y0) {
      return 1;
    }
    else {
      return 3;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int x[10000];
  int y[10000];
  int count;

  int pdirect = 0;
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    int direct = i == 0?
      direction(0, 0, x[i], y[i]):
      direction(x[i-1], y[i-1], x[i], y[i]);

    if (pdirect != 0) {
      count+= direct-pdirect == 1 || direct - pdirect == -3;
    }
    pdirect = direct;
  }
  cout << count;
}
