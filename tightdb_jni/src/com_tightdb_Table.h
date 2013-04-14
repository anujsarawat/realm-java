/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_Table */

#ifndef _Included_com_tightdb_Table
#define _Included_com_tightdb_Table
#ifdef __cplusplus
extern "C" {
#endif
#undef com_tightdb_Table_INFINITE
#define com_tightdb_Table_INFINITE -1i64
/*
 * Class:     com_tightdb_Table
 * Method:    createNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_createNative
  (JNIEnv *, jobject);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeClose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeIsValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Table_nativeIsValid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeAddColumn
 * Signature: (JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeAddColumn
  (JNIEnv *, jobject, jlong, jint, jstring);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeRemoveColumn
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeRemoveColumn
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeRenameColumn
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeRenameColumn
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeUpdateFromSpec
 * Signature: (JLcom/tightdb/TableSpec;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeUpdateFromSpec
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetColumnCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeGetColumnCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetTableSpec
 * Signature: (J)Lcom/tightdb/TableSpec;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_Table_nativeGetTableSpec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetColumnName
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Table_nativeGetColumnName
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetColumnType
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_Table_nativeGetColumnType
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeRemove
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeRemove
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeRemoveLast
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeRemoveLast
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeAddEmptyRow
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeAddEmptyRow
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertFloat
 * Signature: (JJJF)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertDouble
 * Signature: (JJJD)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertDate
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertMixed
 * Signature: (JJJLcom/tightdb/Mixed;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertByteBuffer
 * Signature: (JJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertByteBuffer
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertSubTable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeInsertDone
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeInsertDone
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetLong
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeGetLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetBoolean
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Table_nativeGetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetFloat
 * Signature: (JJJ)F
 */
JNIEXPORT jfloat JNICALL Java_com_tightdb_Table_nativeGetFloat
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetDouble
 * Signature: (JJJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeGetDouble
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetDateTime
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeGetDateTime
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetString
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Table_nativeGetString
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetByteBuffer
 * Signature: (JJJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_Table_nativeGetByteBuffer
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetByteArray
 * Signature: (JJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tightdb_Table_nativeGetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetMixedType
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_Table_nativeGetMixedType
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetMixed
 * Signature: (JJJ)Lcom/tightdb/Mixed;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_Table_nativeGetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetSubTable
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeGetSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetSubTableDuringInsert
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeGetSubTableDuringInsert
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeGetSubTableSize
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeGetSubTableSize
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeClearSubTable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeClearSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetFloat
 * Signature: (JJJF)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetDouble
 * Signature: (JJJD)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetDate
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetByteBuffer
 * Signature: (JJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetByteBuffer
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetMixed
 * Signature: (JJJLcom/tightdb/Mixed;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeAddInt
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeAddInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSetIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeSetIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeHasIndex
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Table_nativeHasIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeSum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeMaximum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeMaximum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeMinimum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeMinimum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeAverage
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeAverage
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSumFloat
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeSumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeMaximumFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_com_tightdb_Table_nativeMaximumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeMinimumFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_com_tightdb_Table_nativeMinimumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeAverageFloat
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeAverageFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeSumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeSumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeMaximumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeMaximumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeMinimumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeMinimumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeAverageDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_com_tightdb_Table_nativeAverageDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeWhere
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeWhere
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindFirstInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindFirstInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindFirstBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindFirstBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindFirstFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindFirstFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindFirstDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindFirstDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindFirstDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindFirstDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindFirstString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindFirstString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindAllInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindAllInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindAllBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindAllBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindAllFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindAllFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindAllDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindAllDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindAllDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindAllDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeFindAllString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeFindAllString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeDistinct
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Table_nativeDistinct
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeOptimize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Table_nativeOptimize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Table
 * Method:    nativeToJson
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Table_nativeToJson
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
