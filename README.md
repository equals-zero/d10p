# d10print
Formats input-files to look better when printed by the Celectronic D10.

Compile & run using go.sh:
```
$ ./go.sh /your/input/stuff
```
or

Compile using G++:
```
$ g++ main.cpp -std=gnu++11 -o d10p
``` 


Input through pipe (aka stdin) hasn't been implemented yet. Use something like this instead:
```
$ fortune > /tmp/printThis && ./d10p /tmp/printThis
```
