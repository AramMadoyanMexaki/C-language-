/* 
   Bitwise operations
 _________________
 & -> And -> Bits are multiplied * 
   9 -> 00001001
   & and
  14 -> 00001110
   ------------
        00001000 -> 8
  _________________

  ~ -> Not -> reverse all bits
    ~9 -> from 00001001 to 11110110 -> 246
  _________________

  | -> Or -> Bits are added +
    5 -> 00000101
    | or
    8 -> 00001000
    ---------------
         00001101 -> 13
  _________________

  ^ -> XOR
    9 -> 00001001
    ^ XOR
    1 -> 00000001
    ---------------
         00001000 -> 8

*/

#include <stdio.h>


int main(void) {
    unsigned char a = 9; // 00001001
    unsigned char b = 1; // 00000001

    unsigned char res = a ^ b; // 8

    printf("%d\n", res);

    return 0;
}