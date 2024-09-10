#include"header.h"

void print_bingo(int count){
	unsigned short  input, i, j;
	if(count > 0){
		printf("%d個目:",count);
		scanf("%hu",&input);	//キーボードからの入力受付
	}
	for(i = 0; i < BINGO_SIZE; i++){
		for(j = 0; j < BINGO_SIZE; j++){
			if(input == bingo[i][j])
				bingo[i][j] = 0;	//入力値がビンゴ表に含まれていれば0にする
			printf("%d\t",bingo[i][j]);
		}
		printf("\n");
	}
}
