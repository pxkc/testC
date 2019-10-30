#ifndef TESTCLASS_H
#define TESTCLASS_H
#include <vector>
using namespace std;
class testClass
{
    public:
        testClass();
        bool lookUpInMatrix(int target, vector<vector<int>> array);
        virtual ~testClass();

    protected:

    private:
};

#endif // TESTCLASS_H
