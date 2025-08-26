#ifndef _ASM_X86_UNISTD_64_X32_H
#define _ASM_X86_UNISTD_64_X32_H 1

#define __NR_x32_rt_sigaction 512
#define __NR_x32_rt_sigreturn 513
#define __NR_x32_ioctl 514
#define __NR_x32_readv 515
#define __NR_x32_writev 516
#define __NR_x32_recvfrom 517
#define __NR_x32_sendmsg 518
#define __NR_x32_recvmsg 519
#define __NR_x32_execve 520
#define __NR_x32_ptrace 521
#define __NR_x32_rt_sigpending 522
#define __NR_x32_rt_sigtimedwait 523
#define __NR_x32_rt_sigqueueinfo 524
#define __NR_x32_sigaltstack 525
#define __NR_x32_timer_create 526
#define __NR_x32_mq_notify 527
#define __NR_x32_kexec_load 528
#define __NR_x32_waitid 529
#define __NR_x32_set_robust_list 530
#define __NR_x32_get_robust_list 531
#define __NR_x32_vmsplice 532
#define __NR_x32_move_pages 533
#define __NR_x32_preadv 534
#define __NR_x32_pwritev 535
#define __NR_x32_rt_tgsigqueueinfo 536
#define __NR_x32_recvmmsg 537
#define __NR_x32_sendmmsg 538
#define __NR_x32_process_vm_readv 539
#define __NR_x32_process_vm_writev 540
#define __NR_x32_setsockopt 541
#define __NR_x32_getsockopt 542
#define __NR_x32_io_setup 543
#define __NR_x32_io_submit 544
#define __NR_x32_execveat 545

#ifndef __KERNEL__
#include <bits/wordsize.h>

#define syno_utime(arg1, arg2)				syscall(__NR_syno_utime, arg1, arg2)

#define syno_archive_bit(arg1, arg2)			syscall(__NR_syno_archive_bit, arg1, arg2)

#define syno_recv_file(arg1, arg2, arg3, arg4, arg5)		syscall(__NR_syno_recv_file, arg1, arg2, arg3, arg4, arg5)

#define syno_mtd_alloc(arg1)				syscall(__NR_syno_mtd_alloc, arg1)

#define syno_caseless_stat(arg1, arg2)			syscall(__NR_syno_caseless_stat, arg1, arg2)
#define syno_caseless_lstat(arg1, arg2)			syscall(__NR_syno_caseless_lstat, arg1, arg2)

#define syno_ecrypt_name(arg1, arg2)			syscall(__NR_syno_ecrypt_name, arg1, arg2)
#define syno_decrypt_name(arg1, arg2, arg3)		syscall(__NR_syno_decrypt_name, arg1, arg2, arg3)

#define syno_acl_check_perm(arg1, arg2)			syscall(__NR_syno_acl_check_perm, arg1, arg2)
#define syno_acl_is_support(arg1, arg2, arg3)		syscall(__NR_syno_acl_is_support, arg1, arg2, arg3)
#define syno_acl_get_perm(arg1, arg2)			syscall(__NR_syno_acl_get_perm, arg1, arg2)

#define syno_flush_aggregate(arg1)			syscall(__NR_syno_flush_aggregate, arg1)

#if (__WORDSIZE == 64) || (_FILE_OFFSET_BITS == 64)
#define syno_stat(arg1, arg2, arg3)				syscall(__NR_syno_stat, arg1, arg2, arg3)
#define syno_fstat(arg1, arg2, arg3)				syscall(__NR_syno_fstat, arg1, arg2, arg3)
#define syno_lstat(arg1, arg2, arg3)				syscall(__NR_syno_lstat, arg1, arg2, arg3)
#endif /* (__WORDSIZE == 64) || (_FILE_OFFSET_BITS == 64) */

#define syno_notify_init(arg1)				syscall(__NR_syno_notify_init, arg1)
#define syno_notify_add_watch(arg1, arg2, arg3)		syscall(__NR_syno_notify_add_watch, arg1, arg2, arg3)
#define syno_notify_remove_watch(arg1, arg2, arg3)		syscall(__NR_syno_notify_remove_watch, arg1, arg2, arg3)
#define syno_notify_add_watch32(arg1, arg2, arg3)		syscall(__NR_syno_notify_add_watch32, arg1, arg2, arg3)
#define syno_notify_remove_watch32(arg1, arg2, arg3)	syscall(__NR_syno_notify_remove_watch32, arg1, arg2, arg3)

#define syno_archive_overwrite(arg1, arg2)		syscall(__NR_syno_archive_overwrite, arg1, arg2)
#endif


#endif /* _ASM_X86_UNISTD_64_X32_H */
