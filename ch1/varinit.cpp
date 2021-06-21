int main() {
  int a = 10;
  {
    int b = a;
  }

  const int c = 11;
  int d = c;
  c = a;
}
