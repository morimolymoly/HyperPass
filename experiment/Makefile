build:
	/home/moly/llvm-project/build/bin/clang hello.c -o hello

bitcode:
	/home/moly/llvm-project/build/bin/clang -O3 -emit-llvm hello.c -c -o hello.bc

clean:
	rm hello hello.bc

run: bitcode
	/home/moly/llvm-project/build/bin/opt -load ../build/Hyper/libLLVMHyper.so -hyper < hello.bc > /dev/null

help:
	/home/moly/llvm-project/build/bin/opt -load ../build/Hyper/libLLVMHyper.so -help | grep hyper