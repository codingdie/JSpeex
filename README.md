# JSpeex
A Java Library use jni to decode *.speex to *.wav in pc 
first install libspeex,then git cloen this project,cd release folder .  
linux:  
1,make -f makefile-linux</br>
2,make -f makefile-linux install</br>
mac:</br>
1,make -f makefile-mac    
2,make -f makefile-mac install  
then import the jar 'jspeex.jar' in the dir release folder  

or import with gradle 
```
repositories { . 
    maven { url 'https://jitpack.io' } . 
} 

dependencies {
    compile 'com.github.codingdie:JSpeex:1.0'
}
```  
or import with maven  
```  
<repositories>
    <repository>
      <id>jitpack.io</id>
      <url>https://jitpack.io</url>
    </repository>
</repositories>  
  
<dependency>
    <groupId>com.github.codingdie</groupId>
    <artifactId>JSpeex</artifactId>
    <version>1.0</version>
</dependency>
``` 
use as like this:  
``` 
    SpeexUtils.decode("/Users/xupeng/Documents/test2.speex", "/Users/xupeng/Documents/test10.wav");
``` 
