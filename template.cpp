#include <bits/stdc++.h>

#define fo(i, n) for (i = 0; i < n; i++)
#define PI 3.1415926535897932384626
typedef int32_t i32;
typedef int64_t i64;

// using namespace std;
using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::multimap;
using std::multiset;
using std::pair;
using std::set;
using std::string;
using std::vector;

i32 randint(i32 l, i32 u)
{
    return l + (rand() % u);
}

template <typename T>
void readarray(T *arr, size_t l)
{
    i32 i;
    fo(i, l)
    {
        std::cin >> arr[i];
    }
}
template <typename T>
vector<T> readvector(size_t l)
{
    vector<T> vec;
    size_t i;
    T a;
    for (i = 0; i < l; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    return vec;
}
template <typename T>
void readmatrix(i32 rows, i32 columns, std::vector<std::vector<T>> &matrix)
{
    i32 num;
    i32 i, j;
    i32 arr[columns];
    fo(i, rows)
    {
        matrix[i] = std::vector<i32>(columns);
        fo(j, columns)
        {
            cin >> num;
            matrix[i][j] = num;
        }
    }
}

template <typename T>
void printarray(T *arr, size_t l, std::string sep = " ")
{
    size_t i;
    fo(i, l)
    {
        if (i == l - 1)
        {
            std::cout << arr[i];
        }
        else
        {
            std::cout << arr[i] << sep;
        }
    }
    std::cout << std::endl;
}

template <typename T>
void printvector(std::vector<T> vec, std::string sep = " ")
{
    size_t i;
    for (i = 0; i < vec.size(); i++)
    {
        if (i == vec.size() - 1)
        {
            std::cout << vec[i];
        }
        else
        {
            std::cout << vec[i] << sep;
        }
    }
    std::cout << std::endl;
}
template <typename T>
void display(T x)
{
    cout << x << endl;
}
template <typename T, typename U>
void display(T x, U y)
{
    cout << x << " " << y << endl;
}
std::string solve()
{
    i32 i, j, k, a, b, c;
    return "0";
}

int main()
{
    i32 n_test_cases = 1;
    // cin >> n_test_cases;
    while (n_test_cases--)
    {
    }
    return 0;
}