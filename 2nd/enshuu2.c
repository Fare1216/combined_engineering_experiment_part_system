/*
 * H8�v���O���� 
 * LED��_��������v���O�����B
 * 
 * ���K2
 * LED�̓_���p�^�[������莞�Ԃ��ƂɕύX������B
 * �ύX��4�p�^�[���Ƃ���B
 * ���ʎ��Ԃ̑}���ɂ�myWait�֐����g�p����B
 * �쐬��
 */

#include<h8/reg3067.h>
#include<mes2.h>

void myWait(){
	int idle1 ,idle2;
  for(idle1 = 0; idle1 < 1000; idle1++){
		for(idle2= 0; idle2 < 1000; idle2++);
  }
}

int main(void)
{
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

