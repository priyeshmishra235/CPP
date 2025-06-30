Element Access
| Function            | Description                                                            | Example                  |
| ------------------- | ---------------------------------------------------------------------- | ------------------------ |
| `at(index)`         | Access element with bounds checking (throws exception if out of range) | `vec.at(2)`              |
| `operator[](index)` | Access element without bounds checking                                 | `vec[2]`                 |
| `front()`           | Returns reference to first element                                     | `vec.front()`            |
| `back()`            | Returns reference to last element                                      | `vec.back()`             |
| `data()`            | Returns pointer to the internal array                                  | `int* ptr = vec.data();` |
Modifiers
| Function                | Description                           | Example                                        |
| ----------------------- | ------------------------------------- | ---------------------------------------------- |
| `push_back(val)`        | Adds element at the end               | `vec.push_back(10);`                           |
| `pop_back()`            | Removes last element                  | `vec.pop_back();`                              |
| `insert(pos, val)`      | Inserts value at position             | `vec.insert(vec.begin() + 2, 50);`             |
| `erase(pos)`            | Removes element at position           | `vec.erase(vec.begin() + 1);`                  |
| `clear()`               | Removes all elements                  | `vec.clear();`                                 |
| `resize(n)`             | Changes size of vector                | `vec.resize(10);`                              |
| `assign(n, val)`        | Fills vector with `n` copies of `val` | `vec.assign(5, 100);`                          |
| `emplace_back(args...)` | Constructs element in-place at end    | `vec.emplace_back(1, 2);` (for pair or object) |
| `emplace(pos, args...)` | Constructs element in-place at pos    | `vec.emplace(vec.begin(), 1, 2);`              |
| `swap(other)`           | Swaps with another vector             | `vec1.swap(vec2);`                             |
Capacity
| Function          | Description                                              | Example                |
| ----------------- | -------------------------------------------------------- | ---------------------- |
| `size()`          | Number of elements                                       | `vec.size()`           |
| `empty()`         | True if vector is empty                                  | `vec.empty()`          |
| `capacity()`      | Number of elements vector can store without reallocating | `vec.capacity()`       |
| `max_size()`      | Max possible number of elements                          | `vec.max_size()`       |
| `reserve(n)`      | Reserves memory for at least `n` elements                | `vec.reserve(100);`    |
| `shrink_to_fit()` | Reduces capacity to match size                           | `vec.shrink_to_fit();` |
Iterator
| Function              | Description                             | Example                                               |
| --------------------- | --------------------------------------- | ----------------------------------------------------- |
| `begin()` / `end()`   | Iterator to first and past-last element | `for(auto it = vec.begin(); it != vec.end(); ++it)`   |
| `rbegin()` / `rend()` | Reverse iterators                       | `for(auto it = vec.rbegin(); it != vec.rend(); ++it)` |
| `cbegin()` / `cend()` | Constant iterators                      | `for(auto it = vec.cbegin(); it != vec.cend(); ++it)` |
Operator and Utilities
| Function              | Description                             | Example                                               |
| --------------------- | --------------------------------------- | ----------------------------------------------------- |
| `begin()` / `end()`   | Iterator to first and past-last element | `for(auto it = vec.begin(); it != vec.end(); ++it)`   |
| `rbegin()` / `rend()` | Reverse iterators                       | `for(auto it = vec.rbegin(); it != vec.rend(); ++it)` |
| `cbegin()` / `cend()` | Constant iterators                      | `for(auto it = vec.cbegin(); it != vec.cend(); ++it)` |
