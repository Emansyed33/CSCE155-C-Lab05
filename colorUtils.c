#include<math.h>
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
int toGrayScaleLightness(int r, int g, int b){ 
  return ((max(r,g,b)+ min(r,g,b))/2);

}
int toGrayScaleLuminosity(int r, int g, int b){
  return round(0.21*r+0.72*g+0.07*b);
}
