#include <iostream>
#include "include/DPM.h"

int main() {
    int choice;

    while (true) {
        std::cout << "\n--- Dynamic Partition Manager ---\n";
        std::cout << "1. List All Disks\n";
        std::cout << "2. List Drive Layout (Partitions) of a Disk\n";
        std::cout << "3. Create Partition\n";
        std::cout << "4. Delete Partition\n";
        std::cout << "5. Resize Partition\n";
        std::cout << "6. Reallocate Partition Space\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        int diskNumber, partitionNumber, sizeMB;

        switch (choice) {
            case 1:
                DPM::listAllDisks();
                break;

            case 2:
                std::cout << "Enter Disk Number: ";
                std::cin >> diskNumber;
                DPM::listDriveLayout(diskNumber);
                break;

            case 3:
                std::cout << "Enter Disk Number: ";
                std::cin >> diskNumber;
                std::cout << "Enter Partition Size in MB: ";
                std::cin >> sizeMB;
                DPM::createPartition(diskNumber, sizeMB);
                break;

            case 4:
                std::cout << "Enter Disk Number: ";
                std::cin >> diskNumber;
                std::cout << "Enter Partition Number: ";
                std::cin >> partitionNumber;
                DPM::deletePartition(diskNumber, partitionNumber);
                break;

            case 5:
                std::cout << "Enter Disk Number: ";
                std::cin >> diskNumber;
                std::cout << "Enter Partition Number: ";
                std::cin >> partitionNumber;
                std::cout << "Enter New Size in MB: ";
                std::cin >> sizeMB;
                DPM::resizePartition(diskNumber, partitionNumber, sizeMB);
                break;

            case 6:
                std::cout << "Enter Disk Number: ";
                std::cin >> diskNumber;
                std::cout << "Enter Partition Number: ";
                std::cin >> partitionNumber;
                DPM::reallocateSpace(diskNumber, partitionNumber);
                break;

            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
