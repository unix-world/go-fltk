//go:build darwin && arm64

package fltk

// #cgo darwin,arm64 CXXFLAGS: -std=c++11
// #cgo darwin,arm64 CPPFLAGS: -I${SRCDIR}/include/darwin/arm64 -I${SRCDIR}/include/darwin/arm64/FL/images -I${SRCDIR}/include/darwin/arm64/png -I${SRCDIR}/include/darwin/arm64/zlib -I${SRCDIR}/include/darwin/arm64/jpeg -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.1.sdk -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_THREAD_SAFE -D_REENTRANT
// #cgo darwin,arm64 LDFLAGS: ${SRCDIR}/lib/darwin/arm64/libfltk_images.a ${SRCDIR}/lib/darwin/arm64/libfltk_jpeg.a ${SRCDIR}/lib/darwin/arm64/libfltk_png.a ${SRCDIR}/lib/darwin/arm64/libfltk_z.a ${SRCDIR}/lib/darwin/arm64/libfltk_gl.a -framework OpenGL ${SRCDIR}/lib/darwin/arm64/libfltk_forms.a ${SRCDIR}/lib/darwin/arm64/libfltk.a -lm -lpthread -framework Cocoa -framework ScreenCaptureKit -framework UniformTypeIdentifiers -mmacosx-version-min=15.0
import "C"
