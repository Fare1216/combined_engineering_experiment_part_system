/* 
 * H8プログラム
 * スイッチに対応してLEDを点灯するプログラム。
 *
 * プッシュスイッチが4つ押されていたらLEDを点灯させる。
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void){
  P5DDR = 0xf0;
  PBDDR = 0xff;

  while(1){
    if(P5DR == 0xf0){
      PBDR = 0xf0;
    }
    else{
      PBDR = 0xff;
    }
  }
  return 0;
}
