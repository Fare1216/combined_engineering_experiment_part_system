/* 
 * H8�v���O����
 * �X�C�b�`�ɑΉ�����LED��_������v���O�����B
 *
 * �v�b�V���X�C�b�`��4������Ă�����LED��_��������B
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
