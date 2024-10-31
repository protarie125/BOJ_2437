#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
vl M;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  M = vl(n);
  for (auto&& m : M) cin >> m;

  sort(M.begin(), M.end());
  auto k = M[0];
  if (k > 1) {
    cout << 1;
    return 0;
  }

  for (auto i = 1; i < n; ++i) {
    if (M[i] > k + 1) {
      cout << k + 1;
      return 0;
    }

    k += M[i];
  }
  cout << k + 1;

  return 0;
}