CC = gcc
CFLAGS = -std=c99 -Wall -Werror -pedantic
LDLIBS = -lm

MODS = ../src/calc_roots ../num_roots ../input ../validation ../output ../format ../cunit ../sqrt

quad-solver: quad-solver.c ../src/calc_roots/calc_roots.o ../src/format/format.o ../src/num_roots/num_roots.o ../src/input/input.o ../src/validation/input_val.o ../src/output/output.o ../src/sqrt/sqrt.o

.PHONY: test
test:
	-$(foreach var,$(MODS),cd $(var); make test; done)
	$(foreach file,find ../src -executable -type f,$(file))

.PHONY: format
format:
	find . \( -name '*.c' -o -name '*.h' \) -execdir indent -linux "{}" \;
	find . \( -name '*.c~' -o -name '*.h~' \) -execdir rm "{}" \;

.PHONY: clean
clean:
	-rm ./quad-solver
	-rm ./log.txt
	$(foreach var,$(MODS),cd $(var); make clean; done)
