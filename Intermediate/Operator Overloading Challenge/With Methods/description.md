# **Operator Overloading Challenge - TODO List**

## **📌 TODO**
- [ ] Overload the following operators in the `Mystring` class using **member functions**.
- [ ] Create a separate project and overload the same operators using **non-member functions**.
- [ ] Implement the following operators:
  - [ ] **Unary Minus (-)** → Returns the lowercase version of the object's string.
  - [ ] **Equality (==)** → Returns `true` if two strings are equal.
  - [ ] **Inequality (!=)** → Returns `true` if two strings are not equal.
  - [ ] **Less Than (<)** → Returns `true` if `lhs` string is lexically smaller than `rhs` string.
  - [ ] **Greater Than (>)** → Returns `true` if `lhs` string is lexically greater than `rhs` string.
  - [ ] **Concatenation (+)** → Returns a new object with concatenated `lhs` and `rhs` strings.
  - [ ] **Concatenation Assignment (+=)** → Appends `rhs` string to `lhs` and stores the result.
  - [ ] **Repeat (*)** → Returns a string copied `n` times.
  - [ ] **Repeat Assignment (*=)** → Multiplies the string on `lhs` `n` times and stores the result.
  - [ ] **Pre-increment (++)** → Modify the string (possibly convert to uppercase).
  - [ ] **Post-increment (++)** → Returns a copy of the object before modifying.

---
## **✅ Completed**
- [ ] " "
---

## **⚠️ Important**
- The first implementation should use **member functions**.
- The second implementation should use **non-member functions**.
- Ensure **operator+=** and **operator*=** use the previously overloaded `+` and `*` operators to avoid code duplication.
- Use `std::strcmp` for comparison operators (==, !=, <, >).
- Post-increment (`operator++(int)`) must return a **copy** of the original value before modification.

---

## **🔍 Considerations**
- Ensure the class properly manages **dynamic memory** (if using raw pointers).
- Handle **edge cases**:
  - Empty strings.
  - Single-character strings.
  - Large strings.
  - Special characters.
- Test all operators thoroughly.

---

## **📌 Key Notes**
- **Pre-increment (`++s1`)** modifies the object **before** returning it.
- **Post-increment (`s1++`)** returns a copy of the object **before modification**.
- **+= and *= should return `Mystring&`** to allow chaining (`s1 += s2 += s3`).
- Consider overloading additional operators like:
  - **Subscript operator (`[]`)** for accessing characters.
  - **Stream operators (`<<` and `>>`)** for easy input/output.

---