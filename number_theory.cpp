#include <bits/stdc++.h>
// Taken From https://www.geeksforgeeks.org/c-program-to-check-prime-number/
bool is_prime(int64_t n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int64_t i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int32_t gcd(int32_t a, int32_t b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

double distance(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
// C++ program to answer queries
// of nCr in O(1) time.
// #include <bits/stdc++.h>
#define ll int64_t
const int N = 1000001;
using namespace std;

// array to store inverse of 1 to N
ll factorialNumInverse[N + 1];

// array to precompute inverse of 1! to N!
ll naturalNumInverse[N + 1];

// array to store factorial of first N numbers
ll fact[N + 1];

// Function to precompute inverse of numbers
void InverseofNumber(ll p)
{
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
// Function to precompute inverse of factorials
void InverseofFactorial(ll p)
{
    factorialNumInverse[0] = factorialNumInverse[1] = 1;

    // precompute inverse of natural numbers
    for (int i = 2; i <= N; i++)
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}

// Function to calculate factorial of 1 to N
void factorial(ll p)
{
    fact[0] = 1;

    // precompute factorials
    for (int i = 1; i <= N; i++)
    {
        fact[i] = (fact[i - 1] * i) % p;
    }
}

// Function to return nCr % p in O(1) time
ll nCr(ll N, ll R, ll p = 1000000007)
{
    // n C r = n!*inverse(r!)*inverse((n-r)!)
    ll ans = ((fact[N] * factorialNumInverse[R]) % p * factorialNumInverse[N - R]) % p;
    return ans;
}

// Driver Code
// int main()
// {
//     // Calling functions to precompute the
//     // required arrays which will be required
//     // to answer every query in O(1)
//     ll p = 1000000007;
//     InverseofNumber(p);
//     InverseofFactorial(p);
//     factorial(p);

//     // 1st query
//     ll N = 15;
//     ll R = 4;
//     cout << Binomial(N, R, p) << endl;

//     // 2nd query
//     N = 20;
//     R = 3;
//     cout << Binomial(N, R, p) << endl;

//     return 0;
// }

// ===
void fill_sieve_of_eratosthenes(vector<bool> &sieve, int32_t len)
{
    sieve.resize(len + 1);
    std::fill(sieve.begin(), sieve.end(), true);
    sieve[1] = false;
    sieve[0] = false;
    for (int i = 2; i <= len; i++)
    {
        if (sieve[i] && (int64_t)i * i <= len)
        {
            for (int j = i * i; j <= len; j += i)
                sieve[j] = false;
        }
    }
}
int erasthonenes_driver()
{
    vector<bool> is_prime;
    fill_sieve_of_eratosthenes(is_prime, 10000000);
    int32_t i, count = 0;
    for (i = 1; i <= 10000000; i++)
    {
        cout << std::boolalpha;
        if (is_prime[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

// template <typename T>
int32_t fast_pow(int64_t a, int64_t b, int32_t MOD)
{
    int32_t result = 1;
    while (b)
    {
        if (b % 2)
        {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}
int main(int argc, char const *argv[])
{
    cout << fast_pow(254141451, 1154001402, 1000000007) << endl;
    return 0;
}
