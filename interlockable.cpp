bool interlockable(unsigned long long a, unsigned long long b) {
  return ((a & b) == 0) ? true : false;
}
