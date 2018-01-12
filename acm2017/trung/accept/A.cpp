#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int test;
  cin >> test;

  while (test--) {
    int m, n;
    int blue_x[1000];
    int blue_y[1000];
    int red_x[1000];
    int red_y[1000];
    memset(blue_x, 0, sizeof blue_x);
    memset(blue_y, 0, sizeof blue_y);
    memset(red_x, 0, sizeof red_x);
    memset(red_y, 0, sizeof red_y);
    // blue_x.fill(0);
    // red_y.fill(0);
    // blue_y.fill(0);
    // red_x.fill(0);


    vector<int> pos_x;
    vector<int> pos_y;
    vector<int> value;

    char line[1000];
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
      cin >> line;
      for(int j = 0; j < n; j++) {
        if (line[j] != '0') {
          pos_x.push_back(i);
          pos_y.push_back(j);
          value.push_back(line[j]-48);

          if (line[j] == '1') {
            blue_x[i]++;
            blue_y[j]++;
          }
          else {
            red_x[i]++;
            red_y[j]++;
          }
        }
      }
    }

    long count = 0;
    for(int i = 0; i < pos_x.size(); i++) {
      if (value[i] == 1) {  //blue
        count += red_x[pos_x[i]]* red_y[pos_y[i]];
      }
      else {
        count += blue_x[pos_x[i]]* blue_y[pos_y[i]];
      }
    }

    cout << count << "\n";
  }
}

// 00120
// 01210
// 11010
// 01020
// 20121
//
// 00120
// 00430
// 00000
// 00020
// 20240
// 20
