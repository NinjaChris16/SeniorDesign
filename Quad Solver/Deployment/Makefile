.PHONY: deploy
deploy:
	cd ../Build; make; cp quad-solver ../Deployment/quad-solver

.PHONY: clean
clean:
	-rm quad-solver
	cd Build; make clean

# all tests
.PHONY: test
test: deploy integration-test unit-test

# unit tests
.PHONY: unit-test
unit-test:
	cd Build; make test

# integratino tests
.PHONY: integration-test
integration-test:
	cd Build; make test
