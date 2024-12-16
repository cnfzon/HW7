#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* in, * out;       // 檔案指標
    int cnt;              // 記錄 fscanf 成功讀取的單詞數
    char str[100];        // 用來儲存讀取的單詞

    in = fopen("welcome.txt", "r");    // 開啟來源檔案
    out = fopen("output.txt", "w");    // 開啟目標檔案

    // 檢查檔案是否成功開啟
    if (in == NULL || out == NULL) {
        printf("檔案開啟失敗!!\n");
        return 1;
    }

    // 逐單詞讀取並寫入檔案
    while (!feof(in)) {
        cnt = fscanf(in, "%s", str);    // 讀取一個單詞
        if (cnt > 0) {
            fprintf(out, "%s\n", str);  // 將單詞寫入目標檔案並換行
        }
    }

    // 關閉檔案
    fclose(in);
    fclose(out);

    printf("檔案處理完成!!\n");
    system("pause");
    return 0;
}
