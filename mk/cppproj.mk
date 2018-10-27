CXX	    := $(shell which g++)
MAKE	:= $(shell which make)
GIT	    := $(shell which git)
DEL     := rm -f

USRCS	:= $(wildcard src/*.cpp)
LSRCS	:= $(shell python mk/pyfind.py lib .cpp)
TSRCS	:= $(wildcard tests/*.cpp)
SRCS    := $(USRCS) $(LSRCS) $(TSRCS)

UOBJS   := $(USRCS:.cpp=.o)
LOBJS   := $(LSRCS:.cpp=.o)
TOBJS   := $(TSRCS:.cpp=.o)
OBJS    := $(UOBJS) $(LOBJS) $(TOBJS)

CXXFLAGS  := -std=c++11 -Iinclude

$(PROJNAME)$(EXT):    $(UOBJS) $(LOBJS)
	$(CXX) -o $@ $^ $(LFLAGS)

%.o:    %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(TSTAPP)$(EXT):  $(TOBJS) $(LOBJS)
	$(CXX) -o $@ $^ $(LFLAGS)

.PHONY: run
run: $(PROJNAME)$(EXT) ## run default application
	./$(PROJNAME)

.PHONY: test
test:   $(TSTAPP)$(EXT) ## Run unit tests on application library code
	$(PREFIX)$(TSTAPP)

.PHONY: clean
clean:  ## Remove all build artifacts
	$(DEL) $(OBJS) $(PROJNAME)$(EXT) $(TSTAPP)$(EXT)

