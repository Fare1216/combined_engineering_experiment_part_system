/*
 * H8�v���O���� 
 * LED��_��������v���O�����B
 * 
 * ���K1
 * LED�̓_���p�^�[����ύX������B
 * �ύX��
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void){
  PBDDR = 0xff;
  PBDR = 0xaa; // <- ������ύX

  while(1){};

  return(0);
}

