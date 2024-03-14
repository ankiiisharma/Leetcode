#include <iostream>
#include <string>

using namespace std;

string WayTooLong(const string& s) {
  string ans = s[0];
  ans += to_string(s.length() - 2);
  ans += s[s.length() - 1];
  return ans;
}

int main() {
  string s;
  cin >> s;
  string ans = WayTooLong(s);
  cout << ans << endl;
  return 0;
}
