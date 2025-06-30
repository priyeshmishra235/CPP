# ✅ TODO Checklist for Vector Menu Program

## 🗂️ Basic Structure
- [x] Initialize a `std::vector<int>` with some default values
- [x] Create an infinite `while (true)` loop for user interaction
- [x] Display a menu of commands to the user
- [x] Prompt user for input choice each loop iteration

---

## 🖨️ Menu Options Functionality

### `P/p` - Print Numbers
- [x] Handle both lowercase and uppercase `P/p`
- [x] Print all numbers in the vector in `[ ... ]` format
- [x] If vector is empty, print “Vector is empty!”

### `A/a` - Add a Number
- [x] Handle both lowercase and uppercase `A/a`
- [x] Prompt user to enter a number
- [x] Append the number to the vector using `push_back`

### `M/m` - Display Mean
- [ ] Handle both lowercase and uppercase `M/m`
- [ ] Loop through the vector to compute the sum
- [ ] Calculate and print the average (`mean = sum / size`)
- [ ] Print sum and size (for debug/info)

### `S/s` - Display Smallest Number
- [ ] Handle both lowercase and uppercase `S/s`
- [ ] Find the smallest number using a loop
- [ ] Print the smallest number

### `L/l` - Display Largest Number
- [ ] Handle both lowercase and uppercase `L/l`
- [ ] Find the largest number using a loop
- [ ] Print the largest number

### `F/f` - Find a Number
- [ ] Handle both lowercase and uppercase `F/f`
- [ ] Prompt user to enter the number to search
- [ ] Loop through vector and count matches
- [ ] Print number of times the number is found
- [ ] If not found, display “No match found!”

### `C/c` - Clear the Vector
- [ ] Handle both lowercase and uppercase `C/c`
- [ ] Ask for confirmation before clearing (Y/n)
- [ ] Clear vector using `clear()`

### `Q/q` - Quit
- [ ] Handle both lowercase and uppercase `Q/q`
- [ ] Exit program with `return 0`

---

## 🧹 Default and Error Handling
- [ ] Handle invalid inputs using a `default` case
- [ ] Print `"Invalid Input!"` for unrecognized menu options

---

## 🛠️ (Optional) Developer Enhancements
> Not implemented, but great to add later:
- [ ] Convert vector printing to a helper function
- [ ] Use `std::min_element` and `std::max_element` for cleaner logic
- [ ] Guard all vector operations with `if (!numbers.empty())`
- [ ] Allow case-insensitive menu input using `std::toupper(choice)`
- [ ] Separate concerns into functions: `print_menu()`, `handle_input()`, etc.
