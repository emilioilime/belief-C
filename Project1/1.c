#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int returnn(int num)
{
    int amount = 1, number = num, count = 0; //�ȹ����м�λ��������
    while (num != 1)
    {
        num = num / 2;
        amount++;
    }
    while (amount != 0)
    {
        if (number & (1 << (amount - 1)))
        {
            count++;
        }
        amount--;
    }
    return count;

}
int main()
{
    printf("%d", returnn(15));
    return 0;
}