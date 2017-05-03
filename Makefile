.PHONY: clean
BSRC = build/src/
BTEST = build/test/
bin/deposit-calc: $(BSRC)deposit.o $(BSRC)main.o
	gcc -Wall -Werror -o bin/calc $(BSRC)deposit.o $(BSRC)main.o
$(BSRC)main.o: src/main.c
	gcc -c -o $(BSRC)main.o src/main.c
$(BSRC)deposit.o: src/deposit.c
	gcc -c -o $(BSRC)deposit.o src/deposit.c
bin/deposit-calc-test: $(BTEST)deposit_test.o $(BTEST)main.o $(BTEST)validation.o
	gcc -Wall -o bin/deposit-calc-test $(BTEST)deposit_test.o $(BTEST)main.o $(BTEST)validation.o
$(BTEST)main.o: test/main.c
	gcc -Wall -c -o $(BTEST)main.o test/main.c -I thirdparty
$(BTEST)deposit_test.o: test/deposit_test.c
	gcc -Wall -c -o $(BTEST)deposit_test.o test/deposit_test.c -I thirdparty src
$(BTEST)validation.o: test/validaton_test.c
	gcc -Wall -c -o $(BTEST)validation.o test/validation_test.c -I thirdparty src
clean:
	rm -rf $(BSRC)*.o bin/*