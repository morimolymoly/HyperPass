build:
	${LLVMBIN}/clang hello.c -o hello

bitcode:
	${LLVMBIN}//clang -O3 -emit-llvm hello.c -c -o hello.bc

clean:
	rm hello hello.bc

run: bitcode
	${LLVMBIN}//opt -load ../build/Hyper/libLLVMHyper.so -hyper -time-passes < hello.bc > /dev/null

help:
	${LLVMBIN}//opt -load ../build/Hyper/libLLVMHyper.so -help | grep hyper