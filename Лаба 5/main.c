#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[9]={88,112,6467,325,878,3,77,8,99}; //������������� �������
    //����� ��������� �������� ���������
    printf("%d %d %d\n%d %d %d\n%d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
    //������� � ���� ������� ��������

    int m1[2][2] = {{1, 2}, {1, 1}}; //������������� ������� 1
    int m2[2][2] = {{3,1}, {0,2}}; //������������� �������� 2
    int m12[2][2]; //������� ����������

    //�������� ���������� �������������� �������
    m12[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
    m12[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
    m12[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
    m12[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];

    printf("\n%d %d \n%d %d", m12[0][0], m12[0][1], m12[1][0], m12[1][1]);

}
