SRC= TestSystemLog.cpp SystemLog.hpp
OBJ= TestSystemLog.o 
EXE= SystemLog
CXX= g++
CXXFLG= -lpthread

$(EXE) : $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLG)

$(OBJ) : $(SRC)
	$(CXX) -c $^ $(CXXFLG)

clean : 
	rm -rf !(makefile|TestSystemLog.cpp|SystemLog.hpp)
