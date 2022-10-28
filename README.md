# testGDB

Compile and run/debug main.cpp from Visual Studio Code's menu using "Start Debugging"

You should be able to place breakpoints and step through the code.

## Important Files

`.vscode/tasks.json` - tells VSC what compiler to use, what the executable's name is

`.vscode/launch.json` - tells VSC to use gdb as the debugger

### Changes from default files

In `.vscode/tasks.json`, instead of

```
"${file}",
```
use
```
"*.cpp",    // added to compile all cpp files
```
to compile all files

in `.vscode/launch.json`, add the following line
```
"preLaunchTask": "C/C++: clang++ build active file",
```





