//
//  com_codingdie_speex_SpeexUtils.c
//  test4
//
//  Created by xupeng on 2017/3/14.
//  Copyright © 2017年 xupeng. All rights reserved.
//

#include "com_codingdie_speex_SpeexUtils.h"
#include "SpeexDecode.h"
JNIEXPORT jboolean JNICALL Java_com_codingdie_speex_SpeexUtils_decode
(JNIEnv * env, jobject p2, jstring p3, jstring p4){
    const char *str3 = (*env)->GetStringUTFChars(env, p3, 0);
    const char *str4 = (*env)->GetStringUTFChars(env, p4, 0);
    return decode(str3,str4);
}
