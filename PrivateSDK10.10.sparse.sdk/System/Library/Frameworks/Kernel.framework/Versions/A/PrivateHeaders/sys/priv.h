/*
 * Copyright (c) 2010-2014 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 2006 nCircle Network Security, Inc.
 * All rights reserved.
 *
 * This software was developed by Robert N. M. Watson for the TrustedBSD
 * Project under contract to nCircle Network Security, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR, NCIRCLE NETWORK SECURITY,
 * INC., OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD: src/sys/sys/priv.h,v 1.38.2.1.2.1 2009/10/25 01:10:29 kensmith Exp $
 */

/*
 * Kernel privilege checking interface.
 */
#ifndef _SYS_PRIV_H_
#define	_SYS_PRIV_H_

/*
 * Privilege list, sorted loosely by kernel subsystem.
 *
 * Think carefully before adding or reusing one of these privileges -- are
 * there existing instances referring to the same privilege?  Particular
 * numeric privilege assignments are part of the kernel extension ABI.
 */

/*
 * The remaining privileges typically correspond to one or a small
 * number of specific privilege checks, and have (relatively) precise
 * meanings.  They are loosely sorted into a set of base system
 * privileges, such as the ability to reboot, and then loosely by
 * subsystem, indicated by a subsystem name.
 */
#define	PRIV_ADJTIME		1000	/* Set time adjustment. */
#define PRIV_PROC_UUID_POLICY	1001	/* Change process uuid policy table. */
#define PRIV_GLOBAL_PROC_INFO	1002	/* Query information for processes owned by other users */
#define PRIV_SYSTEM_OVERRIDE	1003	/* Override global system settings for various subsystems for a limited duration/system-mode */
#define PRIV_HW_DEBUG_DATA	    1004	/* Extract hw-specific debug data (e.g. ECC data) */
#define PRIV_SELECTIVE_FORCED_IDLE	1005	/* Configure and control Selective Forced Idle (SFI) subsystem */
#define PRIV_PROC_TRACE_INSPECT 1006   /* Request trace memory of arbitrary process to be inspected */

/*
 * Virtual memory privileges.
 */
#define	PRIV_VM_PRESSURE	6000	/* Check VM pressure. */
#define	PRIV_VM_JETSAM	   	6001	/* Adjust jetsam configuration. */
#define	PRIV_VM_FOOTPRINT_LIMIT 6002    /* Adjust physical footprint limit. */

/*
 * Network stack privileges.
 */
#define	PRIV_NET_PRIVILEGED_TRAFFIC_CLASS	10000	/* Set SO_PRIVILEGED_TRAFFIC_CLASS. */ 
#define	PRIV_NET_PRIVILEGED_SOCKET_DELEGATE	10001	/* Set delegate on a socket */
#define	PRIV_NET_INTERFACE_CONTROL		10002	/* Enable interface debug logging. */
#define	PRIV_NET_PRIVILEGED_NETWORK_STATISTICS	10003	/* Access to all sockets */
#define	PRIV_NET_PRIVILEGED_NECP_POLICIES	10004	/* Access to privileged Network Extension policies */
#define	PRIV_NET_RESTRICTED_AWDL		10005	/* Access to restricted AWDL mode */
#define	PRIV_NET_PRIVILEGED_NECP_MATCH		10006	/* Privilege verified by Network Extension policies */

/*
 * IPv4 and IPv6 privileges.
 */
#define	PRIV_NETINET_RESERVEDPORT	11000	/* Bind low port number. */

/*
 * VFS privileges
 */
#define PRIV_VFS_OPEN_BY_ID	14000 	/*Allow calling openbyid_np()*/

/*
 * Privilege check interface.  No flags are currently defined for the API.
 */
#include <sys/kauth.h>
int	priv_check_cred(kauth_cred_t cred, int priv, int flags);

#endif /* !_SYS_PRIV_H_ */
