# hello-world-servlet-tomcat

Java servlet hello world ready to run in tomcat app server.

1. Set Classpath for tomcat-api.jar for compiling the jar
export CLASSPATH="/usr/local/Cellar/tomcat/8.0.33/libexec/bin/bootstrap.jar:/usr/local/Cellar/tomcat/8.0.33/libexec/bin/tomcat-juli.jar:/usr/local/Cellar/tomcat/8.0.33/libexec/bin/servlet-api.jar"

or

cp /usr/local/Cellar/tomcat/8.0.33/libexec/bin/servlet-api.jar   /Library/Java/JavaVirtualMachines/jdk1.8.0_45.jdk/Contents/Home/jre/lib/ext


2. Change into servlet WEB-INF directory
```cd hello-world-repo/java/servlet-tomcat/helloservlet/WEB-INF```


3. Compile the src file(s)
```javac -d classes src/mypkg/HelloServlet.java```
or
```javac -cp $CLASSPATH:/usr/local/Cellar/tomcat/8.0.33/libexec/bin/servlet-api.jar -d classes src/mypkg/HelloServlet.java```


4. 