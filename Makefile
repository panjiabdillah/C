CFLAGS=-Wall -g

clean:
	find . -type f -name 'ex*' ! -name '*.c' ! -name '*.mak' -exec rm -f {} + 
	find . -type d -name '*.dSYM' -exec rm -rf {} + 
