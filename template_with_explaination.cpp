#include <bits/stdc++.h>
using namespace std;

// Macros for frequently used types and operations
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REPD(i, n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'

// Type aliases for containers
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using si = set<int>;
using mii = map<int, int>;
using umii = unordered_map<int, int>;

// Constants
const int INF = 1e9 + 5;
const ll LINF = 1e18 + 5;
const int MOD = 1e9 + 7;

// Debugging tools
#define DEBUG(x) cerr << #x << " = " << x << endl;

//The #define DEBUG(x) cerr << #x << " = " << x << endl; macro is used to simplify the process of debugging by printing the value of a variable along with its name. it will print "x = value"
//Using cerr ensures that the debug output doesn't mix with the program's standard output, which can be important in competitive programming and other contexts where the output format is crucial.

//g++ -DDEBUG_MODE your_program.cpp -o your_program
//Define DEBUG_MODE when compiling to enable debug output:

template<typename T>
void debug_vector(const vector<T>& v) {
    cerr << "[";
    for (const auto& elem : v) {
        cerr << elem << " ";
    }
    cerr << "]" << endl;
}

template<typename T>
void debug_matrix(const vector<vector<T>>& mat) {
    cerr << "[";
    for (const auto& row : mat) {
        debug_vector(row);
    }
    cerr << "]" << endl;
}

// Utility functions
template<typename T>
void print_vec(const vector<T>& v) {
    for (const T& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

template<typename T>
void print_matrix(const vector<vector<T>>& mat) {
    for (const auto& row : mat) {
        for (const T& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Fast input-output
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // inka matlab ke input kise output ke liye wait nahi karenge
    // pehle sare input lenge fir sare output ayenge irrespective of 
    // ke pehle kya likha hai they won't wait for earch other
}


// GCD and LCM
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    fast_io();
    
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        // Your code here
        
        // Example usage of debugging tools
        int n;
        cin >> n;
        vi arr(n);
        REP(i , n) {
            cin >> arr[i];
        }
        
        // Debug vector
        DEBUG(n);
        debug_vector(arr);
        
        // Print vector
        print_vec(arr);
    }

    return 0;
}
