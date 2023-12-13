
#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "abCd";
  int result;
  result = strcmp(s1, s2);
  printf("strcmp(s1, s2) = %d\n", result);
  return 0;
}
