CC = g++
CFLAGS = -Wall
LIB = -lSDL2 -lSDL2main
SDIR = src
HDIR = includes
BUILDDIR = bin
BINARY = game_engine.o

# ==========================================================================

# listing all .cpp file inside SDIR and his child folder
SOURCES := $(foreach dir, $(wildcard $(SDIR)/*),$(wildcard $(dir)/*.cpp)) $(wildcard $(SDIR)/*.cpp)



# listing all .o file from all .cpp file from SDIR
OBJECTS := $(patsubst $(SDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))

# ==========================================================================

all: $(BINARY)

$(BINARY): $(OBJECTS)
	ld -relocatable $^ -o $@

$(BUILDDIR)/%.o: $(SDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(LIB) -I$(HDIR) -c $< -o $@

clean:
	rm -rf $(foreach dir,$(wildcard $(BUILDDIR)/*), $(dir)) $(BINARY)

# ==========================================================================