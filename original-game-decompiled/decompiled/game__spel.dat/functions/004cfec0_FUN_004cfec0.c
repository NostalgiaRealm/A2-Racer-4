
/* ==== FUN_004cfec0 @ 004cfec0 ==== 
 * signature: undefined FUN_004cfec0(void)
 * body: 004cfec0-004cff5b
 */

int __thiscall FUN_004cfec0(int *param_1,undefined4 *param_2,uint param_3)

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
      if ((*(undefined4 **)param_1[8] == (undefined4 *)0x0) ||
         (uVar2 = *(uint *)param_1[0xc], (int)uVar2 < 1)) break;
      if ((int)param_3 < (int)uVar2) {
        uVar2 = param_3;
      }
      puVar5 = param_2;
      puVar6 = *(undefined4 **)param_1[8];
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
      *(int *)param_1[0xc] = *(int *)param_1[0xc] - uVar2;
      *(int *)param_1[8] = *(int *)param_1[8] + uVar2;
      param_2 = (undefined4 *)((int)param_2 + uVar2);
    }
    iVar3 = (**(code **)(*param_1 + 4))(*(undefined1 *)param_2);
    if (iVar3 == -1) break;
    param_2 = (undefined4 *)((int)param_2 + 1);
    iVar1 = iVar1 + 1;
    param_3 = param_3 - 1;
  }
  return iVar1;
}


