
/* ==== FUN_0055a88d @ 0055a88d ==== 
 * signature: char * __cdecl FUN_0055a88d(int param_1)
 * body: 0055a88d-0055a94c
 */

char * __cdecl FUN_0055a88d(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  short *psVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_005c7f48 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
        else {
          pcVar2 = &DAT_005c7f4a + (uint)*(ushort *)(param_1 + 8) * 8;
        }
      }
      else {
        pcVar2 = &DAT_005c7f4c + (uint)*(ushort *)(param_1 + 8) * 8;
      }
    }
    else {
      pcVar2 = &DAT_005c7f4e + (uint)*(ushort *)(param_1 + 8) * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = (char *)0x0;
    iVar3 = 0;
    psVar4 = &DAT_005c7ed0;
    do {
      if (*psVar4 == *(short *)(param_1 + 8)) {
        if ((uVar1 & 3) != 0) {
          return (char *)(iVar3 * 10 + 0x5c7ed8);
        }
        if ((uVar1 & 0xc) != 0) {
          return (char *)(iVar3 * 10 + 0x5c7ed6);
        }
        if ((uVar1 & 0x10) != 0) {
          return (char *)(iVar3 * 10 + 0x5c7ed4);
        }
        return (char *)(iVar3 * 10 + 0x5c7ed2);
      }
      psVar4 = psVar4 + 5;
      iVar3 = iVar3 + 1;
    } while ((int)psVar4 < 0x5c7f48);
  }
  return pcVar2;
}


