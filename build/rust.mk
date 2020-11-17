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

LIBRARIES+=$(RLIB_OUT)


RLIB=$(RUST_OUT_DIR)/$(RUST_TARGET)/$(RUST_BUILD_TYPE)/$(RUST_LIB_NAME)
RLIB_OUT=$(ARTIFACTS_DIR)/$(RUST_LIB_NAME)


RUST_FILES := $(wildcard $(ROOT)/src/*.rs)

_compile: $(RUST_FILES)
	cargo build --$(RUST_BUILD_TYPE) --target $(RUST_TARGET)


rust: _compile
	mkdir -p $(ARTIFACTS_DIR)
	$(OBJCOPY) -R .ARM.attributes $(RLIB) $(RLIB_OUT)
#cp $(BINDINGS) $(BINDINGS_OUT)


$(RLIB_OUT): rust
