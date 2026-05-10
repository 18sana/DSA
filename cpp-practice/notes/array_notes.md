# Array Notes

## Declaration

```cpp
int arr[100];
int n;
cin >> n;
for (int i = 0; i < n; i++) cin >> arr[i];
```

## Common patterns

| Pattern | Idea |
|---------|------|
| Linear scan | Single pass for sum, min, max, count |
| Two pointers | Sorted array pairs, remove duplicates in-place |
| Prefix sum | `prefix[i] = prefix[i-1] + arr[i]` for range sums |
| Frequency | `freq[arr[i]]++` when value range is small |

## Practice checklist

### basics/

- [ ] `array_input_output.cpp`
- [ ] `array_sum.cpp`
- [ ] `largest_element.cpp`
- [ ] `smallest_element.cpp`
- [ ] `reverse_array.cpp`
- [ ] `count_even_odd.cpp`

### searching/

- [ ] `linear_search.cpp`
- [ ] `frequency_count.cpp`

### sorting/

- [ ] `bubble_sort.cpp`
- [ ] `selection_sort.cpp`
- [ ] `sort_stl.cpp`

### manipulation/

- [ ] `move_zeros_to_end.cpp`
- [ ] `second_largest.cpp`
- [ ] `remove_duplicates.cpp`
- [ ] `rotate_array.cpp`

### patterns/

- [ ] `prefix_sum_basic.cpp`
- [ ] `two_pointer_intro.cpp`

## STL (vectors)

```cpp
#include <vector>
#include <algorithm>
vector<int> v(n);
sort(v.begin(), v.end());
```
