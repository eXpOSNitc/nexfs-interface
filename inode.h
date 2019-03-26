#ifndef XFS_INODE_H

#define XFS_INODE_H

int removeInodeEntry(int locationOfInode);
int getDataBlocks(int *basicBlockAddr, int locationOfInode);
int FindEmptyInodeEntry();
void AddEntryToMemInode(int startIndexInInode, int fileType, char *nameOfFile, int size_of_file, int *addrOfDataBlocks);
int getInodeEntry(char *name);

#endif