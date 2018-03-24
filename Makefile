PROJNAME := attiny85sim
UID		 := $(shell id -u)
GID		 := $(shell id -g)

.phony: build
build:
	docker build -t $(PROJNAME) .

.PHONY: shell
shell:
	docker run --rm -it \
		--user="$(UID):$(GID)" \
		-v "$(PWD)/code":/workdir \
		$(PROJNAME) bash

.PHONY: clean
clean:
	docker rmi $(PROJNAME)
	docker ps -aq | xargs docker rm

