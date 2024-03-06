CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB_LOOP = basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_REC = basicClassification.o advancedClassificationRecursion.o
FLAGS = -Wall -g

all:loops loopd recursives recursived mains maindloop maindrec

maindrec: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so

maindloop: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a

loopd: $(OBJECTS_LIB_LOOP)
	$(CC) -shared -fPIC -o libclassloops.so $(OBJECTS_LIB_LOOP)

recursived: $(OBJECTS_LIB_REC)
	$(CC) -shared -fPIC -o libclassrec.so $(OBJECTS_LIB_REC)

recursives: $(OBJECTS_LIB_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_REC)

loops: $(OBJECTS_LIB_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_LOOP)

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -o advancedClassificationRecursion.o

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -o advancedClassificationLoop.o

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c -o basicClassification.o

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -o main.o

clean:
	rm -f *.o *.a *.so mains maindloop maindrec




	
