#pragma once

#ifndef LINK_LIST_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>     
#include <stdlib.h>  
#include <math.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;/* ElemType���͸���ʵ������������������Ϊint */

typedef struct Node
{
    ElemType data;
    struct Node* next;
}Node;
typedef struct Node* LinkList; /* ����LinkList */


#endif // !LINK_LIST_H
