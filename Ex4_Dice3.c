#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) {
    int sum=0;
    srand((unsigned int)time(NULL)); // 現在時刻の情報で初期化
    printf("Rolling the dice...\n");
    for(int i = 0; i < 2; i++) {
        // 1から6までの乱数を発生
        int num = rand() % 6 + 1;
        sum=sum+num;
        printf("Die %d: %d\n",i+1,num);
        
    }
    printf("Total value: %d\n",sum);
    if(sum>7){
        printf("You won\n");
    }
    else{
        printf("You lost\n");
    }
    
    return 0;
}
