cc = g++
prom = facadePattern
deps = $(shell find ./ -name "*.h")
src = $(shell find ./ -name "*.cpp")
obj = $(src:%.cpp=%.o) 

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)

%.o: %.c $(deps)
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom)
