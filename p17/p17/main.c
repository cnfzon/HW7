#include <stdio.h>
#include <stdlib.h>

#define MAX 80

int main(void) {
    FILE* fptr;              // 檔案指標
    char str[MAX];           // 存放讀取內容的字元陣列
    int bytes;               // 讀取成功的字元數

    fptr = fopen("output.txt", "r"); // 開啟檔案
    if (!feof(fptr)) {               // 檢查檔案是否結尾
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // 讀取內容
        str[bytes] = '\0';           // 加上字串結束符號
        printf("%s\n", str);         // 輸出檔案內容
    }

    fclose(fptr); // 關閉檔案
    system("pause");
    return 0;
}