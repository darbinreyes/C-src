@ These lines with @ are omitted from the generated output.
@ This file gives the initial contents of gnu/stubs.h, to which
@ all the #define __stub_foo lines get appended by the makefile rule.
@
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */

#ifdef _LIBC
 #error Applications may not define the macro _LIBC
#endif

@ Placeholder line so we remember to keep the preceding blank line here.
