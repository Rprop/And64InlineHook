#include <stdio.h>

#include "And64InlineHook.hpp"

int (*old_puts)(const char *) = nullptr;

int new_puts(const char *name){
	printf("success ? yes\t");
    return old_puts(name);
}

int main(){
    puts("test");
    A64HookFunction((void *const)puts, (void *)new_puts, (void **)&old_puts);
    puts("test");
}
