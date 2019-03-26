#ifndef XFS_DISKUTILS_H

#define XFS_DISKUTILS_H

#include <string.h>

#include "fileSystem.h"

void virtual_disk_init();
void emptyBlock(int blockNo);
void freeUnusedBlock(int *freeBlock, int size);
int FindFreeBlock();
void setDefaultValues(int dataStructure);
void commitMemCopyToDisk(int dataStructure);
XOSFILE* _getAllFiles();
int loadFileToVirtualDisk();
void clearVirtDisk();
int getValueAt(int address);
void storeValueAt(int address, int num);
void storeValue(char *str, int num);
void storeStringValueAt(int address, char *value);

#endif
