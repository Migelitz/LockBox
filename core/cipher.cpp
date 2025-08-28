#include <iostream>
#include "cipher.hpp"
using namespace std;

/*
 * Explanation: (Notes for possible reader and my future self)
 * 
 * This source file contains the **implementation** of the functions, classes, 
 * and other logic declared in the corresponding header file. Here, we define the 
 * actual behavior of the functions or classes that were declared earlier, essentially 
 * providing the **"how"** behind the **"what"** declared in the header.
 *
 * Why do we implement the logic in the source file (`.cpp`) instead of the header?
 *
 * 1. **Separation of Interface and Implementation**: Keeping the **declarations** in 
 *    the header and the **implementations** in the source file follows the principle 
 *    of separating **interface** (what the code does) from **implementation** (how 
 *    it does it). This makes the code easier to understand, maintain, and extend.
 * 
 * 2. **Avoid Duplication of Definitions**: If we put the function implementations 
 *    directly in the header file, they would be **redefined** in each `.cpp` file that 
 *    includes the header. This would lead to **linker errors** because the same 
 *    function is defined multiple times across the codebase. Keeping the implementation 
 *    in the `.cpp` file ensures that there's **only one definition** of each function.
 * 
 * 3. **Linking**: The header file contains **declarations** that tell the compiler 
 *    what functions, classes, and constants exist, while the source file contains 
 *    the **definitions**—the actual code that makes the functions work. During the 
 *    linking phase, the **linker** connects the declarations to their corresponding 
 *    implementations, making sure everything works together.
 * 
 * 4. **Efficiency and Compilation**: By separating the declaration (header) from 
 *    the implementation (source), we make the code **modular** and **faster to compile**. 
 *    If a change is made to the implementation (in the `.cpp` file), only that file 
 *    needs to be recompiled, rather than recompiling everything that includes the header.
 * 
 * In short, the `.cpp` file contains the logic behind the functions declared in the 
 * header file, ensuring the program works correctly while maintaining clean separation 
 * of concerns.
 */

/*
 * Explanation of Preprocessor Directives:
 * 
 * In the source file, we generally use preprocessor directives for:
 * 
 * 1. **`#include`**:
 *    - We include the corresponding header file here (e.g., `#include "my_header.hpp"`) 
 *      to connect the **declarations** (functions, classes, constants) from the header 
 *      file to the **implementations** in the source file.
 *    - Including the header file ensures that the source file has access to the **interface** 
 *      declared in the header, so the compiler knows what functions and classes it can 
 *      expect to use.
 * 
 * 2. **`#define`**:
 *    - We may use `#define` to define **macros** or constants that will be substituted 
 *      throughout the code before compilation. For example:
 *      ```cpp
 *      #define PI 3.14159  // Define a constant value
 *      ```
 *    - This can also be used to create small inline functions or to make parts of the code 
 *      more readable and maintainable.
 * 
 * 3. **Conditionally Compiled Code**:
 *    - Sometimes, we want to include or exclude certain parts of the code based on a 
 *      **condition** (like different platforms, or debugging code). We use `#ifdef`, 
 *      `#ifndef`, and `#endif` for conditional compilation.
 *    - Example:
 *      ```cpp
 *      #ifdef DEBUG
 *          std::cout << "Debugging information..." << std::endl;
 *      #endif
 *      ```
 *    - This means that if the `DEBUG` macro is defined (typically via `#define DEBUG`), 
 *      the debug code will be included; otherwise, it will be excluded.
 * 
 * These preprocessor directives help in **structuring** the program, managing **dependencies**, 
 * and **controlling the flow** of code inclusion, ensuring that the final compiled program 
 * is efficient and error-free.
 */

void encryption() {

    
}

void decryption() {


}