outfile=paulstretch

rm -f $outfile

g++ -ggdb  -I/usr/local/include -L/usr/local/lib *.cpp Input/*.cpp Output/*.cpp \
-laudiofile -lfftw3f -lz -lportaudio -lpthread -lmxml -o $outfile
