#include <iostream>
#include <vector>
#include <testClass.h>
using namespace std;

int main()
{
    vector<vector<int>> vec;
    vec = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    for(int i = 0; i < vec.size(); i ++){
        for(int j = 0; j < vec.size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    testClass test;
    cout<<test.lookUpInMatrix(4, vec)<<endl;
    cout << "Hello world!" << endl;
    return 0;

}
