#include <stdio.h>

#include "And64InlineHook.hpp"

//源函数声明
//void *(*_DlopenV26)(const char *, int, int, int) = nullptr;
//
//void *DlopenV26(const char *name, int flag1, int flag2, int flag3)
//{
//    void *handle = _DlopenV26(name, flag1, flag2, flag3);
//    if (handle != nullptr)
//        LOGE("LoadedLib: {%s}:%p", name, handle);
//    return handle;
//}
//
////hook
//A64HookFunction(do_dlopen, (void *)DlopenV26, (void **)&_DlopenV26);


//int puts(const char* __s);
int (*old_puts)(const char *) = nullptr;

int new_puts(const char *name){
	printf("success ? yes\t");
    return old_puts(name);
}



int main(){
    puts("test");
    A64HookFunction((void *const)puts, (void *)new_puts, (void **)&old_puts);
    puts("test");
    puts("test");
}
