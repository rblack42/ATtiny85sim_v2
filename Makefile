include mk/util.mak
.DEFAULT_GOAL	:= all

TARGET	:= attiny85sim
TSTTGT	:= testapp

.PHONY: all
all:	version $(TARGET) ## build simulator app


.PHONY: test
test:	$(TSTTGT)
	./$(TSTTGT)

.PHONY: run
run:	$(TARGET)
	./$(TARGET) machine.hdl

# program build rules
$(TARGET):	$(OBJS)
	$(CXX) -o $@ $^
	$(shell ./scripts/inc_version.sh build)


$(TSTTGT):	$(TOBJS) $(LOBJS)
	$(CXX) -o $@ $^


