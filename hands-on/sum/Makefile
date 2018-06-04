FLAGS=-O3 -g -fopenmp #-xCORE-AVX512 -qopt-report5

CXX=icpc

RM=rm -f

EXEC=sum

all: $(EXEC)

$(EXEC):
	$(CXX) $(FLAGS) $(EXEC).cpp -c -o $(EXEC).o
	$(CXX) $(FLAGS) $(EXEC).o -o $(EXEC)

clean:
	$(RM) $(EXEC).o $(EXEC)
