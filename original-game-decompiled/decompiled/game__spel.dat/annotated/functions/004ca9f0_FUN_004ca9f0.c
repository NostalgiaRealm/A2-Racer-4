
/* ==== FUN_004ca9f0 @ 004ca9f0 ==== 
 * signature: int __cdecl FUN_004ca9f0(char * param_1)
 * body: 004ca9f0-004caa46
 */

int __cdecl FUN_004ca9f0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  iVar2 = 0;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = iVar2 + *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) +
                                       (uint)(byte)param_1[iVar5] * 0xc) + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
    if (0 < iVar4) {
      iVar2 = iVar2 + *(int *)(DAT_00740a18 + 0x88) * (~uVar3 - 2);
    }
  }
  return iVar2;
}


