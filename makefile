starship : 
	clang -O3 -L /opt/homebrew/lib/ -I /opt/homebrew/include/ -lraylib starship.c -o star
	./star