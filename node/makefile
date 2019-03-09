CPP= g++
CPPFLAGS = -c -Wall -fpic -m64 -O2 -std=c++0x
LN= g++
AR=ar
LDFLAGS= -m64
SYSLIBS= -ldl -lnsl -lm -lpthread -lrt
DEFINES= 

INCLUDES= -I. 

LIBS =  -lfastcdr -lfastrtps $(SYSLIBS)

DIRECTORIES= output.dir output/x64Linux2.6gcc.dir lib.dir lib/x64Linux2.6gcc.dir bin.dir bin/x64Linux2.6gcc.dir

all: $(DIRECTORIES) plant plantPublisherSubscriber


plant_TARGET= lib/x64Linux2.6gcc/libplant.so
plant_TARGET_Z= lib/x64Linux2.6gcc/libplant.a

plant_CLIENT_EXAMPLE_TARGET= bin/x64Linux2.6gcc/plantPublisherSubscriber
plant_COMMON_SRC_CXXFILES = plant.cxx

plant_COMMON_SRC_CPPFILES=

plant_CLIENTSOURCES = plantPubSubTypes.cxx \
	plantPublisher.cxx \
	plantSubscriber.cxx \
	plantPubSubMain.cxx

plant_COMMONOBJS    = $(plant_COMMON_SRC_CXXFILES:%.cxx=output/x64Linux2.6gcc/%.o) $(plant_COMMON_SRC_CPPFILES:%.cpp=output/x64Linux2.6gcc/%.o)

plant_CLIENTOBJS    = $(plant_CLIENTSOURCES:%.cxx=output/x64Linux2.6gcc/%.o)

plantOBJS+= $(plant_COMMONOBJS) $(plant_CLIENTOBJS)
OBJS+= $(plantOBJS)

$(plant_TARGET): $(plant_COMMONOBJS)
	$(LN) $(LDFLAGS) -shared -o $(plant_TARGET) $(plant_COMMONOBJS) $(LIBS) -Llib/x64Linux2.6gcc 

$(plant_TARGET_Z): $(plant_COMMONOBJS)
	$(AR) -cru $(plant_TARGET_Z) $(plant_COMMONOBJS)

$(plant_CLIENT_EXAMPLE_TARGET): $(plantOBJS) lib/x64Linux2.6gcc/libplant.a 
	$(LN) $(LDFLAGS) -o $@ $(plantOBJS) -Wl,-Bstatic -Llib/x64Linux2.6gcc -lplant  -Wl,-Bdynamic $(LIBS)

plantPublisherSubscriber : $(plant_CLIENT_EXAMPLE_TARGET)
plant: $(plant_TARGET) $(plant_TARGET_Z) plantPublisherSubscriber

output/x64Linux2.6gcc/%.o:%.cxx
	$(CPP) $(CPPFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

output/x64Linux2.6gcc/%.o:%.cpp
	$(CPP) $(CPPFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

.PHONY: plant plantPublisherSubscriber

clean:
	@rm -f $(OBJS)

%.dir : 
	@echo "Checking directory $*"
	@if [ ! -d $* ]; then \
		echo "Making directory $*"; \
		mkdir -p $* ; \
	fi;
