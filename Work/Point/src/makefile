#instruction for creating every executable file
all: point.exe 

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating point.exe executable file after linking
point.exe: point.cpp 
	g++ -o ../bin/point.exe point.cpp 
#instruction to execute the point.exe file
run01: 
	@echo ---------------------
	@echo Running point.exe
	../bin/point.exe
	@echo
