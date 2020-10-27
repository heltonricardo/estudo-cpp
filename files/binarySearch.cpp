#include <iostream>

using namespace std;

int rbs(int n, int *v, int s, int e) {
  if (s > e) return -1;
  int m = (s + e) / 2;
  if (v[m] == n) return m;
  if (v[m] < n) return rbs(n, v, m + 1, e);
  return rbs(n, v, s, m - 1);
}

int binarySearch(int vet[], int length, int search) {
   return rbs(search, vet, 0, length);
}

int main(void) {
  int i, vet[] = {0, 2, 4, 8, 16, 32, 64, 128, 256};
  int length = sizeof(vet) / sizeof(vet[0]);

  cout << binarySearch(vet, length, 128) << endl;

  return 0;
}
