CXX = g++
CXXFLAGS = -Wall -fpermissive -o

OBJDIRNAME = objs
BINDIRNAME = bins

DIRS = Exercise_2 Exercise_3 Exercise_4 Exercise_5 Exercise_6 Exercise_7 Exercise_9 Exercise_10 Exercise_11 Exercise_12

OBJDIRS = $(foreach dir, $(DIRS), $(addprefix $(dir)/, $(OBJDIRNAME)))
BINDIRS = $(foreach dir, $(DIRS), $(addprefix $(dir)/, $(BINDIRNAME)))

SOURCES = $(foreach dir,$(DIRS),$(wildcard $(dir)/*.cpp))

PATHOBJS := $(foreach dir, $(DIRS), $(subst $(dir),$(dir)/$(OBJDIRNAME),$(wildcard $(dir)/*.cpp)))
PATHBINS := $(foreach dir, $(DIRS), $(subst $(dir),$(dir)/$(BINDIRNAME),$(wildcard $(dir)/*.cpp)))

OBJS = $(PATHOBJS:.cpp=.o)
BINS = $(PATHBINS:.cpp=.out)

MKDIR = mkdir -p
RMDIR = rm -rf

define generateRuleForObjs
$(1)/%.o: $(1)/../%.cpp
	@echo Building $$@ with Source $$<
	$(CXX) -c $(CXXFLAGS) $$@ $$<
endef

define generateRuleForBins
$(1)/%.out: $(1)/../objs/%.o
	@echo Linking $$@
	$(CXX) $(CXXFLAGS) $$@ $$<
endef

$(foreach objdir, $(OBJDIRS), $(eval $(call generateRuleForObjs, $(objdir))))
$(foreach bindir, $(BINDIRS), $(eval $(call generateRuleForBins, $(bindir))))

.PHONY: all dir clean

dir:
	@echo $(BINDIRS)
	@echo $(OBJDIRS)
#	@echo $(BINS)
	$(MKDIR) $(BINDIRS)
	$(MKDIR) $(OBJDIRS)

all: $(BINS)
	@$(MAKE) $(BINS)

$(BINS): $(OBJS)

clean: 
	$(RMDIR) $(BINDIRS)
	$(RMDIR) $(OBJDIRS)