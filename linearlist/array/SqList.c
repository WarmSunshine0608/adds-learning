//-----线性表的动态分配顺序存储结构
#include <elementType.h>
#define LIST_INIT_SIZE=100;//线性表存储空间的初始分配量
#define LINSTINCREMENT=10;//线性表存储空间的分配增量
typedef struct{
    ElementType *elem; //存储空间基址
    int length;//当前长度
    int listsize; //当前分配的存储容量，以sizeof(ElementType)为单位
} SqlList;

InitList_Sq (SqlList *L){
  return OK;
}