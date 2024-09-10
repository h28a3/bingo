#include"header.h"

void Initialization(void){
	unsigned short i, j, rand1, rand2, temp;
	for(i = 0; i < N; i++)
			for(j = 0; j < M; j++)
				src[i][j] = M * i + j + 1;		//ビンゴ生成源行列の初期化(1行目は1~15,2行目は16~30,...)

	srand((int)time(NULL));		//実行毎にビンゴ表を変えるための処理

	for(i = 0; i < 20; i++){		//ビンゴ生成源ランダム入れ替え
		for(j = 0; j < BINGO_SIZE; j++){
			rand1 = rand() % M;		//ランダムに入れ替える場所を選択(0<=rand1<M)
			rand2 = rand() % M;		//ランダムに入れ替える場所を選択(0<=rand2<M)
			temp = src[j][rand1];
			src[j][rand1] = src[j][rand2];
			src[j][rand2] = temp;
		}
	}
}
