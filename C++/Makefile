APP=main.exe
MAIN=main.cpp
TOOLS_OBJ=tools.o
TOOLS_H=tools.hpp
TOOLS=tools.cpp

run: $(APP)
	./$(APP)

$(APP): $(MAIN) $(TOOLS_H) $(TOOLS_OBJ)
	g++ $(MAIN) $(TOOLS_OBJ) -o $(APP)

$(TOOLS_OBJ): $(TOOLS)
	g++ -c $(TOOLS) -o $(TOOLS_OBJ)