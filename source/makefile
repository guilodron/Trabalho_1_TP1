IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = dominio.hpp entidade.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ =dominio.o entidade.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tp1: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 