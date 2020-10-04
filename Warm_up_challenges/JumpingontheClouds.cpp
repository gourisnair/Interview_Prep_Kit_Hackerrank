#include<bits/stdc++.h>
using namespace std;
int  jumpingOnClouds(int c[], int n) {
  int k = 0, i = 0, count = 0;

  while(i < n-1) {
    if(c[i+2] == 0) {
      count++;
      i+=2;
    } else {
      i++;
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int c[n];
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  int result = jumpingOnClouds(c, n);
  cout << result;
}
