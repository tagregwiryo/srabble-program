#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int hitung_nilai(char word[]){
	
	int wordLength = strlen(word), hasil = 0;
	
	for(int i = 0 ; i < wordLength ; i++){
		if(isalpha(word[i])){
			word[i] = tolower(word[i]);
			hasil = hasil + points[word[i] - 'a'];
		}else{
			continue;
		}
		
	}
		
	return hasil;
}

int main(void){
	
	char word1[100000],word2[100000];
	int score1,score2;
	
	printf("Player 1: ");
	scanf("%s", word1);
	printf("Player 2: ");
	scanf("%s", word2);
	
	score1 = hitung_nilai(word1);
	score2 = hitung_nilai(word2);
	
	if(score1 > score2){
		printf("Player 1 wins!");
	}else if(score2 > score1){
		printf("Player 2 wins!");
	}else{
		printf("It's a draw!");
	}
	
	return 0;
}