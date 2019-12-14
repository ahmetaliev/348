set TARGET=$1
set SDLRUN = am start $(shell am 2>&1| grep -q '\-\-user' && echo '--user 0') -n com.pdaxrom.cctools.sdlplugin/.sdlpluginActivity -e sdlmain
$(SDLRUN) $(PWD)/$(TARGET)