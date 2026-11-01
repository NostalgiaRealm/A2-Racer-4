
/* ==== FUN_00405ab8 @ 00405ab8 ==== 
 * signature: undefined4 __stdcall FUN_00405ab8(int param_1, int param_2, int * param_3, int * param_4)
 * body: 00405ab8-00405abf
 */

uint FUN_00405ab8(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined3 uVar5;
  uint uVar4;
  int *piVar6;
  
  iVar3 = 0;
  iVar1 = DAT_00715f00 + param_1 * 0x994;
  iVar2 = *(int *)(iVar1 + 0xf4);
  uVar5 = (undefined3)((uint)param_4 >> 8);
  if (0 < iVar2) {
    piVar6 = (int *)(iVar1 + 0x134);
    do {
      if (param_2 == *piVar6) {
        if (param_3 != (int *)0x0) {
          *param_3 = iVar3;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2;
        }
        return CONCAT31(uVar5,1);
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = *(int *)(iVar1 + 0xf8);
  uVar4 = 0;
  if (0 < iVar2) {
    piVar6 = (int *)(iVar1 + 0x164);
    do {
      if (param_2 == *piVar6) {
        if (param_3 != (int *)0x0) {
          *param_3 = uVar4;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2;
        }
        return CONCAT31(uVar5,1);
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while ((int)uVar4 < iVar2);
    return uVar4 & 0xffffff00;
  }
  return 0;
}


