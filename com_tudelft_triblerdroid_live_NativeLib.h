/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tudelft_triblerdroid_live_NativeLib */

#ifndef _Included_com_tudelft_triblerdroid_live_NativeLib
#define _Included_com_tudelft_triblerdroid_live_NativeLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tudelft_triblerdroid_live_NativeLib
 * Method:    start
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tudelft_triblerdroid_live_NativeLib_start
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     com_tudelft_triblerdroid_live_NativeLib
 * Method:    mainloop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tudelft_triblerdroid_live_NativeLib_mainloop
  (JNIEnv *, jobject);

/*
 * Class:     com_tudelft_triblerdroid_live_NativeLib
 * Method:    stop
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tudelft_triblerdroid_live_NativeLib_stop
  (JNIEnv *, jobject);

/*
 * Class:     com_tudelft_triblerdroid_live_NativeLib
 * Method:    httpprogress
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tudelft_triblerdroid_live_NativeLib_httpprogress
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tudelft_triblerdroid_live_NativeLib
 * Method:    hello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tudelft_triblerdroid_live_NativeLib_hello
  (JNIEnv *, jobject);

/*
 * Class:     com_tudelft_triblerdroid_live_NativeLib
 * Method:    stats
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tudelft_triblerdroid_live_NativeLib_stats
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
