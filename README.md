# Constructors

## AIM:-
To use and implement C++ Constructor and Destructor. <br>

## Software Used :-
VS Code <br>

## Theory:-

- **Constructors** are special member functions in C++ used to initialize objects when they are created. <br>They have the same name as the class, no return type, and can be overloaded to accept different parameters.<br>
- **Constructor Initialization List:** In cases where the constructor needs to initialize class members, especially if they are const or reference types, an initialization list is used.
```
class MyClass {
    int x;
    const int y;
public:
    MyClass(int a, int b) : x(a), y(b) {
        // Other initialization code
    }
};
```
- **Destructors** are special member functions that clean up resources when an object is destroyed. They have the same name as the class but start with a tilde (`~`), and they have no return type and no parameters.<br> Destructors cannot be overloaded but can be made virtual to ensure proper cleanup in inheritance hierarchies.<br>
- **usage example**
```
class MyClass {
public:
    ~MyClass() {
        // Cleanup code
    }
};
```

### Algorithm to call the constructor:

1. **Start:**
   - The program begins execution at the `main()` function.

2. **Class Definition (`date`):**
   - A class named `date` is defined with three private integer members: `d`, `m`, and `y`.
   - A public default constructor `date()` is defined inside the class, which prints `"constructor called"` when an object of the `date` class is instantiated.

3. **`main()` Function:**
   - Inside the `main()` function, there is a statement `date();`.
   - This statement is a function declaration, not an object creation, due to the parentheses. It doesn't create an object of the `date` class, so the constructor doesn't actually get called.

4. **Program End:**
   - The program reaches the `return 0;` statement, indicating that it terminates successfully without creating any `date` object, so no output is generated.

### Algorithm for constructor inside the function :

1. **Start:**
   - Begin execution in the `main()` function.

2. **Class Definition (`date`):**
   - Define a class `date` with private integer members: `d`, `m`, and `y`.

3. **Constructor Definition:**
   - Define a public default constructor `date()`:
     1. Prompt the user to enter values for `d`, `m`, and `y`.
     2. Read these values from the user.
     3. Print `"Today's Date is:"`.
     4. Display the date in the format `d/m/y`.

4. **`main()` Function:**
   - Create an object `today` of the `date` class.
   - The constructor for `date` is automatically called, executing the input and output operations.

5. **Program End:**
   - The program terminates after displaying the date.
