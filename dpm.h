#ifndef DPM_H
#define DPM_H

#include <string>

namespace DPM {

// Disk and partition management functions
void createPartition(int diskNumber, int sizeMB);
void deletePartition(int diskNumber, int partitionNumber);
void resizePartition(int diskNumber, int partitionNumber, int newSizeMB);
void reallocateSpace(int diskNumber, int partitionNumber);

// Disk info listing functions
void listDriveLayout(int diskNumber);
void listAllDisks();

} // namespace DPM

#endif // DPM_H
