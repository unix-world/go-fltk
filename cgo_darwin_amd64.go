//go:build darwin && amd64

package fltk

// #cgo darwin,amd64 CXXFLAGS: -std=c++11
// #cgo darwin,amd64 CPPFLAGS: -I${SRCDIR}/lib/darwin/amd64 -I${SRCDIR}/include -I${SRCDIR}/include/FL/images -I${SRCDIR}/include/png -I${SRCDIR}/include/zlib -I${SRCDIR}/include/jpeg -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.0.sdk -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_THREAD_SAFE -D_REENTRANT
// #cgo darwin,amd64 LDFLAGS: ${SRCDIR}/lib/darwin/amd64/libfltk_images.a ${SRCDIR}/lib/darwin/amd64/libfltk_jpeg.a ${SRCDIR}/lib/darwin/amd64/libfltk_png.a ${SRCDIR}/lib/darwin/amd64/libfltk_z.a ${SRCDIR}/lib/darwin/amd64/libfltk_gl.a -framework OpenGL ${SRCDIR}/lib/darwin/amd64/libfltk_forms.a ${SRCDIR}/lib/darwin/amd64/libfltk.a -lm -lpthread -framework Cocoa -framework UniformTypeIdentifiers -framework ScreenCaptureKit -mmacosx-version-min=15.0
import "C"
