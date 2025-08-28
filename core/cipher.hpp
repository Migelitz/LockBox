#ifndef ENCRYPTION_HPP
#define ENCRYPTION_HPP

/*
 * Explanation: (Notes for possible reader and my future self)
 * 
 * This header file contains **declarations** of functions, classes, constants, 
 * and other entities used throughout the program. It is primarily used to provide 
 * a **blueprint** for other source files, telling them what functions or classes 
 * exist without revealing the actual implementation details.
 * 
 * Why do we include this header file in other source files?
 * 
 * 1. **Interface Declaration**: Header files declare what exists, such as function 
 *    signatures, class declarations, or constants, but do not provide the implementation 
 *    (how the function works). This allows other source files to know what to expect.
 * 
 * 2. **Separation of Interface and Implementation**: By putting only the declarations 
 *    in the header file and keeping the implementation in a source file (`.cpp`), we 
 *    maintain a clear separation between the **interface** (what the code does) and 
 *    the **implementation** (how the code does it). This is a good practice for easier 
 *    code maintenance, organization, and **modularity**.
 * 
 * 3. **Reusability**: Multiple source files can include the same header file, which 
 *    provides a single source of truth for available functions or classes, promoting 
 *    **modular programming** and code reusability.
 * 
 * 4. **Avoid Duplication of Definitions**: By only declaring the functions here, we 
 *    avoid **duplicate definitions** that can occur if you put function definitions 
 *    directly in the header file (which would result in linker errors when included 
 *    in multiple `.cpp` files).
 * 
 * In summary, we include header files to provide a clear **interface**, making the code 
 * easier to manage and preventing errors from duplicate definitions or missing declarations.
 */

 /*
 * Explanation of Preprocessor Directives:
 * 
 * Preprocessor directives are commands that are processed by the preprocessor 
 * before the actual compilation of code. These directives are crucial for handling 
 * **macros**, **file inclusion**, and **conditional compilation** in C/C++.
 * 
 * In this header file, we use a few important preprocessor directives:
 * 
 * 1. **`#ifndef`, `#define`, `#endif`** (Include Guards):
 *    - These are used to **prevent multiple inclusions** of the same header file.
 *    - When a header file is included multiple times (e.g., directly or indirectly), 
 *      the preprocessor would normally process it more than once, which leads to 
 *      **duplicate definitions** (such as functions or classes being defined more 
 *      than once).
 *    - By using `#ifndef` (if not defined), `#define` (define a unique identifier), 
 *      and `#endif` (end of the conditional), we ensure the header is only included 
 *      once per translation unit.
 *    - Example:
 *      ```cpp
 *      #ifndef MY_HEADER_H   // If MY_HEADER_H is not defined
 *      #define MY_HEADER_H   // Define MY_HEADER_H
 *      
 *      // Declarations go here...
 *      
 *      #endif               // End of the conditional block
 *      ```
 *    - This mechanism prevents the same header file from being processed multiple 
 *      times, avoiding the duplication of declarations or definitions.
 * 
 * 2. **`#include`**:
 *    - This directive tells the preprocessor to **include the contents** of another file 
 *      (either a system header or another user-defined header) into the current file.
 *    - For example, `#include "my_header.hpp"` includes the contents of `my_header.hpp` 
 *      into the current file, making its declarations accessible.
 *    - It allows us to use code from other files without having to copy-paste everything.
 * 
 * These preprocessor directives are essential for maintaining a clean, modular codebase.
 * They allow us to efficiently manage dependencies and avoid errors caused by 
 * multiple inclusions.
 */



void encryption();
void decryption();

#endif