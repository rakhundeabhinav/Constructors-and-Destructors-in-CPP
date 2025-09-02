


---

🛠️ Constructors & Destructors in C++

🎯 Aim

Understand and implement constructors and destructors in C++ to study their role in object initialization, cleanup, and lifecycle management.


---

📚 Theory

In C++, constructors and destructors are special member functions that manage an object’s lifecycle — from creation to destruction.


---

🏗️ Constructors

A constructor is a special function automatically called when an object is created. It initializes the object’s data members.

✨ Key Points:

Same name as the class

No return type

Invoked automatically at object creation

Can be overloaded


🔎 Types of Constructors

1. 🚀 Default Constructor

Takes no parameters.

Initializes members with default or user-provided values.



2. 🎛️ Parameterized Constructor

Takes arguments.

Allows initializing objects with specific values.



3. 📋 Copy Constructor

Creates a new object as a copy of an existing one.

Useful when passing/returning objects by value.



4. 🔗 Delegating Constructor (C++11+)

A constructor that calls another constructor in the same class.

Helps avoid duplicate initialization code.



5. ❌ Explicit Constructor

Declared with the explicit keyword.

Prevents implicit type conversions (improves safety).





---

🗑️ Destructors

A destructor is automatically called when an object’s lifetime ends. Its role is to free resources and perform cleanup tasks.

✨ Key Points:

Same name as class, prefixed with ~

No return type, no parameters

Only one destructor per class


🛠 Responsibilities:

Free dynamically allocated memory

Close files or network connections

Release system resources


📌 Objects are destroyed in reverse order of creation (for local objects).


---

🔄 Lifecycle (RAII Principle)

1️⃣ Memory allocation
2️⃣ Constructor → Initialization
3️⃣ Object usage
4️⃣ Destructor → Cleanup
5️⃣ Memory deallocation

This ensures automatic and safe resource management.


---

✅ Conclusion

🏗️ Constructors → Ensure proper initialization

🗑️ Destructors → Ensure proper cleanup

🔒 Together they follow RAII → safer & cleaner code

