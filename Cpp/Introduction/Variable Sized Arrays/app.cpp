#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> readArr(int arrSize);
vector <vector <int>> readMatrix(int numRows);
vector <int> readQuery();
vector <vector<int>> readAllQueries(int numQueries);
void printResult(const vector <vector <int>> &matrix, const vector <vector <int>> &queries, int numQueries);

int main() {
    int numRows, numQueries;
    cin >> numRows >> numQueries;

    vector <vector<int>> matrix = readMatrix(numRows);
    vector <vector<int>> queries = readAllQueries(numQueries);
    printResult(matrix, queries, numQueries);

    return 0;
}
vector <int> readArr(int arrSize)
{
    vector <int> vec;

    for(int i = 0; i < arrSize; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    return vec;
}
vector <vector <int>> readMatrix(int numRows)
{
    vector <vector<int>> matrix;

    for (int i = 0; i < numRows; i++)
    {
        int arrSize;
        cin >> arrSize;
        matrix.push_back(readArr(arrSize));
    }

    return matrix;
}
vector <int> readQuery() 
{
    vector <int> que;

    for (int i = 0; i < 2; i++) {
        int element;
        cin >> element;
        que.push_back(element);
    }

    return que;
}
vector <vector<int>> readAllQueries(int numQueries)
{
    vector <vector<int>> queries;

    for (int i = 0; i < numQueries; i++) {
        queries.push_back(readQuery());
    }

    return queries;
}
void printResult(const vector <vector <int>> &matrix, const vector <vector <int>> &queries, int numQueries)
{
    for (int i = 0; i < numQueries; i++)
    {
        cout << matrix[queries[i][0]][queries[i][1]] << endl;
    }
}
