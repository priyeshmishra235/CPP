# Movie Tracker Program

## 🚀 **To-Do**

- [ ] **Implement the program** to keep track of movies for movie fanatics:
  - [ ] Create a `Movies` object.
  - [ ] Ask the `Movies` object to add a movie by providing:
    - Movie name
    - Rating
    - Watched count
  - [ ] Ask the `Movies` object to increment the watched count by 1 for a movie, given its name.
  - [ ] Ask the `Movies` object to display all of its movies.

---

## ✅ **Completed Tasks**

- [x] Decided to use a `class Movie` to model individual movies:
  - [x] Movie name
  - [x] Movie rating (G, PG, PG-13, R)
  - [x] Watched count

---

## 🟡 **Partially Done**

- [~] Understand the program flow for implementation and break it into files:
  - [ ] **`Movie.h`**: Include file with the `Movie` class specification.
  - [ ] **`Movie.cpp`**: File with the `Movie` class implementation.
  - [ ] **`Movies.h`**: Include file with the `Movies` class specification.
  - [ ] **`Movies.cpp`**: File with the `Movies` class implementation.
  - [ ] **`main.cpp`**: Main driver file that creates a `Movies` object and manages the movies.

---

## 💡 **Considerations**

- [ ] Create a **menu-driven system** for the user in the future.
- [ ] Add **advanced features**, such as:
  - Searching for movies by name or rating.
  - Sorting movies alphabetically or by rating.

---

## ⚙️ **Key Notes**

- The `Movies` class **must know about** the `Movie` class since it is a collection of `Movie` objects.
- The **main driver** should **only interact** with the `Movies` class.
- Handle edge cases:
  - Adding a movie whose name already exists should display an **error message** to the user.
  - Incrementing the watched count for a movie that does not exist should also display an **error message**.