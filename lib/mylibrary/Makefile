CXX ?= g++
CXXFLAGS ?= -g -Wall -W -Winline -ansi
CXXFLAGS += -Isrc -Itests/UnitTest++/src
RM = rm

.SUFFIXES: .o .cpp

name        = MyLibrary
lib         = src/lib$(name).a
test        = tests/test$(name)
testlibdir  = tests/UnitTest++
testlib     = UnitTest++
testlibpath = $(testlibdir)/lib$(testlib).a
testrunner  = tests/Main.cpp

objects     = src/MyLibrary.o

testobjects = tests/TestAddition.o

LDFLAGS ?= -Lsrc -l$(name) -L$(testlibdir) -l$(testlib)

all: $(lib)

$(lib): $(objects)
	@echo Creating My Library...
	@$(AR) cr $(lib) $(objects)

.cpp.o:
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	-@$(RM) $(objects) $(lib) $(testobjects) 2> /dev/null

test: $(lib) $(testlibpath) $(testobjects)
	@$(CXX) $(testrunner) $(CXXFLAGS) $(testobjects) $(LDFLAGS) -o $(test)
	@echo running unit tests...
	@./$(test)

$(testlibpath):
	$(MAKE) -C $(testlibdir)

testclean:
	$(MAKE) -C $(testlibdir) clean


