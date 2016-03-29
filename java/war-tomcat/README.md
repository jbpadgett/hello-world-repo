# hello-world-war-tomcat

1. Clone repo  
```git clone https://github.com/jbpadgett/hello-world-repo.git```

2. Cd into java war-tomcat dir  
```cd java/war-tomcat/```

3. Build WAR if not already done  
```jar cfM hello.war *```

4. Deploy WAR into tomcat catalina  
```copy hello.war /usr/local/Cellar/tomcat/8.0.33/libexec/webapps/hello.war```

5. Start tomcat server  
Linux  
```/etc/rc.d/init.d/tomcat start```
OSX (homebrew install)  
```sudo -u nobody /usr/local/Cellar/tomcat/8.0.33/bin/catalina start```
Windows  
```"catalina.bat start" or "startup.bat"```

6. Hit the hello page with browser  
http://localhost:8080/hello/hello.html

