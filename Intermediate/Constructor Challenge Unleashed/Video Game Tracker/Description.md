# 🎮 Video Game Tracker (Advanced C++ Practice)

## 🚀 To-Do (Focus on Copy, Move, and Destructors)

### **Core Implementation**

- [x] **Implement the `Game` class with:**
  - [x] **Use a C-style string (`char*`) for `title`** to practice deep copy.
  - [x] Use `std::string` for `genre`.
  - [x] Use `int` for `rating` (1-10).
  - [x] Use `int` for `hoursPlayed`.

- [ ] **Implement the following in `Game` class:**
  - [ ] **Copy Constructor (Deep Copy)**
    - [ ] Allocate new memory for `title`.
    - [ ] Copy contents manually to prevent shallow copy issues.
  - [ ] **Copy Assignment Operator (Deep Copy)**
    - [ ] Handle **self-assignment** properly.
    - [ ] Delete old memory and allocate new memory before copying.
  - [ ] **Move Constructor (Shallow Copy via Transfer)**
    - [ ] Transfer ownership of `title` pointer.
    - [ ] Nullify moved object’s `title` pointer.
  - [ ] **Move Assignment Operator (Shallow Copy via Transfer)**
    - [ ] Release existing resources before transferring ownership.
    - [ ] Nullify moved object’s `title` pointer.
  - [ ] **Destructor**
    - [ ] Properly deallocate memory for `title`.

### **Managing Multiple Games (`Games` class)**

- [ ] **Implement the `Games` class** (Manages a collection of `Game` objects):
  - [ ] **Use a raw array (`Game* games`)** instead of STL containers to practice manual memory management.
  - [ ] Keep track of the **current number of games**.
  - [ ] Allow adding, removing, and modifying games.
  - [ ] Prevent duplicate game titles from being added.

- [ ] **Implement Special Member Functions in `Games` class:**
  - [ ] **Copy Constructor (Deep Copy of Raw Array)**
    - [ ] Allocate new memory for array of `Game` objects.
    - [ ] Perform element-wise deep copy.
  - [ ] **Copy Assignment Operator (Deep Copy of Raw Array)**
    - [ ] Handle self-assignment.
    - [ ] Delete old memory and allocate new array.
    - [ ] Copy each `Game` object properly.
  - [ ] **Move Constructor (Shallow Copy via Transfer)**
    - [ ] Transfer ownership of `games` pointer.
    - [ ] Nullify moved object’s `games` pointer.
  - [ ] **Move Assignment Operator (Shallow Copy via Transfer)**
    - [ ] Release existing resources before transferring ownership.
    - [ ] Nullify moved object’s `games` pointer.
  - [ ] **Destructor**
    - [ ] Properly deallocate memory for `games` array.

### **Testing Object Lifetime and Memory Management**

- [ ] **Test Cases to Validate Copy, Move, and Destruction:**
  - [ ] Create multiple `Game` objects and store them in `Games`.
  - [ ] Use **copy constructor** to duplicate a `Game` and ensure deep copy.
  - [ ] Use **move constructor** when adding a temporary `Game`.
  - [ ] Explicitly call **copy assignment** and **move assignment** to verify memory handling.
  - [ ] Observe destructor calls when objects go out of scope.
