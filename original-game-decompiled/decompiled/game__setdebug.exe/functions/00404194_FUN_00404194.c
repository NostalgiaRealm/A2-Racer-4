
/* ==== FUN_00404194 @ 00404194 ==== 
 * signature: undefined __register FUN_00404194(undefined4 * param_1, char * param_2, int param_3)
 * body: 00404194-00404225
 */

void FUN_00404194(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *param_2;
  uVar3 = (uint)(byte)param_2[1];
  if ((cVar1 != '\n') && (cVar1 != '\v')) {
    if (cVar1 == '\f') {
      do {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1 = param_1 + 4;
        iVar4 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_3 = iVar4;
      } while (iVar4 != 0 && bVar2);
      return;
    }
    if (cVar1 == '\r') {
      do {
        iVar4 = *(int *)(param_2 + uVar3 + 2);
        FUN_00404194(param_1,(char *)**(undefined4 **)(param_2 + uVar3 + 10),
                     *(int *)(param_2 + uVar3 + 6));
        iVar5 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar4);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar2);
      return;
    }
    if (cVar1 == '\x0e') {
      do {
        iVar4 = *(int *)(param_2 + uVar3 + 2);
        FUN_00404168((int)param_1,(int)param_2);
        iVar5 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar4);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar2);
      return;
    }
    if ((cVar1 != '\x0f') && (cVar1 != '\x11')) {
      FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),2));
      return;
    }
  }
  do {
    *param_1 = 0;
    param_1 = param_1 + 1;
    iVar4 = param_3 + -1;
    bVar2 = 0 < param_3;
    param_3 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}


