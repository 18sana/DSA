# Important C++ Syntax

## Headers (common)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>   // INT_MAX, INT_MIN
using namespace std;
```

## Fast I/O (optional, competitive)

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

## Useful snippets

```cpp
// min / max of two
int mn = min(a, b), mx = max(a, b);

// swap
swap(a, b);

// sort array
sort(arr, arr + n);

// sort vector
sort(v.begin(), v.end());
```

## Compile

```bash
g++ -std=c++17 -Wall -o out file.cpp && ./out
```
