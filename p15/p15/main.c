#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr1, * fptr2;  // �ŧi���V�ɮת�����
    char ch;

    fptr1 = fopen("welcome.txt", "r");  // �}�ҥiŪ�����ɮ�
    fptr2 = fopen("output.txt", "w");   // �}�ҥi�g�J���ɮ�

    if ((fptr1 != NULL) && (fptr2 != NULL)) {  // �ˬd����ɮ׬O�_���\�}��
        while ((ch = fgetc(fptr1)) != EOF) {   // �v�r��Ū���ɮ�
            fputc(ch, fptr2);                 // �NŪ�쪺�r���g�J�ؼ��ɮ�
        }

        fclose(fptr1);  // �����ӷ��ɮ�
        fclose(fptr2);  // �����ؼ��ɮ�
        printf("�ɮ׫�������!!\n");
    }
    else {
        printf("�ɮ׶}�ҥ���!!\n");
    }

    system("pause");
    return 0;
}
