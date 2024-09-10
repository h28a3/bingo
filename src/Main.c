#include"header.h"

int main(void){
	unsigned short i, j, count = 1;
	unsigned short flag_ver, flag_hor, flag_dia1, flag_dia2;	//ビンゴ判定用変数

	Initialization();
	print_bingo(0);

	while(1){	//無限ループ開始
		print_bingo(count);

		flag_dia1 = 0;	//斜めのビンゴ判定用変数初期化
		flag_dia2 = 0;
		for(i = 0; i < BINGO_SIZE; i++){
			flag_ver = 0;	//縦のビンゴ判定用変数初期化
			flag_hor = 0;	//横のビンゴ判定用変数初期化
			for(j = 0; j < BINGO_SIZE; j++){
				if(bingo[i][j] == 0)
					flag_hor++;		//横のラインについての変数
				if(bingo[j][i] == 0)
					flag_ver++;		//縦のラインについての変数
				if(bingo[i][j] == 0 && i == j)
					flag_dia1++;		//左上~右下の斜めのラインについての変数
				if(bingo[i][j] == 0 && i + j == BINGO_SIZE - 1)
					flag_dia2++;	//右上~左下の斜めのラインについての変数
			}
			if(flag_ver == BINGO_SIZE || flag_hor == BINGO_SIZE || flag_dia1 == BINGO_SIZE || flag_dia2 == BINGO_SIZE){
				printf("bingo!!\n");
				return 0;	//ビンゴになっていたら終了
			}
		}
		count++;
	}
}
