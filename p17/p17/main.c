#include <stdio.h>
#include <stdlib.h>

#define MAX 80

int main(void) {
    FILE* fptr;              // �ɮ׫���
    char str[MAX];           // �s��Ū�����e���r���}�C
    int bytes;               // Ū�����\���r����

    fptr = fopen("output.txt", "r"); // �}���ɮ�
    if (!feof(fptr)) {               // �ˬd�ɮ׬O�_����
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // Ū�����e
        str[bytes] = '\0';           // �[�W�r�굲���Ÿ�
        printf("%s\n", str);         // ��X�ɮפ��e
    }

    fclose(fptr); // �����ɮ�
    system("pause");
    return 0;
}