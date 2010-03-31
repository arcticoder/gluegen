/* !---- DO NOT EDIT: This file autogenerated by com\sun\gluegen\JavaEmitter.java on Mon Jul 31 16:27:00 PDT 2006 ----! */

#include <jni.h>

#include <assert.h>

 #include <dlfcn.h>
 #include </usr/include/machine/types.h>

/*   Java->C glue code:
 *   Java package: com.jogamp.common.os.MacOSXDynamicLinkerImpl
 *    Java method: int dlclose(long __handle)
 *     C function: int dlclose(void *  __handle);
 */
JNIEXPORT jint JNICALL 
Java_com_jogamp_common_os_MacOSXDynamicLinkerImpl_dlclose__J(JNIEnv *env, jclass _unused, jlong __handle) {
  int _res;
  _res = dlclose((void *) (intptr_t) __handle);
  return _res;
}


/*   Java->C glue code:
 *   Java package: com.jogamp.common.os.MacOSXDynamicLinkerImpl
 *    Java method: java.lang.String dlerror()
 *     C function: char *  dlerror(void);
 */
JNIEXPORT jstring JNICALL 
Java_com_jogamp_common_os_MacOSXDynamicLinkerImpl_dlerror__(JNIEnv *env, jclass _unused) {
  char *  _res;
  _res = dlerror();
  if (_res == NULL) return NULL;  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: com.jogamp.common.os.MacOSXDynamicLinkerImpl
 *    Java method: long dlopen(java.lang.String __path, int __mode)
 *     C function: void *  dlopen(const char *  __path, int __mode);
 */
JNIEXPORT jlong JNICALL 
Java_com_jogamp_common_os_MacOSXDynamicLinkerImpl_dlopen__Ljava_lang_String_2I(JNIEnv *env, jclass _unused, jstring __path, jint __mode) {
  const char* _UTF8__path = NULL;
  void *  _res;
  if (__path != NULL) {
    if (__path != NULL) {
      _UTF8__path = (*env)->GetStringUTFChars(env, __path, (jboolean*)NULL);
    if (_UTF8__path == NULL) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"__path\" in native dispatcher for \"dlopen\"");
      return 0;
    }
    }
  }
  _res = dlopen((char *) _UTF8__path, (int) __mode);
  if (__path != NULL) {
    (*env)->ReleaseStringUTFChars(env, __path, _UTF8__path);
  }
  return (jlong) (intptr_t) _res;
}


/*   Java->C glue code:
 *   Java package: com.jogamp.common.os.MacOSXDynamicLinkerImpl
 *    Java method: long dlsym(long __handle, java.lang.String __symbol)
 *     C function: void *  dlsym(void *  __handle, const char *  __symbol);
 */
JNIEXPORT jlong JNICALL 
Java_com_jogamp_common_os_MacOSXDynamicLinkerImpl_dlsym__JLjava_lang_String_2(JNIEnv *env, jclass _unused, jlong __handle, jstring __symbol) {
  const char* _UTF8__symbol = NULL;
  void *  _res;
  if (__symbol != NULL) {
    if (__symbol != NULL) {
      _UTF8__symbol = (*env)->GetStringUTFChars(env, __symbol, (jboolean*)NULL);
    if (_UTF8__symbol == NULL) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"__symbol\" in native dispatcher for \"dlsym\"");
      return 0;
    }
    }
  }
  _res = dlsym((void *) (intptr_t) __handle, (char *) _UTF8__symbol);
  if (__symbol != NULL) {
    (*env)->ReleaseStringUTFChars(env, __symbol, _UTF8__symbol);
  }
  return (jlong) (intptr_t) _res;
}


