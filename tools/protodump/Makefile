CC=g++
SOURCES=protow.cc
FLAGS=-Wl,--subsystem,windows -lGdi32
OUTFOLDER=//192.168.0.9/Shared/Home/Games/Diablo\ III\ Beta/
#OUTFOLDER=/c/Archivos\ de\ programa/Diablo\ III\ Beta/

all:
#	gcc -shared -o DLL_file OBJ_files -Wl,--output-def,DEF_file
	${CC} -c gui_base.cc ${FLAGS} -o gui_base.o 
	${CC} -shared ${SOURCES} ${FLAGS} gui_base.o protow.def -o ${OUTFOLDER}/protow.dll
	${CC} -shared ${SOURCES} ${FLAGS} gui_base.o protow.def -o ${OUTFOLDER}/protow.ei.dll -DEASYINJECT