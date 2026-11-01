
/* ==== FUN_0055f248 @ 0055f248 ==== 
 * signature: undefined4 * __stdcall FUN_0055f248(void)
 * body: 0055f248-0055f2bf
 */

undefined4 * FUN_0055f248(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = 0;
  piVar4 = DAT_007503e0;
  if (0 < DAT_00751400) {
    do {
      if (*piVar4 == 0) {
        pvVar2 = _malloc(0x20);
        DAT_007503e0[iVar1] = (int)pvVar2;
        puVar3 = (undefined4 *)DAT_007503e0[iVar1];
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
LAB_0055f2a3:
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        puVar3[4] = 0xffffffff;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar3[7] = 0;
        return puVar3;
      }
      if ((*(byte *)(*piVar4 + 0xc) & 0x83) == 0) {
        puVar3 = (undefined4 *)DAT_007503e0[iVar1];
        goto LAB_0055f2a3;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < DAT_00751400);
  }
  return (undefined4 *)0x0;
}


