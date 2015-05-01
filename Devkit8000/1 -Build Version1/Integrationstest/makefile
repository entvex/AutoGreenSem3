SRC= TestMonitor.cpp Monitor.hpp UART.h DataLog.hpp Date.hpp Plant.hpp Indstillinger.hpp SensorData.hpp rs232.c DataLog_list.hpp DoublyLinkedList.hpp Message.hpp MsgQueue.hpp SystemLog.hpp
DEP= rs232.h Node.h
OBJ= TestMonitor.o 
EXE= Monitor
CXX= g++
CXXFLG= -lpthread -std=c++0x -Wall -Wextra -o2

$(EXE) : $(OBJ)
	$(CXX) -o $@ $^ $(DEP) $(CXXFLG)

$(OBJ) : $(SRC)
	$(CXX) -c $^ $(DEP) $(CXXFLG) 

clean : 
	rm -rf !(makefile|TestMonitor.cpp|Monitor.hpp)
