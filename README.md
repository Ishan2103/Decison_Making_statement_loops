# C++ Programs: Decision Control and Loop Statements

This repository contains basic **C++ programs** focusing on **decision control and loop statements**, which are essential for understanding program flow and iteration.

---

## 1. Print Numbers from 1 to 20 Using While Loop

**Logic:**  
A variable `i` is initialized to 0. The `while` loop checks if `i` is less than 20. If true, it prints `i + 1` and increments `i` by 1.  
This continues until `i` reaches 20.

**Theory:**  
The `while` loop is an **entry-controlled loop** that evaluates the condition before executing the loop body.  
Best used when the number of iterations is not fixed.

**Concepts Covered:**  
- Looping constructs  
- Entry-controlled loop  
- Counter-based iteration  

**Output:**
1
2
3
...
20


---

## 2. Faulty Code (Syntax Error Demonstration)

**Logic:**  
The code tries to print a right-angled triangle using nested loops,  
but a misplaced `endl` and a missing `}` cause a **syntax error**.

**Theory:**  
Correct syntax and matching braces are critical. A single missing `}` can halt compilation.

**Concepts Covered:**  
- Nested loops  
- Syntax errors  
- Debugging in C++

**Output:**



---

## 3. Print "SIT" 5 Times Using For Loop

**Logic:**  
A `for` loop runs from 0 to 5 and prints `"SIT"` in each iteration (6 times total).

**Theory:**  
The `for` loop is ideal for **fixed-count iterations**, consisting of initialization, condition checking, and updating.

**Concepts Covered:**  
- For loop structure  
- Fixed iteration  
- Output repetition  

**Output:**
SIT
SIT
SIT
SIT
SIT
SIT


---

## 4. Print Even Numbers from 0 to 10 Using For Loop

**Logic:**  
A loop runs from 0 to 10 and prints numbers only if they satisfy the condition `i % 2 == 0`.

**Theory:**  
The modulo operation (`%`) is used to test divisibility.  
Combining conditionals with loops allows **filtering values**.

**Concepts Covered:**  
- Conditional checks in a loop  
- Modulus operator  
- Filtering output  

**Output:**
0
2
4
6
8
10


---

## 5. Reverse a 5-Digit Number

**Logic:**  
Digits are extracted one by one using `% 10`, and the reversed number is built using `reversed = reversed * 10 + digit`.  
The original number is reduced using `/ 10`.

**Theory:**  
Modulo and integer division allow **digit-level manipulation**, which is useful for algorithms involving numbers.

**Concepts Covered:**  
- Modulo and division  
- Reversing digits  
- Arithmetic logic  

**Output:**
Reversed number: 56032


---

## 6. Limited Attempts for System Lock

**Logic:**  
The user gets 3 attempts to input the correct password.  
Each failed attempt reduces the available tries.  
On correct input, access is granted; otherwise, the system locks.

**Theory:**  
Combining loops and conditionals can simulate **basic authentication systems**.

**Concepts Covered:**  
- While loop  
- Authentication logic  
- Loop termination  

**Output:**
Welcome to Secure Login

Enter the password (Attempts left:3): 345
Incorrect password, Pls try again

Enter the password (Attempts left:2): 345
Incorrect password, Pls try again

Enter the password (Attempts left:1): 123
Access Granted, Welcome!


---

## 7. Increment Star Pattern (Left-Aligned Triangle)

**Logic:**  
The outer loop controls rows, and the inner loop prints `*` equal to the row number.  
Stars increase with each row.

**Theory:**  
**Nested loops** can generate structured text-based patterns.

**Concepts Covered:**  
- Nested loops  
- Pattern building  
- Output formatting  

**Output:**
**


---

## 8. Mirror Image Star Pattern (Right-Aligned Triangle)

**Logic:**  
The outer loop handles rows.  
The first inner loop prints spaces to shift stars, and the second inner loop prints `*`.

**Theory:**  
Right-aligned patterns require controlling both **spacing and symbols**.

**Concepts Covered:**  
- Alignment logic  
- Nested loops  
- Visual formatting  

**Output:**
*


---

## 9. Floyd’s Triangle (User Input)

**Logic:**  
Accepts a row count and prints **Floyd’s triangle**, incrementing sequentially per row.

**Theory:**  
Floyd’s triangle reinforces **nested loop growth** and **incremental counters**.

**Concepts Covered:**  
- Nested loop growth  
- Mathematical patterns  
- User input interaction  

**Output:**
Enter number of rows: 4
1

2 3

4 5 6

7 8 9 10


---

## 10. Hourglass Star Pattern

**Logic:**  
Divides the hourglass into two triangles: an **inverted** top and an **upright** bottom.  
Spaces and stars are managed for symmetry.

**Theory:**  
Teaches **symmetry in patterns** by combining ascending and descending loops.

**Concepts Covered:**  
- Loop symmetry  
- Pattern reflection  
- Spacing control  

**Output:**


---

## 11. Inner and Outer Loops Demonstration

**Logic:**  
Two loops:  
The outer loop prints its index, and for each iteration, the inner loop runs fully.

**Theory:**  
Demonstrates how **nested loops** operate in sequence.

**Concepts Covered:**  
- Loop hierarchy  
- Sequential execution  
- Nested behavior  

**Output:**

---


### Author
These programs help in **understanding fundamental loops, conditionals, and patterns in C++**, ideal for beginners and students.


