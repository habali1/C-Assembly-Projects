CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

KEY1 = testKey
KEY2 = AAAA
KEY3 = whatsup

test: test1 test2 test3

# TEST 1
test1: test1_decode.txt test1_decode_bad.txt
	@echo "Comparing test1_decode.txt to original"
	diff -i test1_decode.txt test1.txt || true
	@echo "Comparing test1_decode_bad.txt to original (expect miscompares)"
	diff -i test1_decode_bad.txt test1.txt || true
	rm -f test1_encode.txt test1_decode.txt test1_decode_bad.txt

test1_encode.txt: encode test1.txt
	@echo "Creating test1_encode.txt"
	./encode $(KEY1) < test1.txt > test1_encode.txt
	./checkASCII < test1_encode.txt

test1_decode.txt: decode checkASCII test1_encode.txt
	@echo "Creating test1_decode.txt"
	./decode $(KEY1) < test1_encode.txt > test1_decode.txt
	./checkASCII < test1_decode.txt

test1_decode_bad.txt: decode test1_encode.txt
	@echo "Creating test1_decode_bad.txt"
	./decode $(KEY2) < test1_encode.txt > test1_decode_bad.txt

# Test 2 
test2: test2_decode.txt test2_decode_bad.txt
	@echo "Comparing test2_decode.txt to original"
	diff -i test2_decode.txt test2.txt || true
	@echo "Comparing test2_decode_bad.txt to original (expect miscompares)"
	diff -i test2_decode_bad.txt test2.txt || true
	rm -f test2_encode.txt test2_decode.txt test2_decode_bad.txt

test2_encode.txt: encode test2.txt
	@echo "Creating test2_encode.txt"
	./encode $(KEY2) < test2.txt > test2_encode.txt
	./checkASCII < test2_encode.txt

test2_decode.txt: decode checkASCII test2_encode.txt
	@echo "Creating test2_decode.txt"
	./decode $(KEY2) < test2_encode.txt > test2_decode.txt
	./checkASCII < test2_decode.txt

test2_decode_bad.txt: decode test2_encode.txt
	@echo "Creating test2_decode_bad.txt"
	./decode $(KEY3) < test2_encode.txt > test2_decode_bad.txt

# Test 3 
test3: test3_decode.txt test3_decode_bad.txt
	@echo "Comparing test3_decode.txt to original"
	diff -i test3_decode.txt test3.txt || true
	@echo "Comparing test3_decode_bad.txt to original (expect miscompares)"
	diff -i test3_decode_bad.txt test3.txt || true
	rm -f test3_encode.txt test3_decode.txt test3_decode_bad.txt

test3_encode.txt: encode test3.txt
	@echo "Creating test3_encode.txt"
	./encode $(KEY3) < test3.txt > test3_encode.txt
	./checkASCII < test3_encode.txt

test3_decode.txt: decode checkASCII test3_encode.txt
	@echo "Creating test3_decode.txt"
	./decode $(KEY3) < test3_encode.txt > test3_decode.txt
	./checkASCII < test3_decode.txt

test3_decode_bad.txt: decode test3_encode.txt
	@echo "Creating test3_decode_bad.txt"
	./decode $(KEY1) < test3_encode.txt > test3_decode_bad.txt

# Compiling
encode: encode.c
	$(CC) $(CFLAGS) -o encode encode.c

decode: decode.c
	$(CC) $(CFLAGS) -o decode decode.c

checkASCII: checkASCII.c
	$(CC) $(CFLAGS) -o checkASCII checkASCII.c

# Clean 
clean:
	rm -f encode decode checkASCII test1_encode.txt test1_decode.txt test1_decode_bad.txt test2_encode.txt test2_decode.txt test2_decode_bad.txt test3_encode.txt test3_decode.txt test3_decode_bad.txt
