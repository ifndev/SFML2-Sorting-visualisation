#ifndef valuesarray_H
#define valuesarray_H
#include <vector>


class valuesarray
{
    public:
        valuesarray(int lenght, int max);
        void Generate();
        void Set(int i, int v);
        int Get(int i);
        virtual ~valuesarray();
        void InsertSort();

    protected:

    private:
        int max;
        int lenght;
        std::vector<int> table;

};

#endif // valuesarray_H
