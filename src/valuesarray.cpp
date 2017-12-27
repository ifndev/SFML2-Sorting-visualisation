#include "valuesarray.h"
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

valuesarray::valuesarray(int lenght,int max):lenght(lenght), max(max)
{
    vector<int> table;
    max++;
}

void valuesarray::Set(int i, int v){
    table.at(i) = v;
}

int valuesarray::Get(int i){
    return table.at(i);
}

void valuesarray::Generate(){
    table.resize(lenght, 0);
    srand(time(NULL));
    for(int i = 0; i < lenght; i++){
        table.at(i) = rand() % max + 1;

    }
}

void valuesarray::InsertSort()
{
    for(int i = 1; i < lenght; i++)
    {
    int x = table.at(i);
    int j = i;
    while(j>0 && table.at(j-1)>x)
        {
            table.at(j) = table.at(j-1);
            j--;
        }
        table.at(j) = x;
    }

}

valuesarray::~valuesarray()
{
    //dtor
}
