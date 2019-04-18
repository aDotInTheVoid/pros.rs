# Probably dont change unless you realy understand this build system
# These values change where make expects thinks, but not where they're placec
RUST_OUT_DIR=$(ROOT)/target
RUST_TARGET=armv7r-none-eabi
RUST_BUILD_TYPE=release
RUST_CRATE_NAME=pros_rs
RUST_SRC_DIR=$(ROOT)/src
RUST_LIB_NAME=lib$(RUST_CRATE_NAME).a

BINDING_NAME=rust_bindings.h
BINDINGS=$(BINDIR)/$(BINDING_NAME)
BINDINGS_OUT_DIR = $(INCDIR)
BINDINGS_OUT = $(BINDINGS_OUT_DIR)/$(BINDING_OUT_NAME)

RUST_SOURCES_DIRS+=$(RUST_SRC_DIR)
RUST_SOURCES_DIRS+=$(ROOT)/cortex_a9_types
RUST_SOURCES_DIRS+=$(INCDIR)

RLIB=$(RUST_OUT_DIR)/$(RUST_TARGET)/$(RUST_BUILD_TYPE)/$(RUST_LIB_NAME)
RLIB_OUT=$(FWDIR)/$(RUST_LIB_NAME)


cargo: $(shell find $(RUST_SOURCES_DIRS) -type f | grep -v bindings)
	cargo build --$(RUST_BUILD_TYPE) --target $(RUST_TARGET)

$(BINDINGS): cargo
$(RLIB): cargo

$(BINDINGS_OUT): $(BINDINGS)
	cp $(BINDINGS) $(BINDINGS_OUT)
$(RLIB_OUT): $(RLIB)
	# This is a major hack. We remove all arch info to ensure 
	# gcc is fine with building
	$(OBJCOPY) -R .ARM.attributes $(RLIB) $(RLIB_OUT)

.PHONY: rust
rust: $(RLIB_OUT) $(BINDINGS_OUT)



