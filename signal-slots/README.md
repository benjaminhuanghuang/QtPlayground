
```
  QObject::connect(<sender>, <singal>, <receiver>, <slot>);


  QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit())); 
```


## Use qmake
```
  sudo apt-get install qt5-default

  qmake signal.pro

  make
```