GPP	    := $(shell which g++)
MAKE	:= $(shell which make)
GIT	    := $(shell which git)
DEL     := rm -f

USRCS	:= $(wildcard src/*.cpp)
LSRCS	:= $(wildcard lib/*.cpp)
TSRCS	:= $(wildcard tests/*.cpp)
SRCS    := $(USRCS) $(LSRCS) $(TSRCS)

UOBJS   := $(USRCS:.cpp=.o)
LOBJS   := $(LSRCS:.cpp=.o)
TOBJS   := $(TSRCS:.cpp=.o)
OBJS    := $(UOBJS) $(LOBJS) $(TOBJS)

CXXFLAGS  := -std=c++11 -Iinclude

$(PROJNAME):    $(UOBJS) $(LOBJS)
	$(GPP) -o $@ $^ $(LFLAGS)

%.o:    %.cpp
	$(GPP) -c -o $@ $< $(CXXFLAGS)

$(TSTAPP):  $(TOBJS) $(LOBJS)
	$(GPP) -o $@ $^ $(LFLAGS)

.PHONY: test
test:   $(TSTAPP) ## Run unit tests on application library code
	./$(TSTAPP)

.PHONY: clean
clean:  ## Remove all build artifacts
	$(DEL) $(OBJS) $(PROJNAME) $(TSTAPP)

