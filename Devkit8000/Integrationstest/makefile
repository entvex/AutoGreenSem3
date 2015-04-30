SRC= TestMonitor.cpp Monitor.hpp UART.hpp DataLog.hpp DateStruct.hpp Plant.hpp Indstillinger.hpp SensorData.hpp rs232.c DataLog_list.hpp DoublyLinkedList.hpp
DEP= rs232.h Node.h
OBJ= TestMonitor.o 
EXE= Monitor
CXX= g++
CXXFLG= -lpthread -std=c++0x

$(EXE) : $(OBJ)
	$(CXX) -o $@ $^ $(DEP) $(CXXFLG)

$(OBJ) : $(SRC)
	$(CXX) -c $^ $(DEP) $(CXXFLG) 

clean : 
	rm -rf !(makefile|TestMonitor.cpp|Monitor.hpp)
