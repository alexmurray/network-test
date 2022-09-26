all: network-test

network-test: network-test.c
	gcc $^ -o $@

install: network-test
	install -D $< $(DESTDIR)/usr/bin/$<
