
#include "MYRISCVX.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/TargetRegistry.h"

using namespace llvm;


Target &llvm::getTheMYRISCVX32Target() {
  static Target TheMYRISCVX32Target;
  return TheMYRISCV32XTarget;
}

Target &llvm::getTheMYRISCVX64Target() {
  static Target TheMYRISCVX64Target;
  return TheMYRISCVX64Target;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeMYRISCVXTargetInfo() {
  RegisterTarget<Triple::myriscvx32> X(getTheMYRISCVX32Target(), "myriscvx32",
                                    "MYRISCVX(32-bit)", "MYRISCVX");
  RegisterTarget<Triple::myriscvx64> Y(getTheMYRISCVX64Target(), "myriscvx64",
                                    "MYRISCVX(64-bit)", "MYRISCVX");
}
