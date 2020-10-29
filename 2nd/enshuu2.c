/*
 * H8プログラム 
 * LEDを点灯させるプログラム。
 * 
 * 演習2
 * LEDの点灯パターンを一定時間ごとに変更させる。
 * 変更は4パターンとする。
 * 無駄時間の挿入にはmyWait関数を使用する。
 * 作成例
 */

#include<h8/reg3067.h>
#include<mes2.h>

void myWait(){
  int idle1 ,idle2;
  for(idle1 = 0; idle1 < 1000; idle1++){
    for(idle2= 0; idle2 < 1000; idle2++);
  }
}

int main(void){
  PBDDR = 0xff;
    
  while(1){
    PBDR = 0xfe;
    myWait();
    
    PBDR = 0xfd;
    myWait();
    
    PBDR = 0xfb;
    myWait();
    
    PBDR = 0xf7;
    myWait();
  }; 

  return(0);
} 