#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {
struct Hyper : public FunctionPass {
    static char ID;
    Hyper() : FunctionPass(ID) {}

    bool runOnFunction(Function &F) override {
        errs() << "Hyper: ";
        errs().write_escaped(F.getName()) << '\n';
        return false;
    }
};
}

char Hyper::ID = 0;

static RegisterPass<Hyper> X("hyper", "hyper pass", 
                              false,/* Only looks at CFG */ 
                              false/* Analysis Pass */);