SRC= TestMonitor.cpp Monitor.hpp UART.hpp Datalog.hpp
OBJ= TestMonitor.o 
EXE= Monitor
CXX= g++
CXXFLG= -lpthread

$(EXE) : $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLG)

$(OBJ) : $(SRC)
	$(CXX) -c $^ $(CXXFLG)

clean : 
	rm -rf !(makefile|TestMonitor.cpp|Monitor.hpp)
