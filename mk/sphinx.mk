.PHONY: reqs
reqs:   requirements.txt ## install documentation libraries
	pip install -r $<

.PHONY: docs
docs:
	cd rst && sphinx-build -b html -d _build/doctrees . ../docs
