#include <asm/syscall_wrapper.h>

asmlinkage long sys_mycall1(int value);
asmlinkage long sys_mycall2(void);
#endif /*CONFIIG_ARCH_HAS_SYSCALL_WRAPPER*/
