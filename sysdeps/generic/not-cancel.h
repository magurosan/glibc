/* Uncancelable versions of cancelable interfaces.  Generic version.
   Copyright (C) 2003-2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@redhat.com>, 2003.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* By default we have none.  Map the name to the normal functions.  */
#define __open_nocancel(...) \
  __open (__VA_ARGS__)
#define __open64_nocancel(...) \
  __open64 (__VA_ARGS__)
#define openat_not_cancel(fd, name, flags, mode) \
  __openat (fd, name, flags, mode)
#define openat_not_cancel_3(fd, name, flags) \
  __openat (fd, name, flags, 0)
#define openat64_not_cancel(fd, name, flags, mode) \
  __openat64 (fd, name, flags, mode)
#define openat64_not_cancel_3(fd, name, flags) \
  __openat64 (fd, name, flags, 0)
#define close_not_cancel(fd) \
  __close (fd)
#define close_not_cancel_no_status(fd) \
  (void) __close (fd)
#define read_not_cancel(fd, buf, n) \
  __read (fd, buf, n)
#define write_not_cancel(fd, buf, n) \
  __write (fd, buf, n)
#define writev_not_cancel_no_status(fd, iov, n) \
  (void) __writev (fd, iov, n)
#define fcntl_not_cancel(fd, cmd, val) \
  __fcntl (fd, cmd, val)
# define waitpid_not_cancel(pid, stat_loc, options) \
  __waitpid (pid, stat_loc, options)
#define pause_not_cancel() \
  __pause ()
#define nanosleep_not_cancel(requested_time, remaining) \
  __nanosleep (requested_time, remaining)
#define sigsuspend_not_cancel(set) \
  __sigsuspend (set)

#define NO_CANCELLATION 1
