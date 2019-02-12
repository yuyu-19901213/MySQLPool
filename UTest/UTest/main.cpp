﻿#include <iostream>
#include <cstdio>
#include <fstream>
#include <vector>
#include <string>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>

char* substring(char* ch, int pos, int length);

int main()
{
	typedef std::vector<int> VecCount;

	VecCount m_VecCount;
	m_VecCount.push_back(2);
	m_VecCount.push_back(5);

	int iSize = m_VecCount.size();
	for(int i = 0;i < 10;i++)
	{
		int iNum = rand() % iSize;
		std::cout << "iNum = "<< iNum << std::endl;
	}
//	int iNum = rand() % 2;

	//std::cout <<"m_VecCount.at(iNum) = " << m_VecCount.at(iNum)<< std::endl;
	system("pause");

	return 0;
}
/************************************************************************/
/* 字符串截断、拼接
char dest[4];
char src[] = { "123456789" };
strncpy(dest, src + 3, 3);
另一种截断方法
strtok_r
/************************************************************************/

/*
int main()
{	
	int iCount = 9;
	const char* pszName = "KAKA";
	char pszSendName[20];
	sprintf(pszSendName,"%d %s",iCount,pszName);
	std::cout <<"pszSendName = " << pszSendName<< std::endl;
	
	char *dest = substring(pszSendName,0,1);


	char *name = substring(pszSendName,1,4);


	std::cout <<" dest = " <<dest << std::endl;

	std::cout << " name =" << name << std::endl;
	system("pause");
	// prepare file
	/*
	std::ofstream("test.txt") << 1 << ' ' << 2 << '\n';
	std::FILE* f = std::fopen("test.txt", "r");

	std::vector<char> buf(4); // char is trivally copyable
	std::fread(&buf[0], sizeof buf[0], buf.size(), f);

	for (char n : buf)
		std::cout << n;

	std::vector<std::string> buf2; // string is not trivially copyable
	// this would result in undefined behavior
	 //    std::fread(&buf2[0], sizeof buf2[0], buf2.size(), f);
	
	return 0;
}
*/
char* substring(char* ch, int pos, int length)
{
    char* pch = ch;
	
	//定义一个字符指针，指向传递进来的ch地址。  
	char* subch = (char*)calloc(sizeof(char), length + 1);
	
	//通过calloc来分配一个length长度的字符数组，返回的是字符指针。  
	int i;

	//只有在C99下for循环中才可以声明变量，这里写在外面，提高兼容性。  
	pch = pch + pos;

	//是pch指针指向pos位置。  
	for (i = 0; i < length; i++)
	{
		subch[i] = *(pch++);
		//循环遍历赋值数组。  
	}
	 subch[length] = '\0';//加上字符串结束符。  
	   return subch;       //返回分配的字符数组地址。  
 }