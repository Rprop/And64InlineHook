'**/ndk-build' NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk NDK_APPLICATION_MK=./Application.mk
adb push libs/arm64-v8a/hook-64 /data/local/tmp
adb shell chmod +x /data/local/tmp/hook-64
adb shell /data/local/tmp/hook-64
