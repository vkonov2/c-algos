all: gauss

gauss: main.o det.o print.o time_now.o swap_str.o
	g++ main.o det.o print.o time_now.o swap_str.o -o gauss

main.o: main.cpp
	g++ -c main.cpp
print.o: print.cpp
	g++ -c print.cpp
det.o: det.cpp
	g++ -c det.cpp
time_now.o: time_now.cpp
	g++ -c time_now.cpp
swap_str.o: swap_str.cpp
	g++ -c swap_str.cpp

clean:
	rm -rf *.0 gauss
