/*
 * H8�v���O���� 
 * LED��_��������v���O�����B
 * 
 * LED��_��������B 
 */

#include<h8/reg3067.h>
#include<mes2.h>

int main(void)
{
  PBDDR = 0xff;
  PBDR = 0xf0;

  while(1){};   

  return(0);
}

