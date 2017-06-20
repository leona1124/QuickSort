// QuickSort.cpp : 定义控制台应用程序的入口点。
//
// first created by leona: 2016/9/21

#include "stdafx.h"
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;
//typedef uint32_t uint64_t[2];

typedef signed char int8_t;
typedef short int16_t;
typedef long int32_t;
//typedef int32_t int64_t[2];

void sQuickSort_uint32(uint32_t* pArr, uint16_t wSortStr, uint16_t wSortEnd);
void sQuickSort_uint16(uint16_t* pArr, uint16_t wSortStr, uint16_t wSortEnd);
void sQuickSort_uint8(uint8_t* pArr, uint16_t wSortStr, uint16_t wSortEnd);

uint16_t TabTestArr[20] = 
{
	50,  30,  80,  70, 120,  90, 630, 510,  70,  0,
	10, 109, 203, 405, 809,1200,1061,2055,  0, 300
};

uint8_t TabTestArr8[20] = 
{
	6,8,1,5,2,3,7,8,12,54,
	87,82,81,6,62,24,75,57,19,83
};

int _tmain(int argc, _TCHAR* argv[])
{

	sQuickSort_uint16(TabTestArr,10,19);
	sQuickSort_uint8(TabTestArr8,10,19);
	return 0;
}


void sQuickSort_uint32(uint32_t* pArr, uint16_t wSortStr, uint16_t wSortEnd)
{
	uint16_t i,j;
	uint32_t dwArrPivot;
	uint32_t dwExchngTmp;

	dwArrPivot = *(pArr + wSortEnd);
	i = wSortStr - 1;

	if(wSortStr <= wSortEnd)
	{
	    for(j = wSortStr; j < wSortEnd; j++)
	    {
	    	if(*(pArr + j) <= dwArrPivot)
		    {
			    i++;
			    dwExchngTmp = *(pArr + j);
			    *(pArr + j) = *(pArr + i);
			    *(pArr + i) = dwExchngTmp;
		    }
	    }

		i++;
	    dwExchngTmp = *(pArr + wSortEnd);
	    *(pArr + wSortEnd) = *(pArr + i);
	    *(pArr + i) = dwExchngTmp;


		if((i-1) > 0)
		{
			sQuickSort_uint32(pArr,wSortStr,i-1);
		}
		
		if((i+1) > 0)
		{
			sQuickSort_uint32(pArr,i+1,wSortEnd);
		}
	}
}

void sQuickSort_uint16(uint16_t* pArr, uint16_t wSortStr, uint16_t wSortEnd)
{
	uint16_t i,j;
	uint16_t wArrPivot;
	uint16_t wExchngTmp;

	wArrPivot = *(pArr + wSortEnd);
	i = wSortStr - 1;

	if(wSortStr <= wSortEnd)
	{
	    for(j = wSortStr; j < wSortEnd; j++)
	    {
	    	if(*(pArr + j) <= wArrPivot)
		    {
			    i++;
			    wExchngTmp = *(pArr + j);
			    *(pArr + j) = *(pArr + i);
			    *(pArr + i) = wExchngTmp;
		    }
	    }

		i++;
	    wExchngTmp = *(pArr + wSortEnd);
	    *(pArr + wSortEnd) = *(pArr + i);
	    *(pArr + i) = wExchngTmp;


		if((i-1) > 0)
		{
			sQuickSort_uint16(pArr,wSortStr,i-1);
		}
		
		if((i+1) > 0)
		{
			sQuickSort_uint16(pArr,i+1,wSortEnd);
		}
	}
}

void sQuickSort_uint8(uint8_t* pArr, uint16_t wSortStr, uint16_t wSortEnd)
{
	uint16_t i,j;
	uint8_t bArrPivot;
	uint8_t bExchngTmp;

	bArrPivot = *(pArr + wSortEnd);
	i = wSortStr - 1;

	if(wSortStr <= wSortEnd)
	{
	    for(j = wSortStr; j < wSortEnd; j++)
	    {
	    	if(*(pArr + j) <= bArrPivot)
		    {
			    i++;
			    bExchngTmp = *(pArr + j);
			    *(pArr + j) = *(pArr + i);
			    *(pArr + i) = bExchngTmp;
		    }
	    }

		i++;
	    bExchngTmp = *(pArr + wSortEnd);
	    *(pArr + wSortEnd) = *(pArr + i);
	    *(pArr + i) = bExchngTmp;


		if((i-1) > 0)
		{
			sQuickSort_uint8(pArr,wSortStr,i-1);
		}
		
		if((i+1) > 0)
		{
			sQuickSort_uint8(pArr,i+1,wSortEnd);
		}
	}
}

