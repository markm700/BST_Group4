#!/bin/bash
./out.exe myfile.txt > file1
result1=$(diff f1 file1)
if [ -z "$result1" ]; then
	echo "Test 1 success"
else
	echo "Test 1 failed"
	echo $result1
fi
./out.exe myfile2.txt > file2
result2=$(diff f2 file2)
if [ -z "$result2" ]; then
        echo "Test 2 success"
else
        echo "Test 2 failed"
        echo $result2
fi
./out.exe myfile3.txt > file3
result3=$(diff f3 file3)
if [ -z "$result3" ]; then
        echo "Test 3 success"
else
        echo "Test 3 failed"
        echo $result3
fi
