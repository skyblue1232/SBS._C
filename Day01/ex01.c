#include <stdio.h>

// ���α׷� ���� - main() �Լ�
int main() {
    // �ּ� - ���α׷� ������ �ۼ��ϴ� 
    //��¹�?
    printf("�ȳ��ϼ���!");

    // ���� ����
    int num = 10;

    char a = 'a';  // ����
    int b, c;      // ������ : 1,2,3,4 ...
    double d;      // �Ǽ��� : 1.5, 2.4 ...

    b = 10;
    c = 20;
    d = 1.25;

    // \n : �ٹٲ�(����)
    // %d : decimal(������),
    //      %5d      : 5ĭ�� �����ؼ� ������ ����
    //      %-5d     : 5ĭ�� �����ؼ� ���� ����
    // %c : charater(����)
    // %f : float(�Ǽ�) , %.n  : �Ҽ��� �Ʒ� n�ڸ����� ���?
    printf("���� a : %c \n", a);
    printf("���� b : %d \n", b);
    printf("���� c : %d \n", c);
    printf("���� d : %.2f \n", d);
    printf("%d", num); 
    




    return 0;
}    
include