
# And64InlineHook

Lightweight ARMv8-A(ARM64, AArch64, Little-Endian) Inline Hook Library for Android C/C++   

# References
[Arm Compiler armasm User Guide](http://infocenter.arm.com/help/topic/com.arm.doc.100069_0610_00_en/pge1427898258836.html)   
[Procedure Call Standard for the Arm® 64-bit Architecture (AArch64)](https://github.com/ARM-software/abi-aa/blob/master/aapcs64/aapcs64.rst)   



# 在fork后做了一点修改，并提供了一个例子

1. 在 And64InlineHook.cpp 的开头部分加了头文件 #include <string.h> ；
2. 将 And64InlineHook.cpp 的后半段中 extern "C" 中的 #define 脱离出来放到文件的开头部分了，因为__flush_cache在前半段有使用到；
3. 给出了一个inline-hook的例子，测试代码在 test.cpp 中，然后调用了And64InlineHook.cpp中代码，配置信息在 Android.mk 、Application.mk 中，可以直接跑脚本 run.sh （其中ndk-build的路径要改一下）。

