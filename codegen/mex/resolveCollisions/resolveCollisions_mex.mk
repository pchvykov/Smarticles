START_DIR = /Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles

MATLAB_ROOT = /Applications/MATLAB_R2017a.app
MAKEFILE = resolveCollisions_mex.mk

include resolveCollisions_mex.mki


SRC_FILES =  \
	resolveCollisions_mexutil.c \
	resolveCollisions_data.c \
	resolveCollisions_initialize.c \
	resolveCollisions_terminate.c \
	resolveCollisions.c \
	randperm.c \
	rand.c \
	sortIdx.c \
	mergesort.c \
	eml_int_forloop_overflow_check.c \
	repmat.c \
	scalexpAlloc.c \
	power.c \
	error.c \
	sum.c \
	find.c \
	indexShapeCheck.c \
	pairCollision.c \
	smcle2coord.c \
	mpower.c \
	lineSegmentIntersect.c \
	any.c \
	toLogicalCheck.c \
	norm.c \
	xor.c \
	error1.c \
	ifWhileCond.c \
	mod.c \
	flip.c \
	all.c \
	_coder_resolveCollisions_info.c \
	_coder_resolveCollisions_api.c \
	_coder_resolveCollisions_mex.c \
	resolveCollisions_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = resolveCollisions_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexmaci64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#

ifndef CC
  ifeq ($(Arch),maci64)
    CC = clang
  else
    CC = gcc
  endif  
endif

ifndef CXX
  ifeq ($(Arch),maci64)
    CXX = clang++
  else
    CXX = g++
  endif  
endif

OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/resolveCollisions"
SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "./interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) -Wl,-rpath,@loader_path
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS += 

CCFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(CXX_FLAGS) -std=c++11   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(MATLAB_ROOT)/extern/version/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/resolveCollisions/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(MATLAB_ROOT)/extern/version/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/resolveCollisions/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



%.$(OBJEXT) : $(MATLAB_ROOT)/extern/version/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/resolveCollisions/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"




$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)

#====================================================================

