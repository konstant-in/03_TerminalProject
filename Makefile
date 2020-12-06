Window: Window.c
	gcc Window.c -o Window -lncursesw

clean:
	rm -f *~ *.o Window a.out
