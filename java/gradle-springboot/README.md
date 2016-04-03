# hello-world-gradle-springboot

Java springboot based hello world ready to run.  
Using an embedded app server like Jetty.
Build tool is Gradle.  
Adopted from https://github.com/spring-guides/gs-spring-boot.git  
Steps 3-4 are optional if just using the ready made build jar in the repo.  


1. Clone repo  
```git clone https://github.com/jbpadgett/hello-world-repo.git```  

2. Cd into java war-tomcat dir  
```cd java/gradle-springboot/```  

3. Make a fresh build with Gradle if not built already  
```./gradlew build```  
 
4. Run the app using embedded app server container  
```java -jar build/libs/gradle-springboot-0.1.0.jar```  

5. Hit the hello page with browser  
```http://localhost:8080```  


