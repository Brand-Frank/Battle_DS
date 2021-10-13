#pragma once

#ifndef STATIC_LINK_LIST

#include "string.h"
#include "ctype.h"      

#include "stdio.h"    
#include "stdlib.h"   

#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 1000 /* �洢�ռ��ʼ������ */

typedef int Status;           /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef char ElemType;        /* ElemType���͸���ʵ������������������Ϊchar */


/* ���Ա�ľ�̬����洢�ṹ */
typedef struct
{
    ElemType data;
    int cur;  /* �α�(Cursor) ��Ϊ0ʱ��ʾ��ָ�� */
} Component, StaticLinkList[MAXSIZE];


#endif // !STATIC_LINK_LIST
