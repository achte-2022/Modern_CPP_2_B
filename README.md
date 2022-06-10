# Homework. 2: Input Params and Streams
## Modern C++ for Computer Vision and Image Processing 
## Institute of Geodesy and Geoinformation

Tejas Acharya [Twitter](https://twitter.com/achte_te)

[Assignment](https://www.ipb.uni-bonn.de/html/teaching/modern-cpp/homeworks/homework_2.pdf)


To Build and Run:
```sh
git clone git@github.com:achte-2022/Modern_CPP_2_B.git
cd Modern_CPP_2_B
bash install.sh
./bin/task_2 100.txt 200.txt
```

To Test:
```sh
bats test_task_2.sh
```

Correct code gives the following output after running test_task_2.sh
```sh
✓[task_2] Check bin/task_2 existance 
✓ [task_2] Check 0  inputs 
✓ [task_2] Check 1  inputs 
✓ [task_2] Check 2  inputs 
✓ [task_2] Check 2+ inputs 
✓ [task_2] Check input arguments format 
✓ [task_2] Check supported extensions 
✓ [task_2] Check mean value, both .txt files 
✓ [task_2] Check sum value, both .png files 
✓ [task_2] Check modulo division [.txt|.png] files 

10 tests, 0 failures
```