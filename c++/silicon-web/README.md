# Hello World C++ Silicon Web Framework

A C++ Hello World app using the Silicon C++ web framework(<http://siliconframework.org/>).  

1. Clone repo  
```git clone https://github.com/jbpadgett/hello-world-repo.git```  

2. Cd into ruby rails hello world dir  
```cd c++/silicon```  

3. Install the libmicrohttpd dependency
Since Silicon in only an abstraction and does not implement a HTTP server, you will need to install libmicrohttpd if it is not already on your system.
<https://www.gnu.org/software/libmicrohttpd/>  
OSX:  
```brew install libmicrohttpd```  
Debian:  
```sudo apt-get install libmicrohttpd```  
Enterprise Linux:  
```sudo yum install -y libmicrohttpd```  

4. Install Silicon Web Framework  
```brew install cmake```  
```brew install boost ```  
```git clone https://github.com/matt-42/silicon.git```  
```cd silicon```  
```sudo mkdir /opt/silicon```  
````./install.sh /opt/silicon```  
All the variables starting with _ are called symbols. They are the core of the static paradigm of the framework.  
To generate their definition, use the ```iod_generate_symbols``` tool provided by the iod library and located in the directory ```/opt/silicon/bin```.  
```cd /hello-world-repo/c++```  
```/opt/silicon/bin/iod_generate_symbols hello.cc symbols.hh```  

5. Compile the server  
```clang++ -std=c++14 -I /opt/silicon/include hello.cc -lmicrohttpd -o hello```  

6. Start the server and test  
```./hello```  

```curl "http://127.0.0.1:12345/hello"```  





