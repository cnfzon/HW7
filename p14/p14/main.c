#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr;      // 指向檔案的指標
    char ch;         // 用來儲存每次讀取的字元
    int count = 0;   // 計算字元數量的變數

    fptr = fopen("welcome.txt", "r");  // 開啟檔案
    if (fptr != NULL) {                // 檢查檔案是否成功開啟
        while ((ch = fgetc(fptr)) != EOF) {  // 逐字元讀取
            printf("%c", ch);                // 印出字元
            count++;                         // 計數器加 1
        }
        fclose(fptr);                        // 關閉檔案
        printf("\n檔案共有 %d 個字元\n", count); // 印出字元數
    }
    else {
        printf("檔案開啟失敗!!\n");  // 開啟檔案失敗時的訊息
    }

    system("pause");
    return 0;
}