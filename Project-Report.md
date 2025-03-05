# Project Report

---

## Project Contributors

<aside>
**Team Lead**

- Utkarsh Bisth
</aside>

<aside>
**Core Developers**

- Nitish Chauhan
- Sumit Miyan
- Vedant
- Utkarsh Bisth
</aside>

<aside>

<aside>
💡

![GEHU.png](GEHU.png.png)

**Graphic Era Hill University ( Dehradun )**

Department of Computer Science & Engineering

2025-26

</aside>

</aside>

---

## Abstract

Dynamic Partition Manager (DPM) is an upcoming operating system project aimed at **enhancing disk partitioning with dynamic storage allocation**. Unlike traditional disk management tools that impose rigid partition structures, DPM is being designed to allow users to create, resize, merge, and split partitions **dynamically without rebooting or losing data**. The project will provide greater flexibility in managing storage efficiently, optimizing space utilization without predefined constraints.

The **backend of DPM will be developed in C**, enabling low-level disk management, while **Python will be used for the GUI**, ensuring a user-friendly experience. The application is planned to implement **real-time storage reallocation** and support **multiple file systems, including NTFS and FAT32**, making it a versatile tool across different environments. Additionally, **inter-process communication (IPC) techniques** will be used to synchronize operations between the backend and GUI.

DPM is being structured to be lightweight and **compatible with machines built in the past five years**, ensuring that it runs efficiently on a wide range of hardware configurations. By delving into **disk management, storage virtualization, and system-level programming**, this project aims to serve as both a practical tool and an academic study in **dynamic memory allocation and operating system architecture**. This documentation outlines the **objectives, technical design, implementation roadmap, challenges, and future scope** of the project.

---

## Introduction

Disk partitioning plays a crucial role in organizing storage, enhancing performance, and ensuring efficient data management. **Traditional partitioning tools** require preallocated partition sizes and often necessitate data migration or system restarts to make changes. This creates inefficiencies, especially for users who frequently adjust storage allocations.

DPM seeks to address these limitations by enabling **dynamic partition resizing and real-time space management**. This will be particularly beneficial for professionals working with large datasets, system administrators, and everyday users who need **seamless storage reallocation** without interruptions. The project integrates principles from **operating systems, disk management, and memory allocation**, making it a robust academic and practical endeavor.

The proposed system will serve as a **standalone partitioning tool**, differentiating itself from built-in disk management utilities by offering enhanced flexibility and user control.

---

## Objectives

DPM aims to provide the following core functionalities:

1. **Create Partitions Dynamically** – Users will be able to allocate new partitions without predefined constraints.
2. **Resize Partitions Without Data Loss** – Allows partitions to be expanded or shrunk as needed.
3. **Merge & Split Partitions** – Users will be able to combine multiple partitions or divide a single partition into smaller ones.
4. **Format & Change File Systems** – Will support formatting and switching between NTFS, FAT32, and other file systems.
5. **Monitor Disk Usage & Reallocate Space** – Will provide detailed insights into storage utilization and dynamically adjust allocations.

---

## Technical Architecture

### **5.1 System Overview**

DPM will consist of three key components:

1. **Backend (C Language):** Will handle low-level disk operations such as partition creation, resizing, and file system management.
2. **Frontend (Python GUI):** Will provide an intuitive interface for users to interact with disk management functionalities.
3. **Middleware (IPC Techniques):** Will ensure smooth communication between the backend and frontend for real-time operations.

### **5.2 Key Technologies**

- **Programming Languages:** C (Backend), Python (Frontend)
- **File Systems Supported:** NTFS, FAT32, exFAT
- **GUI Framework:** Tkinter/PyQt (For user interface development)
- **System APIs:** Windows Disk Management API (For direct disk operations)
- **Communication Mechanisms:** Named Pipes, Shared Memory, or Sockets for IPC

---

## Implementation Plan

Since no strict deadlines are imposed, the development will proceed in **incremental phases**:

### **Phase 1: Research & Learning** (Weeks 1-4)

- Study disk partitioning techniques.
- Understand system-level APIs for disk management.
- Research file systems and memory allocation.

### **Phase 2: Basic CLI Prototype** (Weeks 5-8)

- Develop a command-line tool to execute core functionalities.
- Implement partition creation, resizing, and deletion.
- Test disk operations on virtual machines.

### **Phase 3: Python GUI Integration** (Weeks 9-12)

- Develop a graphical user interface (GUI) for easier interaction.
- Integrate GUI with backend functionalities.
- Implement real-time disk monitoring.

### **Phase 4: Testing & Optimization** (Weeks 13-16)

- Test for stability, error handling, and safety mechanisms.
- Optimize performance for minimal resource consumption.
- Ensure compatibility with different storage devices.

### **Phase 5: Finalization & Documentation** (Weeks 17-20)

- Refine the interface and backend code.
- Prepare technical documentation and user guide.
- Submit the project for evaluation.

---

## System Requirements

DPM is being designed to operate efficiently on machines from the past five years without requiring high-end hardware. The system requirements will be determined **after in-depth research on disk partitioning methodologies**. However, a preliminary estimate is as follows:

- **Operating System:** Windows 10 or later
- **Processor:** Intel Core i3 (or equivalent) and above
- **RAM:** Minimum 4GB (8GB recommended for large-scale operations)
- **Storage:** At least 50MB for installation (additional space required for partitioning operations)
- **Permissions:** Administrative privileges required for disk modifications

---

## Expected Challenges

1. **Direct Disk Access:** Requires handling system APIs carefully to avoid corrupting storage.
2. **Data Integrity & Safety:** Preventing accidental data loss while resizing or merging partitions.
3. **File System Compatibility:** Ensuring smooth interaction with NTFS, FAT32, and exFAT.
4. **Performance Optimization:** Reducing resource consumption while maintaining speed.
5. **User-Friendly Design:** Simplifying complex disk operations for general users.
6. **Security Concerns:** Preventing unauthorized access to disk modification functionalities.

---

## Future Scope

DPM has potential for expansion into:

- **Cross-Platform Compatibility:** Extending support to Linux-based systems.
- **Automated Partitioning Algorithms:** AI-driven partition management for optimal storage allocation.
- **Cloud-Based Partition Management:** Remote disk management for cloud storage solutions.
- **Enhanced File System Support:** Integration with modern file systems like APFS and Btrfs.

---

## Conclusion

Dynamic Partition Manager (DPM) is an **ongoing project** aimed at **modernizing disk management**, enabling **flexible and real-time partitioning** while ensuring **data integrity and ease of use**. The project will be an **academic exploration of disk partitioning principles** and a **practical implementation** of a user-friendly partition manager.

By addressing **current limitations in storage allocation**, DPM will provide an efficient, research-driven solution that could contribute to future advancements in **storage virtualization and dynamic memory allocation**. The implementation of this project will significantly **enhance understanding of system-level programming, storage architecture, and operating system interactions**.

---

## References