.PHONY: clean All

All:
	@echo "----------Building project:[ sizeOfOperator - Debug ]----------"
	@cd "sizeOfOperator" && "$(MAKE)" -f  "sizeOfOperator.mk"
clean:
	@echo "----------Cleaning project:[ sizeOfOperator - Debug ]----------"
	@cd "sizeOfOperator" && "$(MAKE)" -f  "sizeOfOperator.mk" clean
