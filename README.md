# CUSTOM-DICTIONARY

## 📘 Project Overview
CUSTOM-DICTIONARY is a simple implementation of a dictionary (key–value store) using the **C programming language**.  
The project demonstrates how dictionary operations can be built **from scratch** using fundamental data structures instead of built-in libraries.

This project is mainly intended for **learning purposes**, helping students understand **linked lists, pointers, and basic data handling** in C.

---

## 🎯 Objectives
- To implement a dictionary without using predefined data structures
- To understand linked list operations
- To perform basic dictionary functions such as insert, delete, search, and display
- To gain hands-on experience with memory management in C

---

## ⚙️ Features
- Add new key–value pairs
- Search for a value using its key
- Delete existing entries
- Display all stored dictionary entries
- Handles collisions using **linked list chaining**

---

## 🛠️ Technologies Used
- **Language:** C
- **Concepts:**  
  - Linked Lists  
  - Structures  
  - Dynamic Memory Allocation  
  - Pointers  

---

## 🧠 How It Works
- Each dictionary entry is stored as a node in a linked list
- Each node contains:
  - A **key**
  - A **value**
  - A pointer to the next node
- Operations traverse the list to perform required actions

---

## 🚀 How to Run
1. Clone the repository:
```bash
   git clone https://github.com/sabarinathrms/CUSTOM-DICTIONARY.git
```
Navigate to the project folder:
 ```bash
  cd CUSTOM-DICTIONARY
```
  Compile the program:
```bash
  gcc CustomDictionary.c -o dictionary
```
Run the program:
```bash
./dictionary
```
## 📂 Project Structure
CUSTOM-DICTIONARY/
│
├── CustomDictionary.c
└── README.md
## 🎓 Educational Use
This project is ideal for:

- Data Structures & Algorithms practice

- C programming mini projects

- College lab assignments

- Beginners learning linked lists

## 📌 Future Enhancements
- Implement hash table for faster lookup

- Add file handling for data persistence

- Support multiple data types

- Improve time complexity

## 👤 Author
Sabarinath S

## 📜 License
This project is open-source and available for educational use.
