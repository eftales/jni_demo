all:

generate:clean
	javac -h . TestJni.java

build:generate
	gcc *.cpp *.h -I"${JAVA_HOME}/include" -I"${JAVA_HOME}/include/linux" -fPIC -shared -o libTestJni.so
	javac TestJni.java
	javac HelloWorld.java

run:
	java -Djava.library.path='.' HelloWorld

clean:
	rm -f *.class *.so *.gch