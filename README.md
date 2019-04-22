# A simple byte viewer

Displays the bytes of any file in hexadecimal.
16 Bytes per line are shown plus an ascii representation of the bytes
or an '.' if a byte is not printable/visible in ascii.

## Installing

Just compile..

## Usage

```console
> hexbytes.exe path\to\file
```

## Example

Examining the source code of itself (which is utf-8 encoded):

```console
> hexbytes.exe hexbytes.c
23 69 6e 63 6c 75 64 65 20 3c 73 74 64 69 6f 2e         #include.<stdio.
68 3e 0d 0a 23 69 6e 63 6c 75 64 65 20 3c 73 74         h>..#include.<st
64 6c 69 62 2e 68 3e 0d 0a 0d 0a 23 64 65 66 69         dlib.h>....#defi
6e 65 20 42 59 54 45 53 5f 50 45 52 5f 4c 49 4e         ne.BYTES_PER_LIN
45 20 31 36 0d 0a 0d 0a 76 6f 69 64 20 63 6c 65         E.16....void.cle
61 72 5f 62 75 66 66 65 72 28 63 68 61 72 20 2a         ar_buffer(char.*
62 75 66 66 65 72 29 0d 0a 7b 0d 0a 09 66 6f 72         buffer)..{...for
28 69 6e 74 20 69 20 3d 20 30 3b 20 69 20 3c 20         (int.i.=.0;.i.<.
42 59 54 45 53 5f 50 45 52 5f 4c 49 4e 45 20 2b         BYTES_PER_LINE.+
20 31 3b 20 69 2b 2b 29 0d 0a 09 7b 0d 0a 09 09         .1;.i++)...{....
2a 28 62 75 66 66 65 72 20 2b 20 69 29 20 3d 20         *(buffer.+.i).=.
30 3b 0d 0a 09 7d 0d 0a 7d 0d 0a 0d 0a 69 6e 74         0;...}..}....int
20 6d 61 69 6e 28 69 6e 74 20 61 72 67 63 2c 20         .main(int.argc,.
63 68 61 72 20 2a 2a 61 72 67 76 29 0d 0a 7b 0d         char.**argv)..{.
0a 09 69 66 28 61 72 67 63 20 21 3d 20 32 29 0d         ..if(argc.!=.2).
0a 09 7b 0d 0a 09 09 66 70 72 69 6e 74 66 28 73         ..{....fprintf(s
74 64 65 72 72 2c 20 22 55 73 61 67 65 3a 20 25         tderr,."Usage:.%
73 20 70 61 74 68 5c 5c 74 6f 5c 5c 66 69 6c 65         s.path\\to\\file
5c 6e 22 2c 20 2a 61 72 67 76 29 3b 0d 0a 09 09         \n",.*argv);....
72 65 74 75 72 6e 20 31 3b 0d 0a 09 7d 0d 0a 0d         return.1;...}...
0a 09 63 68 61 72 20 2a 70 61 74 68 20 3d 20 2a         ..char.*path.=.*
28 61 72 67 76 20 2b 20 31 29 3b 0d 0a 09 46 49         (argv.+.1);...FI
4c 45 20 2a 66 69 6c 65 20 3d 20 66 6f 70 65 6e         LE.*file.=.fopen
28 70 61 74 68 2c 20 22 72 62 22 29 3b 0d 0a 09         (path,."rb");...
69 66 28 66 69 6c 65 20 3d 3d 20 4e 55 4c 4c 29         if(file.==.NULL)
0d 0a 09 7b 0d 0a 09 09 66 70 72 69 6e 74 66 28         ...{....fprintf(
73 74 64 65 72 72 2c 20 22 45 72 72 6f 72 3a 20         stderr,."Error:.
63 61 6e 6e 6f 74 20 6f 70 65 6e 20 66 69 6c 65         cannot.open.file
22 29 3b 0d 0a 09 09 72 65 74 75 72 6e 20 31 3b         ");....return.1;
0d 0a 09 7d 0d 0a 0d 0a 09 69 6e 74 20 63 3b 0d         ...}.....int.c;.
0a 09 69 6e 74 20 69 20 3d 20 30 3b 0d 0a 09 63         ..int.i.=.0;...c
68 61 72 20 2a 62 75 66 66 65 72 20 3d 20 6d 61         har.*buffer.=.ma
6c 6c 6f 63 28 73 69 7a 65 6f 66 28 63 68 61 72         lloc(sizeof(char
29 20 2a 20 28 42 59 54 45 53 5f 50 45 52 5f 4c         ).*.(BYTES_PER_L
49 4e 45 20 2b 20 31 29 29 3b 0d 0a 09 63 6c 65         INE.+.1));...cle
61 72 5f 62 75 66 66 65 72 28 62 75 66 66 65 72         ar_buffer(buffer
29 3b 0d 0a 09 77 68 69 6c 65 28 28 63 20 3d 20         );...while((c.=.
67 65 74 63 28 66 69 6c 65 29 29 20 21 3d 20 45         getc(file)).!=.E
4f 46 29 0d 0a 09 7b 0d 0a 09 09 70 72 69 6e 74         OF)...{....print
66 28 22 25 30 2e 32 78 22 2c 20 63 29 3b 0d 0a         f("%0.2x",.c);..
09 09 69 66 28 63 20 3c 20 27 21 27 20 7c 7c 20         ..if(c.<.'!'.||.
63 20 3e 20 27 7e 27 29 20 20 2f 2f 20 6e 6f 6e         c.>.'~')..//.non
2d 70 72 69 6e 74 61 62 6c 65 20 28 73 65 65 20         -printable.(see.
61 73 63 69 69 20 74 61 62 6c 65 29 0d 0a 09 09         ascii.table)....
7b 0d 0a 09 09 09 63 20 3d 20 27 2e 27 3b 0d 0a         {.....c.=.'.';..
09 09 7d 0d 0a 09 09 2a 28 62 75 66 66 65 72 20         ..}....*(buffer.
2b 20 69 29 20 3d 20 28 63 68 61 72 29 20 63 3b         +.i).=.(char).c;
0d 0a 09 09 69 66 28 69 20 3d 3d 20 42 59 54 45         ....if(i.==.BYTE
53 5f 50 45 52 5f 4c 49 4e 45 20 2d 20 31 29 0d         S_PER_LINE.-.1).
0a 09 09 7b 0d 0a 09 09 09 70 72 69 6e 74 66 28         ...{.....printf(
22 5c 74 5c 74 25 73 5c 6e 22 2c 20 62 75 66 66         "\t\t%s\n",.buff
65 72 29 3b 0d 0a 09 09 09 69 20 3d 20 30 3b 0d         er);.....i.=.0;.
0a 09 09 09 63 6c 65 61 72 5f 62 75 66 66 65 72         ....clear_buffer
28 62 75 66 66 65 72 29 3b 0d 0a 09 09 7d 0d 0a         (buffer);....}..
09 09 65 6c 73 65 0d 0a 09 09 7b 0d 0a 09 09 09         ..else....{.....
70 72 69 6e 74 66 28 22 20 22 29 3b 0d 0a 09 09         printf(".");....
09 69 2b 2b 3b 0d 0a 09 09 7d 0d 0a 09 7d 0d 0a         .i++;....}...}..
09 69 66 28 69 20 21 3d 20 30 29 0d 0a 09 7b 0d         .if(i.!=.0)...{.
0a 09 09 66 6f 72 28 69 6e 74 20 6a 20 3d 20 30         ...for(int.j.=.0
3b 20 6a 20 3c 20 28 42 59 54 45 53 5f 50 45 52         ;.j.<.(BYTES_PER
5f 4c 49 4e 45 20 2d 20 69 29 3b 20 6a 2b 2b 29         _LINE.-.i);.j++)
0d 0a 09 09 7b 0d 0a 09 09 09 69 66 28 6a 20 3d         ....{.....if(j.=
3d 20 30 29 0d 0a 09 09 09 7b 0d 0a 09 09 09 09         =.0).....{......
70 72 69 6e 74 66 28 22 20 22 29 3b 0d 0a 09 09         printf(".");....
09 7d 0d 0a 09 09 09 65 6c 73 65 0d 0a 09 09 09         .}.....else.....
7b 0d 0a 09 09 09 09 70 72 69 6e 74 66 28 22 20         {......printf(".
20 22 29 3b 0d 0a 09 09 09 7d 0d 0a 09 09 09 69         .");.....}.....i
66 28 6a 20 21 3d 20 42 59 54 45 53 5f 50 45 52         f(j.!=.BYTES_PER
5f 4c 49 4e 45 20 2d 20 31 29 0d 0a 09 09 09 7b         _LINE.-.1).....{
0d 0a 09 09 09 09 70 72 69 6e 74 66 28 22 20 22         ......printf("."
29 3b 0d 0a 09 09 09 7d 0d 0a 09 09 7d 0d 0a 09         );.....}....}...
09 70 72 69 6e 74 66 28 22 5c 74 5c 74 25 73 5c         .printf("\t\t%s\
6e 22 2c 20 62 75 66 66 65 72 29 3b 0d 0a 09 7d         n",.buffer);...}
0d 0a 09 66 72 65 65 28 62 75 66 66 65 72 29 3b         ...free(buffer);
0d 0a 7d                                                ..}
```
