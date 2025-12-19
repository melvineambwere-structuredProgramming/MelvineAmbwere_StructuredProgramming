# Pointer Concepts – Notes

## 1. Normal Variable vs Pointer

**Normal Variable**  
- Stores the actual value.  
- Memory is accessed directly.  
- Values are read and modified using the variable itself.  

**Pointer**  
- Stores the memory address of another variable.  
- Memory is accessed indirectly through the address.  
- Values are read and modified using dereferencing.

---

## 2. Variable Declaration vs Pointer Declaration

**Variable Declaration**  
- Allocates memory to store a value.  

**Pointer Declaration**  
- Allocates memory to store the address of a variable.  

**Key Operators:**  
- `*` → used to declare a pointer.  
- `&` → used to obtain the address of a variable.

---

## 3. Dereferencing a Pointer

- Dereferencing means accessing or modifying the value stored at the memory address held by the pointer.  
- Allows a pointer to read or change the value of the variable it points to.

---

## 4. Use Cases for Pointers

- When a function needs to modify the original variable.  
- Efficient handling of large data structures to avoid copying.  
- Dynamic memory allocation for flexible memory management.

---

## 5. Limitations and Risks of Pointers

- Dangling pointers pointing to freed memory.  
- Null pointer dereferencing.  
- Memory leaks due to improper dynamic memory handling.  
- Increased complexity and risk of crashes or undefined behavior.

---

## 6. Call by Value vs Call by Reference

**Call by Value**  
- A copy of the data is passed.  
- Original data remains unchanged.  

**Call by Reference**  
- The address of the data is passed.  
- Original data can be modified.

---

## 7. Practical Scenarios

**Call by Value**  
- Preferred when the original data must remain unchanged.  
- Safer and simpler to understand.  

**Call by Reference**  
- Preferred when modifications to the original data are needed.  
- Efficient for handling large data structures or multiple values.
