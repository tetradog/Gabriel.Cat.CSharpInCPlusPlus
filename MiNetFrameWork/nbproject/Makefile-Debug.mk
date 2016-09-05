#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/e7a6939f/Consola.o \
	${OBJECTDIR}/_ext/e7a6939f/Object.o \
	${OBJECTDIR}/_ext/e7a6939f/String.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libminetframework.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libminetframework.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libminetframework.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libminetframework.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libminetframework.a

${OBJECTDIR}/_ext/e7a6939f/Consola.o: ../../Visual\ Studio\ 2015/Projects/MyNetFrameWork/Consola.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/e7a6939f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/e7a6939f/Consola.o ../../Visual\ Studio\ 2015/Projects/MyNetFrameWork/Consola.cpp

${OBJECTDIR}/_ext/e7a6939f/Object.o: ../../Visual\ Studio\ 2015/Projects/MyNetFrameWork/Object.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/e7a6939f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/e7a6939f/Object.o ../../Visual\ Studio\ 2015/Projects/MyNetFrameWork/Object.cpp

${OBJECTDIR}/_ext/e7a6939f/String.o: ../../Visual\ Studio\ 2015/Projects/MyNetFrameWork/String.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/e7a6939f
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/e7a6939f/String.o ../../Visual\ Studio\ 2015/Projects/MyNetFrameWork/String.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libminetframework.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
