#include "testClass.h"

testClass::testClass()
{
    //ctor
}

bool testClass::lookUpInMatrix(int target, vector<vector<int>> array){
    /**�㷨˼��
     *ѡnow = ���Ͻ�,column = array.size() - 1,
     *if now > target����ɾ������
     *if now < target,ɾ����
    **/
    int row = 0, column = array.size() - 1;
    while(row <= array.size() - 1 && column >=0){
        int now = array[row][column];
        if(now == target)
            return true;
        else if(now > target)
            column --;
        else
            row ++;
    }
    return false;
}

testClass::~testClass()
{
    //dtor
}
