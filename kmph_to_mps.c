#include <stdio.h>
  int main() {
        float kmph, mps;
        scanf("%f", &kmph);
        mps=(kmph*1000) / 3600;
        printf("%.2f",mps);
  }