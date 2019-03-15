INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK82FN256VLL15")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFRDM_K82F")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFREEDOM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTGT_A71CH")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DI2C")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMBEDTLS_CONFIG_FILE='\"a71ch_mbedtls_frdm_config.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMBEDTLS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSCP_MODE=C_MAC_C_ENC_R_MAC_R_ENC")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fomit-frame-pointer")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK82FN256VLL15")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFRDM_K82F")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFREEDOM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTGT_A71CH")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DI2C")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DMBEDTLS_CONFIG_FILE='\"a71ch_mbedtls_frdm_config.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DMBEDTLS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSCP_MODE=C_MAC_C_ENC_R_MAC_R_ENC")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fomit-frame-pointer")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MK82FN256VLL15")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DTGT_A71CH")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DI2C")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MK82FN256VLL15")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DTGT_A71CH")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DI2C")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__stack_size__=0x2000")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__heap_size__=0x8000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__stack_size__=0x2000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__heap_size__=0x8000")

#include_directories(${ProjDirPath}/..)
include_directories(${ProjDirPath}/se_hostlib/tst)
include_directories(${ProjDirPath}/startup)
include_directories(${ProjDirPath}/component/lists)
include_directories(${ProjDirPath}/mbedtls/include/mbedtls)
include_directories(${ProjDirPath}/device)
include_directories(${ProjDirPath}/se_hostlib/mbedtls)
include_directories(${ProjDirPath}/mbedtls/include)
include_directories(${ProjDirPath}/board)
include_directories(${ProjDirPath}/src)
include_directories(${ProjDirPath}/CMSIS)
include_directories(${ProjDirPath}/mbedtls/port/ksdk)
include_directories(${ProjDirPath}/mmcau/mmcau_include)
include_directories(${ProjDirPath}/component/serial_manager)
include_directories(${ProjDirPath}/se_hostlib/common)
include_directories(${ProjDirPath}/doc)
include_directories(${ProjDirPath}/se_hostlib/ax)
include_directories(${ProjDirPath}/source)
include_directories(${ProjDirPath}/component/uart)
include_directories(${ProjDirPath}/utilities)
include_directories(${ProjDirPath}/se_hostlib/inc)
include_directories(${ProjDirPath}/se_hostlib/platform)
include_directories(${ProjDirPath}/drivers)

#include_directories(${ProjDirPath}/../../..)

#include_directories(${ProjDirPath}/../../../../../CMSIS/Include)

#include_directories(${ProjDirPath}/../../../../../devices)

#include_directories(${ProjDirPath}/../../../../../middleware/mmcau)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib)

#include_directories(${ProjDirPath}/../../../../../middleware/mbedtls/include)

#include_directories(${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/hostCrypto)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/tstUtil)

#include_directories(${ProjDirPath}/../../../../../devices/MK82F25615/drivers)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/scp)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/inc)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/platform)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/a71ch/inc)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/api/inc)

#include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/mbedtls/inc)

#include_directories(${ProjDirPath}/../../../../../devices/MK82F25615)

#include_directories(${ProjDirPath}/../../../../../devices/MK82F25615/utilities/str)

#include_directories(${ProjDirPath}/../../../../../devices/MK82F25615/utilities/debug_console)

#include_directories(${ProjDirPath}/../../../../../components/uart)

#include_directories(${ProjDirPath}/../../../../../components/serial_manager)

#include_directories(${ProjDirPath}/../../../../../components/lists)

add_executable(se_hostlib_mainA71CH.elf 
"${ProjDirPath}/board/board.c"
"${ProjDirPath}/board/board.h"
"${ProjDirPath}/board/clock_config.c"
"${ProjDirPath}/board/clock_config.h"
"${ProjDirPath}/board/pin_mux.c"
"${ProjDirPath}/board/pin_mux.h"
"${ProjDirPath}/CMSIS/arm_common_tables.h"
"${ProjDirPath}/CMSIS/arm_const_structs.h"
"${ProjDirPath}/CMSIS/arm_math.h"
"${ProjDirPath}/CMSIS/cmsis_armcc.h"
"${ProjDirPath}/CMSIS/cmsis_armclang.h"
"${ProjDirPath}/CMSIS/cmsis_compiler.h"
"${ProjDirPath}/CMSIS/cmsis_gcc.h"
"${ProjDirPath}/CMSIS/cmsis_iccarm.h"
"${ProjDirPath}/CMSIS/cmsis_version.h"
"${ProjDirPath}/CMSIS/core_armv8mbl.h"
"${ProjDirPath}/CMSIS/core_armv8mml.h"
"${ProjDirPath}/CMSIS/core_cm4.h"
"${ProjDirPath}/CMSIS/mpu_armv7.h"
"${ProjDirPath}/CMSIS/mpu_armv8.h"
"${ProjDirPath}/component/lists/generic_list.c"
"${ProjDirPath}/component/lists/generic_list.h"
"${ProjDirPath}/component/serial_manager/serial_manager.c"
"${ProjDirPath}/component/serial_manager/serial_manager.h"
"${ProjDirPath}/component/serial_manager/serial_port_uart.c"
"${ProjDirPath}/component/serial_manager/serial_port_uart.h"
"${ProjDirPath}/component/uart/lpuart_adapter.c"
"${ProjDirPath}/component/uart/uart.h"
"${ProjDirPath}/device/fsl_device_registers.h"
"${ProjDirPath}/device/MK82F25615.h"
"${ProjDirPath}/device/MK82F25615_features.h"
"${ProjDirPath}/device/system_MK82F25615.c"
"${ProjDirPath}/device/system_MK82F25615.h"
"${ProjDirPath}/drivers/fsl_clock.c"
"${ProjDirPath}/drivers/fsl_clock.h"
"${ProjDirPath}/drivers/fsl_common.c"
"${ProjDirPath}/drivers/fsl_common.h"
"${ProjDirPath}/drivers/fsl_flash.h"
"${ProjDirPath}/drivers/fsl_ftfx_adapter.h"
"${ProjDirPath}/drivers/fsl_ftfx_cache.c"
"${ProjDirPath}/drivers/fsl_ftfx_cache.h"
"${ProjDirPath}/drivers/fsl_ftfx_controller.c"
"${ProjDirPath}/drivers/fsl_ftfx_controller.h"
"${ProjDirPath}/drivers/fsl_ftfx_features.h"
"${ProjDirPath}/drivers/fsl_ftfx_flash.c"
"${ProjDirPath}/drivers/fsl_ftfx_flash.h"
"${ProjDirPath}/drivers/fsl_ftfx_flexnvm.c"
"${ProjDirPath}/drivers/fsl_ftfx_flexnvm.h"
"${ProjDirPath}/drivers/fsl_ftfx_utilities.h"
"${ProjDirPath}/drivers/fsl_gpio.c"
"${ProjDirPath}/drivers/fsl_gpio.h"
"${ProjDirPath}/drivers/fsl_i2c.c"
"${ProjDirPath}/drivers/fsl_i2c.h"
"${ProjDirPath}/drivers/fsl_lpuart.c"
"${ProjDirPath}/drivers/fsl_lpuart.h"
"${ProjDirPath}/drivers/fsl_ltc.c"
"${ProjDirPath}/drivers/fsl_ltc.h"
"${ProjDirPath}/drivers/fsl_port.h"
"${ProjDirPath}/drivers/fsl_smc.c"
"${ProjDirPath}/drivers/fsl_smc.h"
"${ProjDirPath}/drivers/fsl_trng.c"
"${ProjDirPath}/drivers/fsl_trng.h"
"${ProjDirPath}/libs/lib_mmcau.a"
"${ProjDirPath}/mbedtls/include/mbedtls/aes.h"
"${ProjDirPath}/mbedtls/include/mbedtls/aesni.h"
"${ProjDirPath}/mbedtls/include/mbedtls/arc4.h"
"${ProjDirPath}/mbedtls/include/mbedtls/aria.h"
"${ProjDirPath}/mbedtls/include/mbedtls/asn1.h"
"${ProjDirPath}/mbedtls/include/mbedtls/asn1write.h"
"${ProjDirPath}/mbedtls/include/mbedtls/base64.h"
"${ProjDirPath}/mbedtls/include/mbedtls/bignum.h"
"${ProjDirPath}/mbedtls/include/mbedtls/blowfish.h"
"${ProjDirPath}/mbedtls/include/mbedtls/bn_mul.h"
"${ProjDirPath}/mbedtls/include/mbedtls/camellia.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ccm.h"
"${ProjDirPath}/mbedtls/include/mbedtls/certs.h"
"${ProjDirPath}/mbedtls/include/mbedtls/chacha20.h"
"${ProjDirPath}/mbedtls/include/mbedtls/chachapoly.h"
"${ProjDirPath}/mbedtls/include/mbedtls/check_config.h"
"${ProjDirPath}/mbedtls/include/mbedtls/cipher.h"
"${ProjDirPath}/mbedtls/include/mbedtls/cipher_internal.h"
"${ProjDirPath}/mbedtls/include/mbedtls/cmac.h"
"${ProjDirPath}/mbedtls/include/mbedtls/compat-1.3.h"
"${ProjDirPath}/mbedtls/include/mbedtls/config.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ctr_drbg.h"
"${ProjDirPath}/mbedtls/include/mbedtls/debug.h"
"${ProjDirPath}/mbedtls/include/mbedtls/des.h"
"${ProjDirPath}/mbedtls/include/mbedtls/dhm.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ecdh.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ecdsa.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ecjpake.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ecp.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ecp_internal.h"
"${ProjDirPath}/mbedtls/include/mbedtls/entropy.h"
"${ProjDirPath}/mbedtls/include/mbedtls/entropy_poll.h"
"${ProjDirPath}/mbedtls/include/mbedtls/error.h"
"${ProjDirPath}/mbedtls/include/mbedtls/gcm.h"
"${ProjDirPath}/mbedtls/include/mbedtls/havege.h"
"${ProjDirPath}/mbedtls/include/mbedtls/hkdf.h"
"${ProjDirPath}/mbedtls/include/mbedtls/hmac_drbg.h"
"${ProjDirPath}/mbedtls/include/mbedtls/md.h"
"${ProjDirPath}/mbedtls/include/mbedtls/md2.h"
"${ProjDirPath}/mbedtls/include/mbedtls/md4.h"
"${ProjDirPath}/mbedtls/include/mbedtls/md5.h"
"${ProjDirPath}/mbedtls/include/mbedtls/md_internal.h"
"${ProjDirPath}/mbedtls/include/mbedtls/memory_buffer_alloc.h"
"${ProjDirPath}/mbedtls/include/mbedtls/net.h"
"${ProjDirPath}/mbedtls/include/mbedtls/net_sockets.h"
"${ProjDirPath}/mbedtls/include/mbedtls/nist_kw.h"
"${ProjDirPath}/mbedtls/include/mbedtls/oid.h"
"${ProjDirPath}/mbedtls/include/mbedtls/padlock.h"
"${ProjDirPath}/mbedtls/include/mbedtls/pem.h"
"${ProjDirPath}/mbedtls/include/mbedtls/pk.h"
"${ProjDirPath}/mbedtls/include/mbedtls/pk_internal.h"
"${ProjDirPath}/mbedtls/include/mbedtls/pkcs11.h"
"${ProjDirPath}/mbedtls/include/mbedtls/pkcs12.h"
"${ProjDirPath}/mbedtls/include/mbedtls/pkcs5.h"
"${ProjDirPath}/mbedtls/include/mbedtls/platform.h"
"${ProjDirPath}/mbedtls/include/mbedtls/platform_time.h"
"${ProjDirPath}/mbedtls/include/mbedtls/platform_util.h"
"${ProjDirPath}/mbedtls/include/mbedtls/poly1305.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ripemd160.h"
"${ProjDirPath}/mbedtls/include/mbedtls/rsa.h"
"${ProjDirPath}/mbedtls/include/mbedtls/rsa_internal.h"
"${ProjDirPath}/mbedtls/include/mbedtls/sha1.h"
"${ProjDirPath}/mbedtls/include/mbedtls/sha256.h"
"${ProjDirPath}/mbedtls/include/mbedtls/sha512.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ssl.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ssl_cache.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ssl_ciphersuites.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ssl_cookie.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ssl_internal.h"
"${ProjDirPath}/mbedtls/include/mbedtls/ssl_ticket.h"
"${ProjDirPath}/mbedtls/include/mbedtls/threading.h"
"${ProjDirPath}/mbedtls/include/mbedtls/timing.h"
"${ProjDirPath}/mbedtls/include/mbedtls/version.h"
"${ProjDirPath}/mbedtls/include/mbedtls/x509.h"
"${ProjDirPath}/mbedtls/include/mbedtls/x509_crl.h"
"${ProjDirPath}/mbedtls/include/mbedtls/x509_crt.h"
"${ProjDirPath}/mbedtls/include/mbedtls/x509_csr.h"
"${ProjDirPath}/mbedtls/include/mbedtls/xtea.h"
"${ProjDirPath}/mbedtls/library/aes.c"
"${ProjDirPath}/mbedtls/library/aesni.c"
"${ProjDirPath}/mbedtls/library/arc4.c"
"${ProjDirPath}/mbedtls/library/aria.c"
"${ProjDirPath}/mbedtls/library/asn1parse.c"
"${ProjDirPath}/mbedtls/library/asn1write.c"
"${ProjDirPath}/mbedtls/library/base64.c"
"${ProjDirPath}/mbedtls/library/bignum.c"
"${ProjDirPath}/mbedtls/library/blowfish.c"
"${ProjDirPath}/mbedtls/library/camellia.c"
"${ProjDirPath}/mbedtls/library/ccm.c"
"${ProjDirPath}/mbedtls/library/certs.c"
"${ProjDirPath}/mbedtls/library/chacha20.c"
"${ProjDirPath}/mbedtls/library/chachapoly.c"
"${ProjDirPath}/mbedtls/library/cipher.c"
"${ProjDirPath}/mbedtls/library/cipher_wrap.c"
"${ProjDirPath}/mbedtls/library/cmac.c"
"${ProjDirPath}/mbedtls/library/ctr_drbg.c"
"${ProjDirPath}/mbedtls/library/debug.c"
"${ProjDirPath}/mbedtls/library/des.c"
"${ProjDirPath}/mbedtls/library/dhm.c"
"${ProjDirPath}/mbedtls/library/ecdh.c"
"${ProjDirPath}/mbedtls/library/ecdsa.c"
"${ProjDirPath}/mbedtls/library/ecjpake.c"
"${ProjDirPath}/mbedtls/library/ecp.c"
"${ProjDirPath}/mbedtls/library/ecp_curves.c"
"${ProjDirPath}/mbedtls/library/entropy.c"
"${ProjDirPath}/mbedtls/library/entropy_poll.c"
"${ProjDirPath}/mbedtls/library/error.c"
"${ProjDirPath}/mbedtls/library/gcm.c"
"${ProjDirPath}/mbedtls/library/havege.c"
"${ProjDirPath}/mbedtls/library/hkdf.c"
"${ProjDirPath}/mbedtls/library/hmac_drbg.c"
"${ProjDirPath}/mbedtls/library/md.c"
"${ProjDirPath}/mbedtls/library/md2.c"
"${ProjDirPath}/mbedtls/library/md4.c"
"${ProjDirPath}/mbedtls/library/md5.c"
"${ProjDirPath}/mbedtls/library/md_wrap.c"
"${ProjDirPath}/mbedtls/library/memory_buffer_alloc.c"
"${ProjDirPath}/mbedtls/library/net_sockets.c"
"${ProjDirPath}/mbedtls/library/nist_kw.c"
"${ProjDirPath}/mbedtls/library/oid.c"
"${ProjDirPath}/mbedtls/library/padlock.c"
"${ProjDirPath}/mbedtls/library/pem.c"
"${ProjDirPath}/mbedtls/library/pk.c"
"${ProjDirPath}/mbedtls/library/pk_wrap.c"
"${ProjDirPath}/mbedtls/library/pkcs12.c"
"${ProjDirPath}/mbedtls/library/pkcs5.c"
"${ProjDirPath}/mbedtls/library/pkparse.c"
"${ProjDirPath}/mbedtls/library/pkwrite.c"
"${ProjDirPath}/mbedtls/library/platform.c"
"${ProjDirPath}/mbedtls/library/platform_util.c"
"${ProjDirPath}/mbedtls/library/poly1305.c"
"${ProjDirPath}/mbedtls/library/ripemd160.c"
"${ProjDirPath}/mbedtls/library/rsa.c"
"${ProjDirPath}/mbedtls/library/rsa_internal.c"
"${ProjDirPath}/mbedtls/library/sha1.c"
"${ProjDirPath}/mbedtls/library/sha256.c"
"${ProjDirPath}/mbedtls/library/sha512.c"
"${ProjDirPath}/mbedtls/library/ssl_cache.c"
"${ProjDirPath}/mbedtls/library/ssl_ciphersuites.c"
"${ProjDirPath}/mbedtls/library/ssl_cli.c"
"${ProjDirPath}/mbedtls/library/ssl_cookie.c"
"${ProjDirPath}/mbedtls/library/ssl_srv.c"
"${ProjDirPath}/mbedtls/library/ssl_ticket.c"
"${ProjDirPath}/mbedtls/library/ssl_tls.c"
"${ProjDirPath}/mbedtls/library/threading.c"
"${ProjDirPath}/mbedtls/library/timing.c"
"${ProjDirPath}/mbedtls/library/version.c"
"${ProjDirPath}/mbedtls/library/version_features.c"
"${ProjDirPath}/mbedtls/library/x509.c"
"${ProjDirPath}/mbedtls/library/x509_create.c"
"${ProjDirPath}/mbedtls/library/x509_crl.c"
"${ProjDirPath}/mbedtls/library/x509_crt.c"
"${ProjDirPath}/mbedtls/library/x509_csr.c"
"${ProjDirPath}/mbedtls/library/x509write_crt.c"
"${ProjDirPath}/mbedtls/library/x509write_csr.c"
"${ProjDirPath}/mbedtls/library/xtea.c"
"${ProjDirPath}/mbedtls/port/ksdk/aes_alt.c"
"${ProjDirPath}/mbedtls/port/ksdk/aes_alt.h"
"${ProjDirPath}/mbedtls/port/ksdk/des_alt.c"
"${ProjDirPath}/mbedtls/port/ksdk/des_alt.h"
"${ProjDirPath}/mbedtls/port/ksdk/ksdk_mbedtls.c"
"${ProjDirPath}/mbedtls/port/ksdk/ksdk_mbedtls.h"
"${ProjDirPath}/mbedtls/port/ksdk/ksdk_mbedtls_config.h"
"${ProjDirPath}/mbedtls/port/ksdk/sha1_alt.h"
"${ProjDirPath}/mbedtls/port/ksdk/sha256_alt.h"
"${ProjDirPath}/mmcau/mmcau_include/cau_api.h"
"${ProjDirPath}/mmcau/mmcau_include/fsl_mmcau.h"
"${ProjDirPath}/mmcau/mmcau_source/fsl_mmcau.c"
"${ProjDirPath}/se_hostlib/ax/a71ch_api.h"
"${ProjDirPath}/se_hostlib/ax/a71ch_com.c"
"${ProjDirPath}/se_hostlib/ax/a71ch_const.h"
"${ProjDirPath}/se_hostlib/ax/a71ch_crypto_derive.c"
"${ProjDirPath}/se_hostlib/ax/a71ch_crypto_ecc.c"
"${ProjDirPath}/se_hostlib/ax/a71ch_module.c"
"${ProjDirPath}/se_hostlib/ax/a71ch_sst.c"
"${ProjDirPath}/se_hostlib/ax/a71ch_util.h"
"${ProjDirPath}/se_hostlib/ax/A71HLSEWrapper.c"
"${ProjDirPath}/se_hostlib/ax/ax_api.h"
"${ProjDirPath}/se_hostlib/ax/ax_common.h"
"${ProjDirPath}/se_hostlib/ax/ax_common_private.h"
"${ProjDirPath}/se_hostlib/ax/ax_crypto_aes_key.c"
"${ProjDirPath}/se_hostlib/ax/ax_crypto_ecc.c"
"${ProjDirPath}/se_hostlib/ax/ax_crypto_rng.c"
"${ProjDirPath}/se_hostlib/ax/ax_scp.c"
"${ProjDirPath}/se_hostlib/ax/ax_scp.h"
"${ProjDirPath}/se_hostlib/ax/ax_scp_private.h"
"${ProjDirPath}/se_hostlib/ax/ax_sst.c"
"${ProjDirPath}/se_hostlib/ax/ax_switch.c"
"${ProjDirPath}/se_hostlib/ax/ax_util.c"
"${ProjDirPath}/se_hostlib/ax/ax_util.h"
"${ProjDirPath}/se_hostlib/ax/HLSEAPI.h"
"${ProjDirPath}/se_hostlib/ax/HLSEComm.h"
"${ProjDirPath}/se_hostlib/ax/HLSECrypto.h"
"${ProjDirPath}/se_hostlib/ax/HLSEMisc.h"
"${ProjDirPath}/se_hostlib/ax/HLSEObjects.h"
"${ProjDirPath}/se_hostlib/ax/HLSETypes.h"
"${ProjDirPath}/se_hostlib/common/a71_debug.c"
"${ProjDirPath}/se_hostlib/common/a71_debug.h"
"${ProjDirPath}/se_hostlib/common/apduComm.h"
"${ProjDirPath}/se_hostlib/common/axHostCrypto.h"
"${ProjDirPath}/se_hostlib/common/axHostCryptombedtls.c"
"${ProjDirPath}/se_hostlib/common/global_platf.c"
"${ProjDirPath}/se_hostlib/common/global_platf.h"
"${ProjDirPath}/se_hostlib/common/hcAsn.c"
"${ProjDirPath}/se_hostlib/common/hcAsn.h"
"${ProjDirPath}/se_hostlib/common/HostCryptoAPI.h"
"${ProjDirPath}/se_hostlib/common/nxLog.c"
"${ProjDirPath}/se_hostlib/common/nxLog.h"
"${ProjDirPath}/se_hostlib/common/nxLog_App.h"
"${ProjDirPath}/se_hostlib/common/nxLog_DefaultConfig.h"
"${ProjDirPath}/se_hostlib/common/sci2c.c"
"${ProjDirPath}/se_hostlib/common/sci2c.h"
"${ProjDirPath}/se_hostlib/common/scp.c"
"${ProjDirPath}/se_hostlib/common/scp.h"
"${ProjDirPath}/se_hostlib/common/sm_apdu.c"
"${ProjDirPath}/se_hostlib/common/sm_apdu.h"
"${ProjDirPath}/se_hostlib/common/sm_errors.c"
"${ProjDirPath}/se_hostlib/common/sm_errors.h"
"${ProjDirPath}/se_hostlib/common/sm_types.h"
"${ProjDirPath}/se_hostlib/common/smCom.c"
"${ProjDirPath}/se_hostlib/common/smComSCI2C.c"
"${ProjDirPath}/se_hostlib/inc/sci2c_cfg.h"
"${ProjDirPath}/se_hostlib/inc/smCom.h"
"${ProjDirPath}/se_hostlib/inc/smComSCI2C.h"
"${ProjDirPath}/se_hostlib/mbedtls/a71ch_mbedtls_evkbimxrt1050_config.h"
"${ProjDirPath}/se_hostlib/mbedtls/a71ch_mbedtls_frdm_config.h"
"${ProjDirPath}/se_hostlib/mbedtls/a71ch_mbedtls_frdmkw41z_config.h"
"${ProjDirPath}/se_hostlib/mbedtls/ax_mbedtls.c"
"${ProjDirPath}/se_hostlib/mbedtls/ax_mbedtls.h"
"${ProjDirPath}/se_hostlib/mbedtls/ecdh_alt.c"
"${ProjDirPath}/se_hostlib/mbedtls/ecdh_alt_ax.c"
"${ProjDirPath}/se_hostlib/mbedtls/ecp_alt.c"
"${ProjDirPath}/se_hostlib/mbedtls/ecp_alt.h"
"${ProjDirPath}/se_hostlib/mbedtls/ecp_alt_ax.c"
"${ProjDirPath}/se_hostlib/mbedtls/ecp_curves_alt.c"
"${ProjDirPath}/se_hostlib/platform/app_boot.c"
"${ProjDirPath}/se_hostlib/platform/i2c_a7.h"
"${ProjDirPath}/se_hostlib/platform/i2c_frdm.c"
"${ProjDirPath}/se_hostlib/platform/i2c_imxrt10xx.c"
"${ProjDirPath}/se_hostlib/platform/i2c_lpc54xxx.c"
"${ProjDirPath}/se_hostlib/platform/sm_printf.c"
"${ProjDirPath}/se_hostlib/platform/sm_printf.h"
"${ProjDirPath}/se_hostlib/platform/sm_timer.h"
"${ProjDirPath}/se_hostlib/platform/timer_kinetis.c"
"${ProjDirPath}/se_hostlib/platform/timer_kinetis_bm.c"
"${ProjDirPath}/se_hostlib/platform/timer_kinetis_freertos.c"
"${ProjDirPath}/se_hostlib/src/HostCryptoAPImbedtls.c"
"${ProjDirPath}/se_hostlib/tst/app_boot.h"
"${ProjDirPath}/se_hostlib/tst/axWebUtil.h"
"${ProjDirPath}/se_hostlib/tst/hkdf_mbedtls.c"
"${ProjDirPath}/se_hostlib/tst/hkdf_mbedtls.h"
"${ProjDirPath}/se_hostlib/tst/tst_a71ch_util.c"
"${ProjDirPath}/se_hostlib/tst/tst_a71ch_util.h"
"${ProjDirPath}/se_hostlib/tst/tst_sm_time.h"
"${ProjDirPath}/se_hostlib/tst/tst_sm_time_kinetis.c"
"${ProjDirPath}/se_hostlib/tst/tst_sm_util.c"
"${ProjDirPath}/se_hostlib/tst/tst_sm_util.h"
"${ProjDirPath}/se_hostlib/tst/tst_utils_kinetis.c"
"${ProjDirPath}/se_hostlib/tst/tst_utils_kinetis.h"
"${ProjDirPath}/se_hostlib/tst/tst_utils_rtos.c"
"${ProjDirPath}/se_hostlib/tst/tstHostCrypto.h"
"${ProjDirPath}/se_hostlib/tst/tstHostCrypto_mbedtls.c"
"${ProjDirPath}/source/a71ch_ex.h"
"${ProjDirPath}/source/ex_aes.c"
"${ProjDirPath}/source/ex_boot.c"
"${ProjDirPath}/source/ex_config.c"
"${ProjDirPath}/source/ex_debug.c"
"${ProjDirPath}/source/ex_ecc_nohc.c"
"${ProjDirPath}/source/ex_gpstorage.c"
"${ProjDirPath}/source/ex_misc.c"
"${ProjDirPath}/source/ex_psk.c"
"${ProjDirPath}/source/ex_scp.c"
"${ProjDirPath}/source/ex_sst.c"
"${ProjDirPath}/source/ex_sst_kp.c"
"${ProjDirPath}/source/ex_walkthrough.c"
"${ProjDirPath}/source/mainA71CH.c"
"${ProjDirPath}/src/MK82FN256xxx15_flash.ld"
"${ProjDirPath}/startup/startup_MK82F25615.S"
"${ProjDirPath}/utilities/fsl_assert.c"
"${ProjDirPath}/utilities/fsl_debug_console.c"
"${ProjDirPath}/utilities/fsl_debug_console.h"
"${ProjDirPath}/utilities/fsl_debug_console_conf.h"
"${ProjDirPath}/utilities/fsl_str.c"
"${ProjDirPath}/utilities/fsl_str.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MK82FN256xxx15_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MK82FN256xxx15_flash.ld -static")

TARGET_LINK_LIBRARIES(se_hostlib_mainA71CH.elf -Wl,--start-group)
target_link_libraries(se_hostlib_mainA71CH.elf debug ${ProjDirPath}/libs/lib_mmcau.a)

target_link_libraries(se_hostlib_mainA71CH.elf debug m)

target_link_libraries(se_hostlib_mainA71CH.elf debug c)

target_link_libraries(se_hostlib_mainA71CH.elf debug gcc)

target_link_libraries(se_hostlib_mainA71CH.elf debug nosys)

target_link_libraries(se_hostlib_mainA71CH.elf optimized ${ProjDirPath}/libs/lib_mmcau.a)

target_link_libraries(se_hostlib_mainA71CH.elf optimized m)

target_link_libraries(se_hostlib_mainA71CH.elf optimized c)

target_link_libraries(se_hostlib_mainA71CH.elf optimized gcc)

target_link_libraries(se_hostlib_mainA71CH.elf optimized nosys)

#link_directories(${ProjDirPath}/../../../../../middleware/mmcau/asm-cm4-cm7)

link_directories(${ProjDirPath}/libs)


#link_directories(${ProjDirPath}/../../../../../middleware/mmcau/asm-cm4-cm7)


TARGET_LINK_LIBRARIES(se_hostlib_mainA71CH.elf -Wl,--end-group)

