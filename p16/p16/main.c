#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTER 13
#define MAX 80

int main(void) {
    FILE* fptr;                  // �ŧi�ɮ׫���
    char str[MAX], ch;           // �r���}�C str �x�s��J���r��
    int i = 0;

    fptr = fopen("output.txt", "a");  // �H�l�[�Ҧ��}���ɮ�
    if (fptr == NULL) {
        printf("�ɮ׶}�ҥ���!!\n");
        return 1;
    }

    printf("�п�J�r��A�� ENTER ������J:\n");

    // �`���v�r������L��J�A������U Enter �ιF��̤j����
    while ((ch = getche()) != ENTER && i < MAX) 
        str[i++] = ch;  // �N��J�r���x�s��}�C��

    putc('\n', fptr);
    fwrite(str, sizeof(char), i, fptr);  // �N�r��g�J�ɮ�
    fclose(fptr);  // �����ɮ�
    printf("\n�ɮת��[����!!\n");
    system("pause");
    return 0;
}
