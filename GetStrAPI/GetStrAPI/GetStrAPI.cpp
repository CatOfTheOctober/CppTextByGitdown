// GetStrAPI.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


//�������ܣ������ַ�����һ���ַ����ȫ���ַ�
//�������أ��ַ���ַ
//Strstr���������ַ���
//c���������ַ�
char *GetStrstr(char *Strstr, char c)
{
    char *Psz = NULL;
    Psz = Strstr;

    while ( *Psz  != 0)
    {
        if ( *Psz == c )
        {
            return Psz;
        }
        Psz++;
    }
    return NULL;
}


//�������ܣ������ַ����ַ����г��ֵ�λ��
//�������أ����ַ��ĵ�ַ
//Strstr���������ַ���
//c���������ַ�
char *GetStrchr(char *Strchr, char c)
{
    char *Psz = NULL;
    Psz = Strchr;

    while (*Psz != 0)
    {
        if (*Psz == c)
        {
            return (char *)Psz;
        }
        Psz++;
    }
    return NULL;

}


int _tmain(int argc, _TCHAR* argv[])
{
    char szTest1[] = { "asdfasd" };
    char sTest2 = 'd';
    char *pTest = NULL;

    printf("%08x\r\n", GetStrstr(szTest1, sTest2));

    /*puts(GetStrstr(szTest1, sTest2));*/

    pTest = GetStrchr(szTest1, sTest2);
    printf("%c\r\n",*pTest);
    printf("%08x", pTest);

	return 0;
}

