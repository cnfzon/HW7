#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr1, * fptr2;  // 宣告指向檔案的指標
    char ch;

    fptr1 = fopen("welcome.txt", "r");  // 開啟可讀取的檔案
    fptr2 = fopen("output.txt", "w");   // 開啟可寫入的檔案

    if ((fptr1 != NULL) && (fptr2 != NULL)) {  // 檢查兩個檔案是否成功開啟
        while ((ch = fgetc(fptr1)) != EOF) {   // 逐字元讀取檔案
            fputc(ch, fptr2);                 // 將讀到的字元寫入目標檔案
        }

        fclose(fptr1);  // 關閉來源檔案
        fclose(fptr2);  // 關閉目標檔案
        printf("檔案拷貝完成!!\n");
    }
    else {
        printf("檔案開啟失敗!!\n");
    }

    system("pause");
    return 0;
}
