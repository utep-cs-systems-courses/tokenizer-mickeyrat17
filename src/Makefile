CFLAGS= -g -03

tokenizer.o: tokenizer.h

tokenizer: tokenizer.o
	cc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o tokenizer

run: tokenizer
	./tokenizer
