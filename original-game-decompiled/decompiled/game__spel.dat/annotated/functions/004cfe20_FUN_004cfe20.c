
/* ==== FUN_004cfe20 @ 004cfe20 ==== 
 * signature: undefined FUN_004cfe20(void)
 * body: 004cfe20-004cfeb6
 */

int __thiscall FUN_004cfe20(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = 0;
  while( true ) {
    while( true ) {
      if ((int)param_3 < 1) {
        return iVar1;
      }
      if ((*(undefined4 **)param_1[7] == (undefined4 *)0x0) ||
         (uVar2 = *(uint *)param_1[0xb], (int)uVar2 < 1)) break;
      if ((int)param_3 < (int)uVar2) {
        uVar2 = param_3;
      }
      puVar5 = *(undefined4 **)param_1[7];
      puVar6 = param_2;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar1 = iVar1 + uVar2;
      param_3 = param_3 - uVar2;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - uVar2;
      *(int *)param_1[7] = *(int *)param_1[7] + uVar2;
      param_2 = (undefined4 *)((int)param_2 + uVar2);
    }
    iVar3 = (**(code **)(*param_1 + 0x14))();
    if (iVar3 == -1) break;
    *(char *)param_2 = (char)iVar3;
    param_2 = (undefined4 *)((int)param_2 + 1);
    iVar1 = iVar1 + 1;
    param_3 = param_3 - 1;
  }
  return iVar1;
}


