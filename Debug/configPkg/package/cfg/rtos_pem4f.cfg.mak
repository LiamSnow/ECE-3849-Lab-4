# invoke SourceDir generated makefile for rtos.pem4f
rtos.pem4f: .libraries,rtos.pem4f
.libraries,rtos.pem4f: package/cfg/rtos_pem4f.xdl
	$(MAKE) -f C:\Users\liams\Documents\ECE3849\ece3849_lab4_jddenney_wasnow/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\liams\Documents\ECE3849\ece3849_lab4_jddenney_wasnow/src/makefile.libs clean

