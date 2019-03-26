#ifndef XFS_DISKUTIL_H

#define XFS_DISKUTIL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "disk.h"

#define ASSEMBLY_CODE 0
#define DATA_FILE 1

#define XFS_ERROR -1

void disk_init();
void formatDisk(int format);
XOSFILE *getAllFiles();
void listAllFiles();
void displayFileContents(char *name);
int clearDiskBlocks();
int getDataFileSize(FILE *fp);
void displayDiskFreeList();
void expandpath(char *path);
void addext(char *filename, char *ext);
int loadCode();
int loadCodeWithLabels(char *infile, int disk_block, int no_of_disk_blocks, int mem_page);

int loadOSCode(char *name);
int loadTimerCode(char *name);
int loadDiskControllerIntCode(char *name);
int loadConsoleIntCode(char *name);
int loadExHandlerToDisk(char *name);
int loadIntCode(char *name, int intNo);
int loadModuleCode(char *infile, int modNo);
int loadINITCode(char *name);
int loadDataToDisk(char *name);
int loadExecutableToDisk(char *name);

int deleteOSCodeFromDisk();
int deleteTimerFromDisk();
int deleteDiskControllerINTFromDisk();
int deleteConsoleINTFromDisk();
int deleteExHandlerFromDisk();
int deleteIntCode(int intNo);
int deleteINITFromDisk();
int deleteDataFromDisk(char *name);
int deleteExecutableFromDisk(char *name);

#endif
