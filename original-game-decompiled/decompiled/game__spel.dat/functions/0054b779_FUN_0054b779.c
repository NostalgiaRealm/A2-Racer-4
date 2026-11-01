
/* ==== FUN_0054b779 @ 0054b779 ==== 
 * signature: undefined4 __cdecl FUN_0054b779(int param_1, int * param_2, int param_3)
 * body: 0054b779-0054b7c5
 */

uint __cdecl FUN_0054b779(int param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = param_3 == 0;
  iVar3 = param_1 + param_3;
  if (!bVar4) {
    do {
      pbVar1 = (byte *)(iVar3 + -1);
      iVar3 = iVar3 + -1;
      param_1 = FUN_0055a45a((uint)*pbVar1,param_2);
      if (param_1 == 0xffffffff) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar4 = param_3 == 0;
  }
  if (bVar4) {
    uVar2 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  else {
    if (param_3 == 0) {
      iVar3 = 1;
      do {
        param_1 = FUN_0055a2ba(param_2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = param_1 & 0xffffff00;
  }
  return uVar2;
}


