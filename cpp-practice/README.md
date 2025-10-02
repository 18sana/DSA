# C++ Practice

Structured practice repo for DSA fundamentals, with **arrays** organized by topic so you can track solved questions and revisit them easily.

## Layout

| Folder | Purpose |
|--------|---------|
| `basics/` | I/O, operators, conditions, loops |
| `arrays/` | Array practice split into basics, searching, sorting, manipulation, patterns |
| `strings/` | String problems |
| `vectors/` | `std::vector` practice |
| `number_problems/` | Classic number theory / digit problems |
| `patterns/` | Star and number patterns |
| `tcs_nqt_questions/` | TCS NQT — `easy/`, `medium/`, `previous_year/` |
| `notes/` | Quick reference notes |

## Compile & run

From any file’s directory:

```bash
g++ -std=c++17 -Wall -o out filename.cpp && ./out
```

Or from repo root:

```bash
g++ -std=c++17 -Wall -o out cpp-practice/arrays/basics/array_sum.cpp && ./out
```

## Arrays partition

```
arrays/
├── basics/          # input, sum, min/max, reverse, even/odd count
├── searching/       # linear search, frequency
├── sorting/         # bubble, selection, STL sort
├── manipulation/    # zeros, second largest, duplicates, rotation
└── patterns/        # prefix sum, two pointers
```

Add new problems under the matching subfolder. Keep one problem per file; name files by what the program does.

## Progress tracking

In each `notes/*.md` file, use a checklist when you finish a problem:

```markdown
- [x] `arrays/basics/array_sum.cpp` — done 2026-05-20
- [ ] `arrays/manipulation/rotate_array.cpp`
```

## TCS NQT

Drop solutions into:

- `tcs_nqt_questions/easy/`
- `tcs_nqt_questions/medium/`
- `tcs_nqt_questions/previous_year/`

Use descriptive filenames, e.g. `array_rotation_easy.cpp`.
