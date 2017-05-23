.PHONY: clean
BSRC = build/src/
BTEST = build/test/
bin/deposit-calc: $(BSRC)deposit.o $(BSRC)main.o
	gcc -Wall -Werror -o bin/calc $(BSRC)deposit.o $(BSRC)main.o
$(BSRC)main.o: src/main.c
	gcc -c -o $(BSRC)main.o src/main.c
$(BSRC)deposit.o: src/deposit.c
	gcc -c -o $(BSRC)deposit.o src/deposit.c
bin/deposit-calc-test: $(BTEST)deposit_test.o $(BTEST)main.o $(BTEST)validation.o $(BSRC)deposit.o
	gcc -Wall $(BTEST)deposit_test.o $(BTEST)main.o $(BTEST)validation.o $(BSRC)deposit.o -o bin/deposit-calc-test
$(BTEST)main.o: test/main.c
	gcc -I thirdparty -c test/main.c -o $(BTEST)main.o
$(BTEST)deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -I src -c test/deposit_test.c -o $(BTEST)deposit_test.o
$(BTEST)validation.o: test/validation_test.c
	gcc -I thirdparty -I src -c test/validation_test.c -o $(BTEST)validation.o
clean:
	rm -rf $(BSRC)*.o bin/*
