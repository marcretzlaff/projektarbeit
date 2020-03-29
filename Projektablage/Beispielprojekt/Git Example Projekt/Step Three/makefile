TARGET        = geo
SOURCES       = *.cpp
OBJS          = $(SOURCES:.cpp=.o)
CC            = g++
MAKEFILE      = makefile
CCFLAGS       = -g
LDFLAGS       = -g
DEPEND_FLAG   = -MM
DEPEND_FILE   = depend
LIBS          = -lm -lc

$(TARGET): $(OBJS) $(MAKEFILE) $(DEPEND_FILE)
	$(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $(TARGET)

$(OBJS): $(MAKEFILE) $(SOURCES) $(DEPEND_FILE)
	$(CC) $(CCFLAGS) -c $(@:.o=.cpp)
all:	depend $(TARGET)

include $(DEPEND_FILE)

.phony:  depend clean

depend:
	$(CC) $(DEPEND_FLAG) -c $(SOURCES) >$(DEPEND_FILE)

clean:
	rm -f $(OBJS) $(TARGET)




