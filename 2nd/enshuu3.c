/*
 * H8�v���O���� 
 * LED��_��������v���O�����B
 * 
 * ���K3
 * �X�C�b�`�������ƑΉ�����LED���_������v���O�����B
 * �쐬��
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void){
	P5DDR = 0xf0;
	PBDDR = 0xff;
		
	while(1){
		if((P5DR & 0x01) == 0x00){
			PBDR &= 0xfe;
		}
		else{
			PBDR |= 0x01;
		}
		
		if((P5DR & 0x02) == 0x00){
			PBDR &= 0xfd;
		}
		else{
			PBDR |= 0x02;
		}
		
		if((P5DR & 0x04) == 0x00){
			PBDR &= 0xfb;
		}
		else{
			PBDR |= 0x04;
		}
		
		if((P5DR & 0x08) == 0x00){
			PBDR &= 0xf7;
		}
		else{
			PBDR |= 0x08;
		}
	}; 

  return(0);
}

