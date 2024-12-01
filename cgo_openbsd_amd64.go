//go:build openbsd && amd64

package fltk

// #cgo openbsd,amd64 CXXFLAGS: -std=c++11
// #cgo openbsd,amd64 CPPFLAGS: -I${SRCDIR}/lib/openbsd/amd64 -I/usr/X11R6/include -I${SRCDIR}/include -I${SRCDIR}/include/FL/images -I${SRCDIR}/include/png -I${SRCDIR}/include/zlib -I${SRCDIR}/include/jpeg -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_THREAD_SAFE -D_REENTRANT
// #cgo openbsd,amd64 LDFLAGS: -L/usr/X11R6/lib ${SRCDIR}/lib/openbsd/amd64/libfltk_images.a ${SRCDIR}/lib/openbsd/amd64/libfltk_jpeg.a ${SRCDIR}/lib/openbsd/amd64/libfltk_png.a ${SRCDIR}/lib/openbsd/amd64/libfltk_z.a ${SRCDIR}/lib/openbsd/amd64/libfltk_gl.a -lGLU -lGL ${SRCDIR}/lib/openbsd/amd64/libfltk_forms.a ${SRCDIR}/lib/openbsd/amd64/libfltk.a -lm -lX11 -lXext -lpthread -lXinerama -lXfixes -lXcursor -lXft -lXrender -lfontconfig
import "C"
