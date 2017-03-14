package com.codingdie.speex;

import java.lang.reflect.Field;

/**
 * Created by xupeng on 2017/3/13.
 */
public class SpeexUtils {


    public static native boolean decode(String src, String dist);

    static {
        try {

            System.setProperty("java.library.path", System.getProperty("java.library.path")
                    + ":/usr/local/lib/");
            Field fieldSysPath = ClassLoader.class.getDeclaredField("sys_paths");
            fieldSysPath.setAccessible(true);
            fieldSysPath.set(null, null);
            System.loadLibrary("jspeex");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }


}
