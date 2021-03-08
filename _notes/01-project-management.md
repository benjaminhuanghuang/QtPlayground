


## Qt Creator
New Project -> Qt Widgets Application

3 Base classes
- QWidget
- QMainWindow
- QDialog





## Pro file
```
  QT  +=  core gui                  # QT modules

  greaterThan(QT_MAJOR_VERSION, 4): QT += widgets    # Include module when ver > 4

  TARGET = MyApp.exe                # Name of exe
  TEMPLATE = app                    # Template


  SOURCES += mpApp.cpp\
             a.cpp

  HEADERS  += myApp.h
```