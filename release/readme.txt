linux:
  1,make -f makefile-linux
  2,make -f makefile-linux install
mac: 
  1,make -f makefile-mac
  2,make -f makefile-mac install

then import the jar 'jspeex.jar'
use as like this:
   SpeexUtils.decode("/Users/xupeng/Documents/test2.speex", "/Users/xupeng/Documents/test10.wav");


