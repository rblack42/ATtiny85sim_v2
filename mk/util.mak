.PHONY: help
help:	## display help messages
	@grep -E -h '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) \
		| sort \
		| awk 'BEGIN {FS = ":.*?## "} { printf "\033[36m%-30s\033[0m %s\n", $$1, $$2 }'

# version management
.PHONY: version
version: ## show current project version
	@if ! ([ -f .version ]); then \
		echo "#define version \"0.0.0\"" > .version; \
    fi
	cat .version

# C++ source files
CSRCS   := $(wildcard src/*.cpp)
LSRCS   := $(wildcard lib/*.cpp)
TSRCS   := $(wildcard tests/*.cpp)

# C++ object files
COBJS   := $(CSRCS:.cpp=.o)
LOBJS   := $(LSRCS:.cpp=.o)
TOBJS   := $(TSRCS:.cpp=.o)
OBJS    := $(COBJS) $(LOBJS)

# C++ build tools
CXX     := g++
RM      := rm -f

# C++ compile fags
CFLAGS   := -std=c++11 -Iinclude

# c++ implicit build rule
%.o:    %.cpp
	$(CXX) -c $(CFLAGS) $< -o $@

# utility targets

.PHONY: clean
clean:  ## clean project
	$(RM) $(PROJNAME) $(OBJS)

print-%:
	@echo $* = $($*)

.PHONY:	debug
debug: ## display local make variables defined
	@$(foreach V, $(sort $(.VARIABLES)), \
		$(if $(filter-out environment% default automatic,\
		$(origin $V)), \
		$(warning $V = $($V) ($(value $V)))) \
	)

.PHONY:	debug-all
debug-all: ## display all make variables defined
	@$(foreach V, $(sort $(.VARIABLES)), \
		$(warning $V = $($V) ($(value $V))) \
	)

#   vim:ft=Makefile:
