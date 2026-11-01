
/* ==== rc_fopen @ 004c62c0 ==== 
 * signature: int * __cdecl rc_fopen(LPCSTR param_1)
 * body: 004c62c0-004c6423
 * note: ANALYST: Opens a file, inside the resource archive when listed there. [confidence: confirmed] [evidence: Fileio.cpp strings]
 */

/* ANALYST: Opens a file, inside the resource archive when listed there. [confidence: confirmed]
   [evidence: Fileio.cpp strings] */

int * __cdecl rc_fopen(LPCSTR param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_00740914 == 0) || (DAT_00740918 == 1)) {
    piVar2 = (int *)FUN_005589a5(param_1,&DAT_005b496c);
    if (piVar2 == (int *)0x0) {
      FUN_004c3fa0((byte *)s__s__d____file_open_failed___s__005b4acc);
      return (int *)0x0;
    }
  }
  else {
    iVar3 = 0;
    if (0 < DAT_00740908) {
      iVar4 = 0;
      do {
        iVar1 = __strcmpi((char *)(iVar4 + DAT_0074090c),param_1);
        if (iVar1 == 0) {
          DAT_00740910 = *(int *)(DAT_0074090c + 0x14 + iVar3 * 0x1c);
          DAT_007408fc = *(int *)(DAT_0074090c + iVar3 * 0x1c + 0x18) + DAT_00740910;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (iVar3 < DAT_00740908);
    }
    if (iVar3 != (short)DAT_00740908) {
      FUN_0055a06b(DAT_00740904,DAT_00740910,0);
      FUN_005692e1((int)DAT_00740904);
      FUN_004c3fa0((byte *)s__s__d____file_open_succeeded___s_005b4a94);
      return DAT_00740904;
    }
    piVar2 = (int *)FUN_005589a5(param_1,&DAT_005b496c);
    if (piVar2 == (int *)0x0) {
      FUN_004c3fa0((byte *)s__s__d____file_open_failed___s__005b4acc);
      return (int *)0x0;
    }
  }
  FUN_004c3fa0((byte *)s__s__d____file_open_succeeded___s_005b4a6c);
  return piVar2;
}


