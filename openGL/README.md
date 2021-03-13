# Qt OpenGL 
- QOpenGLWidget  (UI)
  由Qt统一管理绘制, 否则GUI 和 OpenGL各自绘制会导致闪烁
``` 
  void paintGL();
  void initializeGL();
  void resizeGL(int width, int height);
```
- QGLWidget
The most important point is that QGLWidget only exists for compatibility reasons to older codebases. As suggested in the Qt documentation on QGLWidget, starting from Qt 5.4 you should use QOpenGLWidget instead.


- GLSL           (VGA)
- Texture



