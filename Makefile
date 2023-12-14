CXX = g++
CXXFLAGS = -std=c++11

calculator_app: main.cpp calculator.cpp calculator.h
	$(CXX) $(CXXFLAGS) main.cpp calculator.cpp -o calculator_app

clean:
	rm -f calculator_app
