#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr;      // ���V�ɮת�����
    char ch;         // �Ψ��x�s�C��Ū�����r��
    int count = 0;   // �p��r���ƶq���ܼ�

    fptr = fopen("welcome.txt", "r");  // �}���ɮ�
    if (fptr != NULL) {                // �ˬd�ɮ׬O�_���\�}��
        while ((ch = fgetc(fptr)) != EOF) {  // �v�r��Ū��
            printf("%c", ch);                // �L�X�r��
            count++;                         // �p�ƾ��[ 1
        }
        fclose(fptr);                        // �����ɮ�
        printf("\n�ɮצ@�� %d �Ӧr��\n", count); // �L�X�r����
    }
    else {
        printf("�ɮ׶}�ҥ���!!\n");  // �}���ɮץ��Ѯɪ��T��
    }

    system("pause");
    return 0;
}