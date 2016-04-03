# hello-world-servlet-tomcat

Java servlet hello world ready to run in tomcat app server.
Steps 3-6 are optional if just using the ready made servlet in the repo.


1. Clone repo  
```git clone https://github.com/jbpadgett/hello-world-repo.git```

2. Cd into java war-tomcat dir  
```cd java/servlet-tomcat/```

3. Set Classpath for tomcat-api.jar for compiling the jar  
	OSX  
	```export CLASSPATH="/usr/local/Cellar/tomcat/8.0.33/libexec/bin/bootstrap.jar:/usr/local/Cellar/tomcat/8.0.33/libexec/bin/tomcat-juli.jar:/usr/local/Cellar/tomcat/8.0.33/libexec/bin/servlet-api.jar"```  
	or  
	```cp /usr/local/Cellar/tomcat/8.0.33/libexec/bin/servlet-api.jar /Library/Java/JavaVirtualMachines/jdk1.8.0_45.jdk/Contents/Home/jre/lib/ext```  

4. Change into servlet WEB-INF directory  
```cd hello-world-repo/java/servlet-tomcat/helloservlet/WEB-INF```

5. Compile the servlet from src file(s)  
```javac -d classes src/mypkg/HelloServlet.java```
or
```javac -cp $CLASSPATH:/usr/local/Cellar/tomcat/8.0.33/libexec/bin/servlet-api.jar -d classes src/mypkg/HelloServlet.java```

6. Build WAR  
```jar cfM helloservlet.war *```

7. Deploy WAR into tomcat catalina  
```copy helloservlet.war /usr/local/Cellar/tomcat/8.0.33/libexec/webapps/helloservlet.war```

8. Hit the hello page with browser  
http://localhost:8080/helloservlet/hello


