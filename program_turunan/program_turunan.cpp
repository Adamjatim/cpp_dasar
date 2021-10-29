#include <stdlib.h>
#include <time.h>
#include <iostream>
 
int main() {
  int *a, *b, *c, *d;
  a = (int *)malloc(sizeof(int));
  b = (int *)malloc(sizeof(int));
  c = (int *)malloc(sizeof(int));
  d = (int *)malloc(sizeof(int));
 
  // input bisa ganjil bisa genap, input > 0 input <= 300 biar gak lelet.
  int input = 136;
  
  // star random
  srand(time(0));
 
  // loop dan logic disini
  do {
    if (input % 2 == 0 && input > 8 && input <= 300) {
      if((*a * *b) == input && (*d * *c) == input && (*a + *b) != (*c + *d)) {
        break;
      } else {
        int aa = rand() % input;
        if (aa != 0) {
          *a = aa;
        } else {
            continue;
        }
 
        int bb = rand() % input+1;
        if (bb != 0) {
          *b = bb;
        } else {
            continue;
        }
 
        int cc = rand() % input+1;
        if (cc != 0) {
          *c = cc;
        } else {
            continue;
        }
 
        int dd = rand() % input;
        if (dd != 0) {
          *d = dd;
        } else {
            continue;
        }
      }
    }
    else if((*a * *b) == input && (*d * *c) == input) {
      break;
    } else if(input % 2 != 0 && input > 7 && input <= 300) {
      int aa = rand() % input;
      if (aa != 0) {
        *a = aa;
      } else {
        continue;
      }
      
      int bb = rand() % input+1;
      if (bb != 0) {
        *b = bb;
      } else {
        continue;
      }
 
      int cc = rand() % input+1;
      if (cc != 0) {
        *c = cc;
      } else {
        continue;
      }
 
      int dd = rand() % input;
      if (dd != 0) {
        *d = dd;
      } else {
        continue;
      }
    } else {
      // ganti dengan:
      // else if(input > 300) {
      //   blah.. blah.. blah..
      // }
      // pakai factorian kalau ada pengecualian
      break;
    }
    
  } while (true);
 
  printf("%d = %d * %d = %d * %d\n", input, *a, *b, *c, *d);
  free(a);
  free(b);
  free(c);
  free(d);
 
  return 0;
}