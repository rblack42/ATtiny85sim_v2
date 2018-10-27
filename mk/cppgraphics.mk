ifeq ($(OS), Windows_NT)
	EXT = .exe
	PREFIX =
	RM	= del
	CXXFLAGS += -I\tools\freeglut\include -Iinclude
	LFLAGS += -L\tools\freeglut\lib\x64
	LFLAGS += -lfreeglut -lglu32 -lopengl32 -Wl,--subsystem,windows
	DOBJS = $(subst /,\,$(OBJS))
else
	EXT =
	RM 	= rm -f
	PREFIX = ./
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S), Linux)
	    CXXFLAGS += -I/usr/include
		LFLAGS += -lGL -lGLU -lglut
	endif
	ifeq ($(UNAME_S), Darwin)
		CXXFLAGS += -I/usr/local/include
		CXXFLAGS += -Wno-deprecated-declarations
		LFLAGS += -framework OpenGL -framework GLUT
	endif
	DOBJS = $(OBJS)
endif

