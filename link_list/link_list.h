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

#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node
{
    ElemType data;
    struct Node* next;
}Node;
typedef struct Node* LinkList; /* 定义LinkList */


#endif // !LINK_LIST_H
