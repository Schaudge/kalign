/*
    Kalign - a multiple sequence alignment program

    Copyright 2006, 2019 Timo Lassmann

    This file is part of kalign.

    Kalign is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/

#ifndef IO_H
#define IO_H
#ifndef kalign_extern
#ifdef __cplusplus
#define kalign_extern extern "C"
#else
#define kalign_extern extern
#endif
#endif


#define FORMAT_DETECT_FAIL -1
#define FORMAT_FA 1
#define FORMAT_MSF 2
#define FORMAT_CLU 3

struct msa;
/* dealign */
/* EXTERN int dealign_msa(struct msa* msa); */

/* clean */
kalign_extern int run_extra_checks_on_msa(struct msa* msa);
/* convert */
/* kalign_extern int convert_msa_to_internal(struct msa* msa, int type); */
/* rw functions */


kalign_extern int read_input(char* infile, int quiet, struct msa** msa);
kalign_extern int write_msa(struct msa* msa, char* outfile, int type);
kalign_extern void free_msa(struct msa* msa);

kalign_extern int merge_msa(struct msa** dest, struct msa* src);




#endif
