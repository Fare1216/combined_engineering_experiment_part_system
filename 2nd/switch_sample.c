/* ex10-1.c
 * �X�C�b�`�ɑΉ�����LED��_������v���O����
 * [�[�q�̐ڑ�]
 *  (1)P5_0�`P5_3��Push Switch�[�q��ڑ�����
 *  (2)PB0�`PB3��LED�[�q��ڑ�����
 * [�v���O����]
 *   �ȉ��̃v���O�������쐬���悤�B
 *   �EPush Switch4�����ׂĉ����Ă����LED4���_������
 *   �E����ȊO�̊Ԃ�LED4����������
 *   �ȉ��́uX�v�̕��������������ăv���O�������������悤�B
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void)
{
  P5DDR = 0xf0 ; //�|�[�g5����͗p�ɐݒ�i0�`3�j
  PBDDR = 0xff ; //�|�[�gB���o�͗p�ɐݒ�i0�`3�j

  while(1){
    //����P5_0�`P5_3��Push Switch�������ꂽ��APB0�`PB3��LED��ON�ɂ���B
    if(P5DR == 0xf0){
      PBDR = 0xf0;
    }
    //�����łȂ���΁APB0�`PB3��LED��OFF�ɂ���B
    else{
      PBDR = 0xff;
    }
  }
  return 0;
}
