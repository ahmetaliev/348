#
# SDL application Makefile
# type without args to build
# type run to execute
# type clean to clean sources
# type log to check application log
#
#sdltutorial07

TARGET = sdlclass

all: $(TARGET)

CPPFLAGS =-Wfatal-errors  -I "../../include" -Os -Wall -DANDROID -I${EXTERNAL_STORAGE}/CCTools/SDL/include

LDFLAGS = -shared ${EXTERNAL_STORAGE}/CCTools/SDL/lib/SDL_android_main.o -L${EXTERNAL_STORAGE}/CCTools/SDL/lib -lSDL2   -lSDL2_ttf -lGLESv1_CM -llog -lm

SDLRUN = am start $(shell am 2>&1| grep -q '\-\-user' && echo '--user 0') -n com.pdaxrom.cctools.sdlplugin/.sdlpluginActivity -e sdlmain

OBJS = $(TARGET).o

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS) $(CFLAGS) -Os -Wall -DANDROID -I${EXTERNAL_STORAGE}/CCTools/SDL/include

clean:
		rm -f $(OBJS) lib$(TARGET).so

run: $(TARGET)
		$(SDLRUN) $(PWD)/lib$(TARGET).so
#		./debug

log:
	logcat -d | grep SDL
