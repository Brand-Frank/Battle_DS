#pragma once

#ifndef SEQ_LIST_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20          /* �洢�ռ��ʼ������ */
typedef int ElemType;       /* ElemType���͸���ʵ������������������Ϊint */
typedef struct
{
    ElemType data[MAXSIZE]; /* ���飬�洢����Ԫ�� */
    int length;             /* ���Ա�ǰ���� */
}SqList;

typedef int Status;         /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */




#endif // !SEQ_LIST_H
