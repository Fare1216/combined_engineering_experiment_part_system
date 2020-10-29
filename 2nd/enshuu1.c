/*
 * H8プログラム 
 * LEDを点灯させるプログラム。
 * 
 * 演習1
 * LEDの点灯パターンを変更させる。
 * 変更例
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void){
  PBDDR = 0xff;
  PBDR = 0xaa; // <- ここを変更

  while(1){};

  return(0);
}

