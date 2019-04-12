LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := myjni

LOCAL_SRC_FILES := myjni.cpp

LOCAL_CPPFLAGS := -g -O0 --coverage
LOCAL_LDLIBS := --coverage


include $(BUILD_SHARED_LIBRARY)

all:
	rd /s /q "../main/jniLibs"
	mkdir "../main/jniLibs/arm64-v8a"
	xcopy "../libs/arm64-v8a" "../main/jniLibs/arm64-v8a" /s /e /y /i
