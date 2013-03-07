#######################################
# Sepcify source files
#######################################
<<<<<<< HEAD
include $(MTK_ROOT_BUILD)/Makefile
MASP_CORE_DRIVER_DIR := $(MTK_PATH_PLATFORM)/drivers/masp

lib_obj := src/sec_mod.o

include $(MASP_CORE_DRIVER_DIR)/Makefile.core

ifeq ($(CUSTOM_SEC_AUTH_SUPPORT),yes)
CCCI_CUSTOM_DRIVER_DIR := $(call my-dir)$(call to-root,$(obj))mediatek/custom/out/$(call lc,$(MTK_PROJECT))/kernel/ccci
lib_obj += $(CCCI_CUSTOM_DRIVER_DIR)/cust_auth.o
else
include $(MASP_CORE_DRIVER_DIR)/Makefile.crypto
lib_obj += $(crypto_obj)
lib_obj += auth/sec_wrapper.o
endif
=======

lib_obj := src/sec_mod.o auth/sec_wrapper.o
ifeq ($(MTK_EMMC_SUPPORT),yes)
	lib_obj += prebuilt/libasp_EMMC.a
else 
	lib_obj += prebuilt/libasp_NAND.a	
endif
lib_obj += prebuilt/libasp_auth.a
>>>>>>> ba0a338... Vibrator and camera fix

obj-m += sec.o

# HEADER FILES
EXTRA_CFLAGS += -I$(src) -I$(src)/inc

# INCLUDE ASP LIBRARY
<<<<<<< HEAD
sec-y += $(lib_obj) $(core_obj)
=======
sec-y += $(lib_obj)
>>>>>>> ba0a338... Vibrator and camera fix
