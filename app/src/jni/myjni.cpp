#include "myjni.h"

JNIEXPORT jstring JNICALL
Java_com_fuzzyrock_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {
    std::string hello = "Hello Fuzzy Rock from C++";
    return env->NewStringUTF(hello.c_str());
}

// JNIEXPORT void JNICALL 
// Java_com_fuzzyrock_MainActivity_initCoverage(JNIEnv *env, jobject instance, jstring dataPath) {
// 	const char *dataPathTemp = env->GetStringUTFChars(dataPath, NULL);

// 	/* GCOV_PREFIX_STRIP indicates how many
// 	 * directory names are stripped off the
// 	 * initial path. To avoid having to
// 	 * calculate an exact number, and to
// 	 * ensure that coverage data is saved
// 	 * even if the source code is moved,
// 	 * the variable is set to a high value
// 	 * that will cause all initial directories
// 	 * to be stripped off.
// 	 */
// 	setenv("GCOV_PREFIX", dataPathTemp, 1);
// 	setenv("GCOV_PREFIX_STRIP", "100", 1);

// 	env->ReleaseStringUTFChars(dataPath, dataPathTemp);
// }