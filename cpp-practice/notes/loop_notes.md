# Loop Notes

## `for` — known iterations

```cpp
for (int i = 0; i < n; i++) { }
for (int i = n - 1; i >= 0; i--) { }
```

## `while` — condition-driven

```cpp
while (n > 0) {
    n /= 10;
}
```

## Practice checklist (basics/loops/)

- [ ] `print_1_to_n.cpp`
- [ ] `sum_of_n.cpp`
- [ ] `factorial.cpp`
- [ ] `multiplication_table.cpp`

## Tips

- Use `long long` when products or sums can overflow `int`.
- For table patterns, outer loop = rows, inner = columns.
