.PHONY: inc-major
inc-major:	## increment major verison number
	@python mk/inc_version.py major

.PHONY: inc-minor
inc-minor:	## increment minor verison number
	@python mk/inc_version.py minor

.PHONY: inc-build
inc-build:	## increment build verison number
	@python mk/inc_version.py build

.PHONY:	version
version: ## display current version number
	@python mk/inc_version.py version
