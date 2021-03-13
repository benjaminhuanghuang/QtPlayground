

Can not find <GL/gl.h>
```
#if defined(__APPLE__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif
```

error for compiling qt gui with cmake along with promoted widget
The CMake has no idea about purpose of directories, so if you put header files inside subdirectory include, you must notify CMake about this using iclude_directories directive:
```
  include_directories(${CMAKE_CURRENT_SOURCE_DIR}) 
  include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include) 
```