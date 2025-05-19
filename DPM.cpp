#include "DPM.h"
#include "PowerShellUtils.h"
#include <iostream>

namespace DPM {

void createPartition(int diskNumber, int sizeMB) {
    std::string cmd = "New-Partition -DiskNumber " + std::to_string(diskNumber) +
                      " -Size " + std::to_string(sizeMB * 1024 * 1024) +
                      " | Format-Volume -FileSystem NTFS -NewFileSystemLabel 'DPM_Part' -Confirm:$false";
    runPowerShellCommand(cmd);
}

void deletePartition(int diskNumber, int partitionNumber) {
    std::string cmd = "Get-Partition -DiskNumber " + std::to_string(diskNumber) +
                      " -PartitionNumber " + std::to_string(partitionNumber) +
                      " | Remove-Partition -Confirm:$false";
    runPowerShellCommand(cmd);
}

void resizePartition(int diskNumber, int partitionNumber, int newSizeMB) {
    std::string cmd = "$p = Get-Partition -DiskNumber " + std::to_string(diskNumber) +
                      " -PartitionNumber " + std::to_string(partitionNumber) + "; " +
                      "Resize-Partition -InputObject $p -Size " + std::to_string(newSizeMB * 1024 * 1024);
    runPowerShellCommand(cmd);
}

void reallocateSpace(int diskNumber, int partitionNumber) {
    std::string cmd = "$p = Get-Partition -DiskNumber " + std::to_string(diskNumber) +
                      " -PartitionNumber " + std::to_string(partitionNumber) + "; " +
                      "$max = (Get-PartitionSupportedSize -DiskNumber " + std::to_string(diskNumber) +
                      " -PartitionNumber " + std::to_string(partitionNumber) + ").SizeMax; " +
                      "Resize-Partition -InputObject $p -Size $max";
    runPowerShellCommand(cmd);
}

void listDriveLayout(int diskNumber) {
    std::string cmd = "Get-Partition -DiskNumber " + std::to_string(diskNumber) +
                      " | Format-Table -AutoSize";
    runPowerShellCommand(cmd);
}

void listAllDisks() {
    std::string cmd = "Get-Disk | Format-Table Number, FriendlyName, OperationalStatus, Size, PartitionStyle -AutoSize";
    runPowerShellCommand(cmd);
}

} // namespace DPM
