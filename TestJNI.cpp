#include <jni.h>
#include <stdio.h>
#include "TestJni.h"

JNIEXPORT void JNICALL
      Java_TestJni_print(JNIEnv *env,jobject obj, jstring content)
{
    printf("hello\n");
    jclass cls = env->GetObjectClass(obj); 
    jmethodID callback = env->GetMethodID(cls,"callback","(II)V");
    env->CallVoidMethod(obj,callback,5,10); 

    return;
}