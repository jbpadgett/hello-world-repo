# Hello World C++ Wt Web Framework

A C++ Hello World app using the Wt C++ web framework(<https://github.com/kdeforche/wt>).  

1. Clone repo  
```git clone https://github.com/jbpadgett/hello-world-repo.git```  

2. Cd into the c++ hello world dir for Wt  
```cd c++/wt```  	

3. Install the wt dependencies
<http://redmine.webtoolkit.eu/projects/wt/wiki/Installing_Wt_on_Mac_OS_X_Yosemite>  
OSX:
`brew install cmake`  
`brew install boost`  
`brew install fcgi`  
`brew install openssl`  

4. Then build the wt server  
`git clone https://github.com/kdeforche/wt`  
`cd wt`  
`mkdir build`  
`cd build`  
```
cmake \
     -DCMAKE_CXX_FLAGS='-stdlib=libc++' -DCMAKE_EXE_LINKER_FLAGS='-stdlib=libc++' \
     -DCMAKE_MODULE_LINKER_FLAGS='-stdlib=libc++' -DWT_CPP_11_MODE='-std=c++11' \
     -DSSL_PREFIX=/usr/local/Cellar/openssl/1.0.2 \
    ../
```  
`make`  
`sudo make install`  

5. Compile the App with the Wt server  
`g++ -o hello hello.cc -lwthttp -lwt`  

6. Start the server and test  
`./hello --docroot . --http-address 0.0.0.0 --http-port 9090`


