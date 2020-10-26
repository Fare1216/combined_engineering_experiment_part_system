/* ex10-1.c
 * スイッチに対応してLEDを点灯するプログラム
 * [端子の接続]
 *  (1)P5_0～P5_3にPush Switch端子を接続する
 *  (2)PB0～PB3にLED端子を接続する
 * [プログラム]
 *   以下のプログラムを作成しよう。
 *   ・Push Switch4個をすべて押している間LED4個が点灯する
 *   ・それ以外の間はLED4個が消灯する
 *   以下の「X」の部分を書き換えてプログラムを完成しよう。
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void)
{
  P5DDR = 0xf0 ; //ポート5を入力用に設定（0～3）
  PBDDR = 0xff ; //ポートBを出力用に設定（0～3）

  while(1){
    //もしP5_0～P5_3のPush Switchが押されたら、PB0～PB3のLEDをONにする。
    if(P5DR == 0xf0){
      PBDR = 0xf0;
    }
    //そうでなければ、PB0～PB3のLEDをOFFにする。
    else{
      PBDR = 0xff;
    }
  }
  return 0;
}
