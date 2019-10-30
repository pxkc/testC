#include "testClass.h"

testClass::testClass()
{
    //ctor
}

bool testClass::lookUpInMatrix(int target, vector<vector<int>> array){
    /**算法思想
     *选now = 右上角,column = array.size() - 1,
     *if now > target，则删除该行
     *if now < target,删除列
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
