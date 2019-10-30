#include <iostream>
#include <vector>
using namespace std;


bool Find1(int target, vector<vector<int> > array) {
    /**�㷨˼�룺
     **ѡnow = ���Ͻ�,column = array.size() - 1,
     **if now > target����ɾ������
     **if now < target,ɾ����
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
int main()
{
    vector<vector<int>> vec;
    vec = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
//    for(int i = 0; i < vec.size(); i ++){
//        for(int j = 0; j < vec.size(); j++){
//            cout<<vec[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    cout<<Find1(4, vec)<<endl;
    cout << "Hello world!" << endl;
    return 0;

}
