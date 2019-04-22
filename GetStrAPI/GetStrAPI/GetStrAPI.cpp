// GetStrAPI.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


//函数功能：返回字符串在一个字符后的全部字符
//函数返回：字符地址
//Strstr：待查找字符串
//c：待查找字符
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


//函数功能：查找字符在字符串中出现的位置
//函数返回：该字符的地址
//Strstr：待查找字符串
//c：待查找字符
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

