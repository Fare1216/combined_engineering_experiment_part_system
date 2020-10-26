#include<stdio.h>

int check(int num){
	int i;
	
	if(num <= 1){
		return(1);
	}
	
	for(i=2;i<num;i++){
		if(num%i == 0) return(1);
	}
	return(0);
}



int main(void){
	
	int input = 100;
	int i = 0;
	
	for(i=2;i<=input;i++){
		if(!check(i)){
			printf("%d ", i);
		}
	}
	
	return(0);
}
