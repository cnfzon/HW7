#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* in, * out;       // �ɮ׫���
    int cnt;              // �O�� fscanf ���\Ū���������
    char str[100];        // �Ψ��x�sŪ�������

    in = fopen("welcome.txt", "r");    // �}�Ҩӷ��ɮ�
    out = fopen("output.txt", "w");    // �}�ҥؼ��ɮ�

    // �ˬd�ɮ׬O�_���\�}��
    if (in == NULL || out == NULL) {
        printf("�ɮ׶}�ҥ���!!\n");
        return 1;
    }

    // �v���Ū���üg�J�ɮ�
    while (!feof(in)) {
        cnt = fscanf(in, "%s", str);    // Ū���@�ӳ��
        if (cnt > 0) {
            fprintf(out, "%s\n", str);  // �N����g�J�ؼ��ɮרô���
        }
    }

    // �����ɮ�
    fclose(in);
    fclose(out);

    printf("�ɮ׳B�z����!!\n");
    system("pause");
    return 0;
}
