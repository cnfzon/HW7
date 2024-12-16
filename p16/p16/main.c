#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTER 13
#define MAX 80

int main(void) {
    FILE* fptr;                  // 宣告檔案指標
    char str[MAX], ch;           // 字元陣列 str 儲存輸入的字串
    int i = 0;

    fptr = fopen("output.txt", "a");  // 以追加模式開啟檔案
    if (fptr == NULL) {
        printf("檔案開啟失敗!!\n");
        return 1;
    }

    printf("請輸入字串，按 ENTER 結束輸入:\n");

    // 循環逐字接收鍵盤輸入，直到按下 Enter 或達到最大長度
    while ((ch = getche()) != ENTER && i < MAX) 
        str[i++] = ch;  // 將輸入字元儲存到陣列中

    putc('\n', fptr);
    fwrite(str, sizeof(char), i, fptr);  // 將字串寫入檔案
    fclose(fptr);  // 關閉檔案
    printf("\n檔案附加完成!!\n");
    system("pause");
    return 0;
}
